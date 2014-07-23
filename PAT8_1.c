/*
给定一批整数，分析每个整数的每一位数字，求出现次数最多的个位数字。例如给定3个整数1234、2345、3456，其中出现最多次数的数字是3和4，均出现了3次。

输入格式：

输入在第1行中给出正整数N（<=1000），在第2行中给出N个不超过整型范围的正整数，数字间以空格分隔。

输出格式：

在一行中按格式“M: n1 n2 ...”输出，其中M是最大次数，n1、n2、……为出现次数最多的个位数字，按从小到大的顺序排列。数字间以空格分隔，但末尾不得有多余空格。

输入样例：
3
1234 2345 3456
输出样例：
3: 3 4
*/
#include<stdio.h> 
int main(){
	int n;
	scanf("%d",&n);//数据个数
	int i;
	int max=0;//最大次数
	int count[10]={0};
	int x;
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&x);
		do{
			int tmp=x%10;
			count[tmp]++;
			if(count[tmp]>max){
		//		printf("%d %d\n", tmp,count[tmp]);
				max=count[tmp];
			}
			x/=10;
		}while(x!=0);
	}
	int lastTag;
	for (i = 0; i < 10; ++i)
	{
		if(count[i]==max){
			lastTag=i;
		}
	}
	printf("%d:", max);
	if(max!=0){
		printf(" ");
		for (i = 0; i < 10; ++i)
		{
			if(count[i]==max){
				printf("%d",i );
				if(i!=lastTag){
					printf(" ");
				}
			}
		}
	}
	return 0;
}
