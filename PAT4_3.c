/*
输入格式：

输入在一行中给出2个正整数M和N（1<=M<=N<=500）。

输出格式：

在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例：
10 31
输出样例：
7 143
*/
#include <stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);//注意:::如果读入m=1 
	if(m==1){
		m++;
	}
	int i=0,sum=0;//素数的个数和它们的和
	while(m<=n){
		//判断m是否是素数
		int j=2;
		int tag=1;
		while(j<m-1){
			if(m%j==0){
				tag=0;
				break;
			}
			j++;
		}
		if(tag==1){
			i++;
			sum+=m;
		}
		m++;
	}
	printf("%d %d\n",i,sum);
	return 0;
}
