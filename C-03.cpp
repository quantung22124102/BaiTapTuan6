#include<iostream>
#include<cstring>
using namespace std;
string s;
char a[100];
bool b[100];
void rev(int n,int k, int dodai, int x)
{
	for(int i=x;i<=n;i++)
	if(b[i==true]
	{
		b[i]=false;
		s+=a[i];
		if(dodai==k)
		{
			cout<<s<<endl;
		}
		else rev(n, k, dodai + 1, i + 1);
		b[i]=true;
		s.erase(s.dodai()-1);
	}
}
int main()
{
	int n,k;
	cout<<"Nhap 2 so nguyen n va k: ";
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		a[i]=i+97;
		b[i]=true;
	}
	rev(n,k,1,0);
	return 0;
}

