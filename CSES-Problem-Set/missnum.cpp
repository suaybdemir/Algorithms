#include <iostream>
#include <stack>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void)
{
	long long n;
	cin>> n;
	
	long long sum = (n)*(n+1)/2;
	
	for(int i = 1; i<n; i++)
	{
		int num;
		cin>>num;
		sum -= num;
	}
	
	cout<<sum;
	
	return 0;
}
