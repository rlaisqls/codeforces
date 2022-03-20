#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
#include<cmath>
using namespace std;
int a[200001];
void solve(){
	int i,n,p;
	long long sum=0;
	priority_queue <long long> Q;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i]*1LL;
	}
	if(n==1){cout<<"YES\n";return;}
	p=n-1;
	sort(a,a+n);
	Q.push(sum);
	while(!Q.empty()){
		long long x=Q.top();
		Q.pop();
		if(x==a[p]){
			p--;
			continue;
		}
		if(x<a[p]||x/2<a[0])break;
		Q.push(x/2);
		Q.push(x/2+(x%2));	
	}
	if(p==-1)cout<<"YES\n";
	else cout<<"NO\n";
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
