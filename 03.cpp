#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull n;

ull reverse(ull x)
{
	ull a = 0;
	while (x)
	{
		a = a * 10 + x % 10;
		x /= 10;
	}
	return a;
}

int main()
{
	cin >> n;
	int x = reverse(n);
	while (n != x)
	{
		cout << n << "+" << x << "=" << n + x << endl;
		n += x;
		x = reverse(n);
	}
	return 0;
}
