#include <iostream>
using namespace std;
int f(long x){
	int mask=1;//xµÄmask
	int tmpx=x;
	int result=0;
	do{
		mask*=10;
		tmpx/=10;
	}while(tmpx>0);
	//cout<<"mask: "<<mask<<endl;
	int i=1;
	do{
		mask/=10;
		int a=x/mask;
		a*=i;
	//	cout<<"A: "<<a<<endl;
		result+=a;
		i*=-1;
		x%=mask;
	}while(x>0);
	return result;
}
int main(int argc, char const *argv[])
{
	long r,l,k;
	cin>>l>>r>>k;
	long num=0;
	while(l>1000000007L){
		l%=1000000007L;
	}
	while(r>1000000007L) {
		r%=1000000007L;
	}
	if(l>r){
		r+=1000000007L;
	}
	for (long i = l; i <= r; ++i)
	{
		if(f(i)==k){
			num+=i;
			if(num>1000000007L){
				num-=1000000007L;
			}
		}
	}
	cout<<num<<endl;
	return 0;
}
