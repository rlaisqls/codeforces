#include<iostream>
using namespace std;
void solve(){
	int i;
	string s;
	char c;
	cin>>s>>c;
	for(i=0;i<s.length();i++){
		if(s[i]==c&&i%2==0&&(s.length()-i)%2==1){
			cout<<"YES\n";return;
		}
	}
	cout<<"NO\n";
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
