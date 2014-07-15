#include <stdio.h>

int main()
{
	int t1,add;
	int h1,m1,ah,am;
	scanf("%d %d",&t1,&add);
	h1=t1/100;
	m1=t1%100;
	ah=add/60;
	am=add%60;
	int h2=h1+ah;
	int m2=m1+am;
	h2+=(m2/60);
	m2%=60;
	printf("%d%d",h2,m2);
	return 0; 
}
