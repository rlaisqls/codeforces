#include<iostream>
#include<algorithm>
using namespace std;
int a[1001];
void solve(){
	int i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[n-1]+a[n-2]<<'\n';
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
