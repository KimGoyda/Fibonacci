

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{	
	int fib, n;
	int a = 0;
	int b = 1;
	cin >> n;
	for(int i=0;i<n;i++){
		cout << b << " ";
		fib = a+b;
		a = b;
		b = fib;
	}
	system("pause");
    return 0;
}

