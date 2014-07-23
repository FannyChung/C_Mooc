//如何构造素数表：两种方法
#include<stdio.h> 
/*
//判断是否能被已知的且比它小的素数整除
int isPrime_1(int x,int knownPrime[],int knownPrimeSize){
	int ret=1;
	int i;
	for (i = 0; i < knownPrimeSize; ++i)
	{
		if(x%knownPrime[i]==0){
			ret=0;
			break;
		}
	}
	return ret;
}

int main(){
	const int number=10;//求前十个素数
	int prime[number]={2};//第一个素数是2
	int count=1;//已有的素数个数
	int i=3;//当前求的数
	while(count<number){
		if(isPrime_1(i,prime,count)){
			prime[count++]=i;
		}
		i++;
	}

	for (i = 0; i < number; ++i)
	{
		printf("%d\n", prime[i]);
		if((i+1)%5==0)
			printf("\n");
		else
			printf("\t");
	}
	return 0;
}

*/
int main(){
	const int maxNum=25;
	int isPrime[maxNum];
	int i;
	int x;
	for (i = 0; i < maxNum; ++i)//初始化，假设每个都是素数
	{
		isPrime[i]=1;
	}
	for (x = 2; 2 < maxNum; ++2)
	{
		if(isPrime[x]){
			for (i = 2; i*x < maxNum; ++i)
			{
				isPrime[i*x]=0;//把当前素数的倍数置为非素数
			}
		}
	}
	//打印
	for (i = 2; i < maxNum; ++i)
	{
		if (isPrime[i])
		{
			printf("%d\n", i);
		}
	}
	return 0;
}