#include <iostream>
using namespace std;

int main()
{
	int *wsk = 3;
	int wsk = 0x61ff08;
	int n = &wsk;
	
	cout << n;
	cout << wsk;
	
	return 0;
}