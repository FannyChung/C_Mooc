/*
��Pi��ʾ��i�����������θ�����������M <= N <= 104�������PM��PN������������

�����ʽ��

������һ���и���M��N������Կո�ָ���

�����ʽ��

�����PM��PN������������ÿ10������ռ1�У�����Կո�ָ�������ĩ�����ж���ո�

����������
5 27
���������
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/
#include<stdio.h> 

int isPrime(int n){
	int i = 2;
	for ( ;i <= sqrt(n); ++i)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void printPrime(int begin,int end){
	int i = 1;
	int n=2;//��һ��������2 
	int count=begin;
	while(i<begin){
		n++;
		if(isPrime(n)){
			i++;
		}
	}

	while(count<=end){
		if(isPrime(n)){
			printf("%d",n );
			if(!((count==end)||(count-begin)%10==9)){
				printf(" ");
			}
			if((count-begin)%10==9){
				printf("\n");
			}
			count++;
		}
		n++;
	} 
}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	printPrime(m,n);
	return 0;
}
