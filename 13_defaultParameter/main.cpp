#include <iostream>
using namespace std;
#define MAX(n1,n2) ((n1) > (n2) ? (n1) : (n2))

int big(int n1, int n2, int n3 = 100)
{
	int nMax;
	nMax = MAX(n1, n2);
	if (nMax > n3)
		return n3;
	else
		return nMax;
}

int main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}