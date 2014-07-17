#include <stdio.h>
int main(int argc, char const *argv[])
{
	char c;
	scanf("%c",&c);
	int i=1;
	do{
		if(c<='Z'&&c>='A'){//ด๓ะด
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
