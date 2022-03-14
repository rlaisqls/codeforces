#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
bool ch[101][101]; 
char map[101][101]; 
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int x,y,n,m;
bool check(int sx,int sy){
	int i,j,k;
	for(y=sy;y<m&&map[sx][y]=='1';y++)ch[sx][y]=1;
	y--;
	bool flag=1;
	for(x=sx+1;x<n&&flag;x++){
		for(i=sy;i<=y&&flag;i++){
			ch[x][i]=1;
			if(map[x][i]=='0'){flag=0;x--;}
		}
	}
	x--;
	if(sx-1>=0)for(k=sy;k<=y;k++)if(map[sx-1][k]=='1')return 0;
	if(x+1<n)for(k=sy;k<=y;k++)if(map[x+1][k]=='1')return 0;
	if(sy-1>=0)for(k=sx;k<=x;k++)if(map[k][sy-1]=='1')return 0;
	if(y+1<m)for(k=sx;k<=x;k++)if(map[k][y+1]=='1')return 0;
	return 1;
}
void solve(){
	memset(ch,0,sizeof(ch));
	memset(map,' ',sizeof(map));
	int i,j,k;
	
	cin>>n>>m;
	for(i=0;i<n;i++)for(j=0;j<m;j++)cin>>map[i][j];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(map[i][j]=='1'&&ch[i][j]==0&&!check(i,j)){cout<<"NO\n";return;}
		}
	}
	cout<<"YES\n";return;
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
