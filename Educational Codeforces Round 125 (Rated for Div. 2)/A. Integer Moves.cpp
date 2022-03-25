#include<iostream>
using namespace std;
void solve(){
    int x,y,r=0;
    cin>>x>>y;
    int d=x*x+y*y;
    while(r*r<d)++r;
    if(x==0&&y==0)cout<<"0\n";
    else if(r*r==d)cout<<"1\n";
    else cout<<"2\n";
}
int main(){
  int T;
  cin>>T;
  while(T--)solve();
}
