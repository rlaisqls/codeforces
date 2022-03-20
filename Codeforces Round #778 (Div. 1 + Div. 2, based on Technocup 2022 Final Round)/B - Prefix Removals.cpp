#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int cnt[26];
void solve(){
	memset(cnt,0,sizeof(cnt));
	string s;
	int i,j;
	cin>>s;
	for(i=0;i<s.length();i++)cnt[s[i]-'a']++;
	for(i=0;i<s.length();i++){
		cnt[s[i]-'a']--;
		if(cnt[s[i]-'a']==0)break;
		
	}
	for(;i<s.length();i++)cout<<s[i];
	cout<<'\n';
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
