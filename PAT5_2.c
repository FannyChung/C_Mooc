/*
����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ���������fu���֡�ʮ�����ֶ�Ӧ��ƴ�����£�

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
�����ʽ��

������һ���и���һ���������磺 1234 ��

��ʾ�������������������������

�����ʽ��

��һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո��� yi er san si��

����������
-600
���������
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
	return 0;
}
