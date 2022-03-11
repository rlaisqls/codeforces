#include<iostream>
using namespace std;
void solve(){
	int i,n;
	cin>>n;
	if(n>=20)cout<<"NO\n";
	else{
		cout<<"YES\n";
		long long m=1;
		for(i=0;i<n;i++){
			cout<<m<<" ";
			m+=m*2;
		}
		cout<<"\n";
	}
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
