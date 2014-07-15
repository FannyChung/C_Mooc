/*
水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例 如：153 = 13 + 53+ 33。 本题要求编写程序,计算所有N位水仙花数。

输入格式：

输入在一行中给出一个正整数N（3<=N<=7）。

输出格式：

按递增顺序输出所有N位水仙花数，每个数字占一行。

输入样例：
3
输出样例：
153
370
371
407
*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a=1;
	int m=1;
	while(m<n){
		a*=10;
		m++;
	}
	int b=a*10-1;
	while(a<=b){
		int j=a;//当前要计算的数 
		int sum=0;
		while(j>0){//计算每一位 
			int temp=j%10;
			int q=temp;//结果 
			int e=1;//幂数 
			while(e<n){
				q*=temp;
				e++; 
			}
			sum+=q;
			j/=10;
		}
		if(a==sum){
			printf("%d\n",a);
		}
		a++; 
	} 
	return 0;
}
