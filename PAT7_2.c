/*
��������[-231, 231]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��

�����ʽ��

�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���

�����ʽ��

��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����

����������
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
���������
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/
#include<stdio.h> 
int main(){
	int testNums;
	scanf("%d",&testNums);
	int i =0;
	for (i= 0; i < testNums; ++i)
	{
		long long a,b,c;//������-2 31֮��
		scanf("%lld %lld %lld",&a,&b,&c);//--------------ע��scanfҪ��Ϊ%lld 
		if(a+b>c){
			printf("Case #%d: true\n",i+1);
		}else{
			printf("Case #%d: false\n",i+1);
		}
	}
	return 0;
}