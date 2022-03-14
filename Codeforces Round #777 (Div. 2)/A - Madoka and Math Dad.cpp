#include<iostream>
using namespace std;
void solve(){
	int i,j,n;
	cin>>n;
	if(n<3)cout<<n<<'\n';
	else if(n%3==0){
		for(i=0;i<n/3;i++)cout<<"21";
		cout<<"\n";
	}else{
		if((n-2)%3==0)cout<<"2";
		for(i=0;i<n/3;i++)cout<<"12";
		if((n-1)%3==0)cout<<"1";
		cout<<"\n";
	}
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
