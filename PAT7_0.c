/*
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
*/
#include<stdio.h> 

void display(int n){
	int w=0;//n��λ��
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
