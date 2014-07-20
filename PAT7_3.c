/*
令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。

输入格式：

输入在一行中给出M和N，其间以空格分隔。

输出格式：

输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
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
	int n=2;//第一个素数是2 
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
