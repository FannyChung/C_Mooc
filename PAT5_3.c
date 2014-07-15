#include <stdio.h>
int main(){
	int a,n;
	scanf("%d %d",&a,&n);
	int sum=0;
	int tmp=a;
	int i;
	for ( i= 1; i <= n; ++i)
	{
		sum+=tmp;
		tmp+=a*pow(10,i);
	}
	printf("%d",sum);
	return 0;
}
