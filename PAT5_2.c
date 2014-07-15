/*
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出“fu”字。十个数字对应的拼音如下：

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：

输入在一行中给出一个整数，如： 1234 。

提示：整数包括负数、零和正数。

输出格式：

在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。

输入样例：
-600
输出样例：
fu liu ling ling

*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<0){
		printf("%s ", "fu");
		n=0-n;
	}
	int w=0;//n的位数
	int tmp=n;
	do{
		n/=10;
		w++;
	}while(n>0);
	int i=w;
	do{
		int mask=pow(10,i-1);
		int prtNum=tmp/mask;
		if(prtNum==0){
			printf("%s", "ling");
		}else if(prtNum==1){
			printf("%s", "yi");
		}else if(prtNum==2){
		printf("%s", "er");	
		}else if(prtNum==3){
			printf("%s", "san");
		}else if(prtNum==4){
			printf("%s", "si");
		}else if(prtNum==5){
			printf("%s", "wu");
		}else if(prtNum==6){
			printf("%s", "liu");
		}else if(prtNum==7){
		printf("%s", "qi");	
		}else if(prtNum==8){
			printf("%s", "ba");
		}else{
			printf("%s", "jiu");
		}
		tmp%=mask;
		i--;
		if(i>0){
			printf(" ");
		}
	}while(i>0);
	return 0;
}
