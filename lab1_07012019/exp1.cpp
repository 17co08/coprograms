#include<iostream>
using namespace std;
void dectobin(int);
int power(int ,int);
void bintodec(int );

void dectobin(int x)
	{  int a,res;
		a=x;
		res=0;
		while(a!=0)
		{
			a=a%2;
			res=res*10+a;
			a=a/10;
		}
				
		cout<<res<<"is the binary equivalent of"<<x;
	}
	int power(int x,int y)
	{ 
		if(x==0)
		{
			return 0;
		}
		else{
		int po=1;
		for(int i=y;i>0;i--)
		{
			po=po*x;
		}
		return po;
	}
}

	void bintodec (int x)
	{
		int a,p,n,res=0;
		a=x;
		n=x;
		p=x;
		int count=0;
		while(a!=0)
		{a=a/10;
			count++;
		}
		while(n!=0)
		{
			p=n%10;
			for(int i=0;i<=count;i++)
			{
				res=res+p*power(2,i);
			}
			n=n/10;
		}
		cout<<"result"<<res;
	}
	int main()
{

	
	int n,x;
	
	do {
			cout<<"Enter chice";
	cout<<"1.deecimal to binary "<<endl<<"2.binary to decimal";
	cin>>n;
	cout<<"enter the number";
	cin>>x;
		switch (n)
	{case 1:dectobin(x);
           break;
	case 2:bintodec(x);
	break;}
}while (n!=0);
	cout<<"thank you foir using this program";
    return 0;
}
	
