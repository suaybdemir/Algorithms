#include <iostream>
#include <string>

using namespace std;

int main(void)
{

	string input;
	cin>>input;
	
	int count = 1;
	int actual = 1;
	
	int i = 0;
	while(i!=input.length())
	{
		if(input[i]==input[i+1])
		{
			count ++;
			i++;
			
		}
		else
		{
			if(count>actual)
			{
				actual = count;
			}
			count = 1;
			i++;
		}
		
	}


	
	cout<<actual;
	
	return 0;
}
