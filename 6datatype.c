#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
/*	//×Ö·ûÊäÈëÊä³ö
	char c;
	scanf("%c",&c);
	printf("%i\n", c);
	c++;
	printf("%i\n", c);
	int i=c-'B';
	printf("%d\n", i);
	//²âÊÔbool
	bool tag=true;
	printf("%d\n", tag);*/
int i,x,y;	
i=x=y=0;
do {
	++i;
	if ( i%2 ) 
		x+=i, 
	i++;
	y +=i++;
} while ( i<=7 );
printf("%d %d %d", i, x, y);
	return 0;
}
