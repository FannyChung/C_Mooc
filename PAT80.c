/*
����Ҫ��������N�������в��Ҹ�����X������ҵ������X��λ�ã���0��ʼ���������û���ҵ��������Not Found����
*/
#include<stdio.h> 
int main(){
	int n,x;
	scanf("%ld %ld",&n,&x);
	int i;
	int k;
	int findTag=0;
	for ( i = 0; i < n; ++i)
	{
		scanf("%ld",&k);
		if(k==x){
			printf("%ld\n",i);
			findTag=1;
			break;
		}
	}
	if(!findTag){
		printf("%s\n", "Not Found");
	}
	return 0;
}
