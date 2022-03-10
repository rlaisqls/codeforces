#include<iostream>
#include<algorithm>
using namespace std;
struct S{
	int ind,x,v;
}arr[200001];
bool cmp1(S a,S b){return a.v<b.v;}
bool cmp2(S a,S b){return a.x<b.x;}
void solve(){
	int i,n,m,sum=0;
	cin>>n>>m;
	for(i=0;i<m;i++){
		cin>>arr[i].x>>arr[i].v;
		arr[i].ind=i+1;
	}
	sort(arr,arr+m,cmp1);
	sort(arr,arr+n*2,cmp2);
	for(i=0;i<n*2;i++)sum+=arr[i].v;
	cout<<sum<<"\n";
	for(i=0;i<n;i++){
		cout<<arr[i].ind<<" "<<arr[n*2-1-i].ind<<"\n";
	}
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
