#include<iostream>
#include<vector>
using namespace std;
void solve(){
	long long res=1;
	int i,n;
	cin>>n;
	if(n%2==1){cout<<"0\n";return;}
	for(i=2;i<=n/2;i++){
		res=(res*i*i)%998244353;
	}
	cout<<res<<"\n";
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
