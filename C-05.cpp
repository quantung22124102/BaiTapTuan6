#include<iostream>
#include<cmath>
using namespace std;
int x[100];
void rev(int a,int b,int c,int d)
{
	for(int i=d;i>=1;i--)
	{
		if(b-i>=0)
		{
			
			if(b-i==0)
			{
				for(int j=1;j<=c;j++)
				{
					cout<<x[j]<<" ";
				}
			}
			else
			{
				rev(a,b-i,c+1,i);
			}
		}
	}
}
int main()
{
	int a;
	cout<<"Nhap so nguyen duong n: ";
	cin>>a;
	rev(a,a,1,a);
	return 0;
}
