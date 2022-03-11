#include<iostream>
#include<cmath>
using namespace std;
void solve(){
	int n;
	cin>>n;
	cout<<(long long)pow(2,n)-1<<'\n';
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
