int main(){
	int inT;
	int addT;
	scanf("%d %d",&inT,&addT);//读入要 
	int hr=inT/100;
	int min=inT%100;
	inT=hr*60+min+addT;//转变成分钟并加上要加的时间 
	hr=inT/60;
	min=inT%60;//如果min是一位数？则 
	printf("%d%02d",hr,min); 
	return 0;
} 
