/*
让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。

输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。

输出格式：每个测试用例的输出占一行，用规定的格式输出n。

输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123
*/
#include<stdio.h> 

void display(int n){
	int w=0;//n的位数
	int tmp=n;
	do{
		tmp/=10;
		w++;
	}while(tmp>0);
	if(w==3){
		w--;
		int k=n/100;
		n%=100;
		int i;
		for ( i= 0; i < k; ++i)
		{
			printf("B");
		}
	}
	if(w==2){
		w--;
		int k=n/10;
		n%=10;
		int i;
		for ( i= 0; i < k; ++i)
		{
			printf("S");
		}
	}
	if(w==1){
		int i;
		for ( i= 0; i < n; ++i)
		{
			printf("%d",i+1);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	display(n);
	return 0;
}
