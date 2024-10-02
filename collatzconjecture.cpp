#include<iostream>
using namespace std;
int main()
{
long int n=0;
	cout<<"Enter a no."<<endl;
	cin>>n;
	cout<<n;
	while(n!=1)
	{
		if(n%2!=0)
		{
			n=3*n+1;
		}
		else
		{
			n=n/2;
		}
	cout<<" "<<n;
}
cout<<endl;

	return 0;
}