#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0 || n == 1) 
            cout << n / 2;
	else
            cout << n;
	return 0;
}
