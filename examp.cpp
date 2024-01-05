#include <iostream>

using namespace std;

int main(void)
{
	int x = 0;
	int *a = &x;
	int **c = &a;
	**c = 6;
	int ***g = &c;
	int ****t = &g;
	
	cout<< *a<<" ";
	cout<< c<<" ";
	cout<< g<<" ";
	cout<< t<<" ";
	
	return 0;
}
