/*
现在，你的程序要读入这个错误的十进制数，然后输出正确的十进制数。提示：你可以把18转换回0x12，然后再转换回12。

输入格式：

输入在一行中给出一个[0, 153]范围内的正整数，保证能转换回有效的BCD数，也就是说这个整数转换成十六进制时不会出现A-F的数字。

输出格式：

输出对应的十进制数。

输入样例：
18
输出样例：
12
*/
int main(){
	int n;
	scanf("%d",&n);
	int result=(n%10)*100+(n%100/10)*10+(n/100);
	printf("%d",result);
	return 0;
} 
