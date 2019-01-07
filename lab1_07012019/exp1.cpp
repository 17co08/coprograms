#include<iostream>
using namespace std;
void dectobin(int);
int power(int ,int);
void bintodec(int );


	void bintodec (int x)
	{
		int a,n,res;
		a=x;
		n=x;
		int count=0;
		while(a!=0)
		{a=a/10;
			count++;
		}
		while(n!=0)
		{
			n=n%10;
			for(int i=0;i<=count;i++)
			{
				res=n*power(2,i);
			}
		}
		cout<<"result"<<res;
	}
	int main()
{
	cout<<"Enter chice";
	cout<<"1.deecimal to binary "<<endl<<"2.binary to decimal";
	int n,x;
	cin>>n;
	cout<<"enter the number";
	cin>>x;
	if(n==1)
	{ dectobin(x);
    }
	else
	{ bintodec(x);
	}
    return 0;
}
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
		for(int i=y;i>0;i++)
		{
			po=x*y;
		}
		return po;
	}
}
