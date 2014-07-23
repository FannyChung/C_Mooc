/*
本题要求从输入的N个整数中查找给定的X。如果找到，输出X的位置（从0开始数）；如果没有找到，输出“Not Found”。
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
