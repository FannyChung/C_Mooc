/*
��������Ϸ����ϵͳ�������һ��100���ڵ����������û�����һ����������в²⣬��Ҫ���д�����Զ���������������ı��������бȽϣ�����ʾ���ˣ���Too big����������С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�����µ�����������򡣳���Ҫ��ͳ�ƲµĴ��������1�β³���������ʾ��Bingo!�������3�����ڲµ�����������ʾ��Lucky You!�����������3�ε�����N��>3�������ڣ�������N�Σ��µ�����������ʾ��Good Guess!�����������N�ζ�û�вµ�������ʾ��Game Over������������������ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������

�����ʽ��

�����һ���и���2��������100�����������ֱ���ϵͳ��������������Լ��²��������N�����ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��

�����ʽ��

��һ�������ÿ�β²���Ӧ�Ľ����ֱ������¶ԵĽ����Game Over���������

����������
58 4
70
50
56
58
60
-2
���������
Too big
Too small
Too small
Good Guess!
*/
#include <stdio.h>
int main(){
	int rdNum;
	int n;
	scanf("%d %d",&rdNum,&n);
	int guess;
	int times=1;//�µĴ���
	scanf("%d",&guess);
	while(guess!=rdNum){
		if(guess>rdNum){
			printf("%s\n","Too big" );
		}else{
			printf("%s\n","Too small");
		}
		times++;
		scanf("%d",&guess);
		if(guess<0&&times<n){
			break;
		}
	}
	if(guess<0&&times<n){
		printf("%s\n", "Game Over");
	}else if(times==1){
		printf("%s\n", "Bingo!");
	}else if(times<=3){
		printf("%s\n", "Lucky You!");
	}else if(times<=n){
		printf("%s\n", "Good Guess!");
	}else{
		printf("%s\n", "Game Over");
	}
	return 0;
}
