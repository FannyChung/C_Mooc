int main(){
	int inT;
	int addT;
	scanf("%d %d",&inT,&addT);//����Ҫ 
	int hr=inT/100;
	int min=inT%100;
	inT=hr*60+min+addT;//ת��ɷ��Ӳ�����Ҫ�ӵ�ʱ�� 
	hr=inT/60;
	min=inT%60;//���min��һλ������ 
	printf("%d%02d",hr,min); 
	return 0;
} 
