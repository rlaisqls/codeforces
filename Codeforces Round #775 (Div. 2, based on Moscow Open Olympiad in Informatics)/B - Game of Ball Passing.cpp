#include<iostream>
using namespace std;
int a[100001];
void solve(){
	long long i,n,sum=0,m=0;
	cin>>n;
	for(i=0;i<n;i++){
		long long a;
		cin>>a;
		sum+=a;
		m=max(m,a);
	}
	if(sum==0)cout<<"0\n";
	else if(sum-m<m)cout<<m-(sum-m)<<"\n";
	else cout<<"1\n";
	
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
