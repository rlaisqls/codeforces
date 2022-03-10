#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int s1[100001];
long long s2[100001];
vector <int> a[100001];
int main(){
	long long res=0;
	int n,m,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)a[i].resize(m+1);
	for(i=1;i<=n;i++)for(j=1;j<=m;j++)cin>>a[i][j];
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			int c=a[i][j];
			res+=(long long)i*s1[c]-s2[c];
			s1[c]++;s2[c]+=i;
		}		
	}	
	memset(s1,0,sizeof(s1));
	memset(s2,0,sizeof(s2));
	cout<<endl;
	for(j=1;j<=m;j++){
		for(i=1;i<=n;i++){
			int c=a[i][j];
			res+=(long long)j*s1[c]-s2[c];
			s1[c]++;s2[c]+=j;
		}
	}
	cout<<res<<'\n';
}
