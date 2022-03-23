#include<stdio.h>
int res;
void calc(int n,int k,int ten){ 
	while(n>0){
		if(n%10==k)res+=ten;
		n/=10;
	}
}
int f(int n,int k){
	
	if(n==-1)return -1;	
	if(n<k)return 0;
	
	int m=n,ten=1;
	res=0;
	while(1){
		if(m<10){
			if(k!=0&&k<=m)res+=ten;
			break;
		}
		if(k!=0)res+=ten;
		while(m%10!=9){
			calc(m,k,ten);
			m--;
		}
		res+=(m/10)*ten;
		m/=10,ten*=10;		
	}
	return res;
	
}
int main(){
	
	int a,b,k;
	scanf("%d %d %d",&a,&b,&k);
	printf("%d",f(b,k)-f(a-1,k));
	return 0;
	
}
