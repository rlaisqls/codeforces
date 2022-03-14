#include<iostream>
#include<vector>
using namespace std;
void solve(){
	char map[101][101];
	int i,j,n,m,cnt=0;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>map[i][j];
			if(map[i][j]=='1')cnt++;
		}	
	}
	if(map[1][1]=='1'){cout<<"-1\n";return;}
	cout<<cnt<<'\n';
	for(i=n;i>0;i--){
		for(j=m;j>0;j--){
			if(map[i][j]=='1'){
				if(i!=1)cout<<i-1<<' '<<j<<' '<<i<<' '<<j<<'\n';
				else cout<<i<<' '<<j-1<<' '<<i<<' '<<j<<'\n';
			}
		}
	}
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
