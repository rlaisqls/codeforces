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
	/*������ Ʈ�� ������ ��� �Ǿ��ִ����� ��� X
	�� ���� ������ ��� �ִ����� C�� ���� �� Q�� push 
	��ź��� �ϳ��� ���ð��������� (C[i]+i)*/
	res=Q.size();
	//res�� ���ݱ��� ������ �ð��̰�, ���� �ϳ��� ���ð��� ������ ���Ŀ� while�� ���� 
	while(res<Q.top()){
		/*�ð��� ��� 1�� �����ϰ� ����
		�ٵ� ���࿡ Q�� ���ִ°� �������� ������ �ȵƴٸ� ���ð���, res++*/ 
		res++;
		Q.push(Q.top()-1);
		Q.pop();
	}
	//��� ���
	cout<<res<<"\n";
	while(!Q.empty())Q.pop();
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
}
