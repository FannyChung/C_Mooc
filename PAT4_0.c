/*
����������6��������A�����Ǵ�A��ʼ������4�����֡������������������ɵ����ظ����ֵ�3λ����

�����ʽ��

������һ���и���A��

�����ʽ��

������������ĵ�3λ����Ҫ���С����ÿ��6���������������Կո�ָ�������ĩ�����ж���ո�

����������
2
���������
234 235 243 245 253 254
324 325 342 345 352 354
423 425 432 435 452 453
523 524 532 534 542 543
*/
int main(){
	int A;
	scanf("%d",&A);
	int i=A,j,k;
	int count=0;
	while(i<=A+3) {
		j=A;
		while(j<=A+3){
			k=A; 
			while(k<=A+3){
				if(i!=j&&j!=k&&i!=k) {
					printf("%d%d%d",i,j,k);
					count++;
					if(count==6){
						printf("\n");
						count=0;
					}else{
						printf(" ");
					}
				}
				k++;
			} 
			j++;
		}
		i++;
	}
	return 0;
} 