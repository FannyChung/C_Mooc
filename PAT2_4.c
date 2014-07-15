int main(){
	int n;
	scanf("%d",&n);
	int s=n%16;
	int i=1;
	while(n/16!=0){
		n/=16;
		i*=10;
		s=s+(n%16)*i;
	}
	printf("%d",s);
	return 0;
} 
