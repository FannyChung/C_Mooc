#include <stdio.h>
int main(int argc, char const *argv[])
{
	char c;
	scanf("%c",&c);
	if(c=='.'){
		return 0;
	}
	int i=0;
	while(1){
		i=0;
		while(c==' '){
			scanf("%c",&c);			
		}
		while(c!=' '&&c!='.'){
			i++;
			scanf("%c",&c);
		}
		printf("%d", i);
		if(c=='.'){
			break;
		}
		printf(" ");
		scanf("%c",&c);
	}
	return 0;
}
