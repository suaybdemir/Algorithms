#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	int arr[n];

	
	for(int i=0 ; i<n; i++)
	{
		cin>>arr[i];
	}

	
	
	cout<<endl;
	
	long long count = 0;
	
	for(int i=0 ; i<n-1 ; i++)
	{
		
			if(arr[i]>arr[i+1])
			{
				count += arr[i] - arr[i+1];
				arr[i+1] = arr[i];
			}
		
		
	}
	
	cout<<count;
			
	return 0;
}
