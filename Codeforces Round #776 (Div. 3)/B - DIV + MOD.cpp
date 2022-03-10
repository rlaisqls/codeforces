#include<iostream>
using namespace std;
void solve(){
	int l,r,a,n,i;
	cin>>l>>r>>a;
	n=((r+1)/a)*a-1;
	if(n<l){
		if(l-n<r-(n+a)){
			cout<<l/a+l%a<<'\n';
		}else cout<<r/a+r%a<<'\n';
	}else cout<<n/a+a-1<<'\n';
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
