#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
bool solve(){
	queue <int> Q;
	int res[100001];
	int i,n;
	int ch=0;
	cin>>n;
	for(i=0;i<n;i++){
		int a;
		cin>>a;
		Q.push(a);
		if(a==1)ch++;
	}
	if(ch!=1)return 0;
	int s=Q.size();
	for(i=0;i<s&&!Q.empty();i++){
		int x=Q.front();
		if(x==1)break;
		Q.pop(); Q.push(x);
	}
	if(Q.front()!=1)return 0;
	Q.pop();
	int b=1;
	while(!Q.empty()){
		int x=Q.front(); Q.pop();
		if(b+1<x)return 0;
		b=x;
	}
	return 1;
}
int main(){
	int T;
	cin>>T;
	while(T--)cout<<(solve()?"YES\n":"NO\n");
}
