#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int arr[100001];
void solve(){
	//25min
	int i,n,mcnt=1,cnt=1,res=0;
	cin>>n;
	for(i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	for(i=1;i<n;i++){
		if(arr[i]==arr[i-1])cnt++;
		else cnt=1;
		mcnt=max(mcnt,cnt);
	}
	while(mcnt<n){
		res+=1+min(n-mcnt,mcnt);
		mcnt+=min(n-mcnt,mcnt);
	}
	cout<<res<<"\n";
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
