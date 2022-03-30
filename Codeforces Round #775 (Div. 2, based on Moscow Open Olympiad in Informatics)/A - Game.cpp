#include<iostream>
using namespace std;
int a[101];
void solve(){
	int i,j,n,s,e;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==1)s=i;
		else break;
	}
	if(s==n-1){cout<<"0\n";return;}
	for(i=n-1;i>=0;i--){
		if(a[i]==1)e=i;
		else break;
	}
	cout<<e-s<<"\n";return;
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
