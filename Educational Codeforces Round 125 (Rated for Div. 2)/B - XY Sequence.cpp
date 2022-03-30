#include<iostream>
#include<cmath>
using namespace std;
void solve(){
	int n,B,x,y;
	long long p=0,res=0;
	cin>>n>>B>>x>>y;
	for(int i=0;i<n;i++){
		p+=(p+x<=B)?x:-y;
		res+=p;
	}
	cout<<res<<'\n';
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
