/*输入一个以#结束的字符串，本题要求将小写字母全部转换成大写字母，把大写字母全部转换成小写字母，其它字符不变。

输入格式：

输入在一行中给出一个长度不超过40的、以#结束的非空字符串。

输出格式：

在一行中按照要求输出转换后的字符串。

输入样例：
Hello World! 123#
输出样例：
hELLO wORLD! 123*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char c;
	scanf("%c",&c);
	int i=1;
	do{
		if(c<='Z'&&c>='A'){//大写
			c=(c-'A'+'a');
		}else if(c<='z'&&c>='a'){
			c=(c-'a'+'A');
		}
		printf("%c", c);
		scanf("%c",&c);
		i++;
	}while((c!='#')&&(i<=40));
	return 0;
}
