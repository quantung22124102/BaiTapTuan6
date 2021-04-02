#include<iostream>
using namespace std;
void check(int x[])
{
	cout<<&x[0];
}
int main()
{
	int x[10];
	cout<<&x[0]<<endl;
	check(x);
	return 0;
}
