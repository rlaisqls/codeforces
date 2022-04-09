#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
priority_queue <int> Q;
vector <int> V[200001];
int arr[200001];
bool cmp(int a,int b){return a>b;};
void solve(){
	//150min
	int i,n,cnt=1,res=0;
	cin>>n;
	for(i=0;i<n-1;i++)cin>>arr[i];
	sort(arr,arr+n-1);
	
	vector <int> C;
	int p=-1;
	for(i=0;i<n-1;i++){
		if(i>0&&arr[i]==arr[i-1])cnt++;
		else{C.push_back(cnt);cnt=1;}
	}

	C.push_back(cnt);
	sort(C.begin(),C.end(),cmp);
	for(i=0;i<C.size();i++)Q.push(C[i]+i);
	/*실제로 트리 구조가 어떻게 되어있는지는 상관 X
	각 층에 정점이 몇개씩 있는지만 C에 저장 후 Q에 push 
	긴거부터 하나씩 선택감염시켜줌 (C[i]+i)*/
	res=Q.size();
	//res는 지금까지 지나간 시간이고, 층에 하나씩 선택감염 시켜준 이후에 while문 시작 
	while(res<Q.top()){
		/*시간은 계속 1씩 증가하고 있음
		근데 만약에 Q에 들어가있는게 아직까지 만족이 안됐다면 선택감염, res++*/ 
		res++;
		Q.push(Q.top()-1);
		Q.pop();
	}
	//결과 출력
	cout<<res<<"\n";
	while(!Q.empty())Q.pop();
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
