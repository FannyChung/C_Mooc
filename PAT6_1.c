/*
ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ������������4������������ȼ���ͬ���������ҵ�˳����㡣

�����ʽ��

������һ���и���һ������������ʽ��û�пո���������һ�������������Ⱥš�=��˵�����������

�����ʽ��

��һ���������ʽ�����������������������ĸΪ0���зǷ�������������������Ϣ��ERROR����

����������
1+2*10-10/2=
���������
10
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char c;
	int i;
	scanf("%d",&i);
	int result=i;
	scanf("%c",&c);
	int errortag=0;
	while(c!='='){
		scanf("%d",&i);
		switch(c)
		{
			case '/':
			if(i==0){
				errortag=1;
			}else{
			result/=i;
			}
			break;
			case '*':
			result*=i;
			break;
			case '-':
			result-=i;
			break;
			case '+':
			result+=i;
			break;
			default:
			errortag=1;
			break;
		}
		if(errortag)
			break;
		scanf("%c",&c);
	}
	if(errortag)
		printf("%s\n", "ERROR");
	else
		printf("%d\n", result);
	return 0;
}
