#include<iostream>
using namespace std;
int arr[2001],ind[2001],res[2001];
void solve(){
	int i,j,n,m=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>arr[i];
		ind[arr[i]]=i;
	}
	for(i=n;i>0;i--){
		int x=ind[i];
		for(j=n;j>i;j--){
			if(x-res[j]>0)x-=res[j];
			else x=j+(x-res[j]);
		}
		res[i]=x%i;
	}
	for(i=1;i<=n;i++){
		cout<<res[i]<<' ';
	}
	cout<<'\n';
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
