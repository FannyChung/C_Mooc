/*
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/
#include<stdio.h> 

void display(int n){
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
}
int main(){
	char c;
	int sum=0;
	scanf("%c",&c);
	while(c!='\n'){
		sum+=c-'0';
		scanf("%c",&c);
	}
	display(sum);
	return 0;
}
