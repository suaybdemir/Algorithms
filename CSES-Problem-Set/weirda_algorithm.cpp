#include <iostream>

using namespace std;

int main(void)
{
	long unsigned int n;
	do
	{
		cin>>n;
	}while(n<1 && n>100000);
	
	cout<<n<<" ";
	while(n!=1)
	{
			if(n%2==0)
			{
				n= n/2;
				cout<<n<<" ";
			}
			else
			{
				n = 3*n +1 ;
			
				cout<<n<<" ";
			}
			
			
			
			
	}
	return 0;
}
