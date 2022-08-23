#include<bits/stdc++.h>
using namespace std;

int k, p = 0;
bool f[10000005];

int main()
{
	cin >> k;
	memset(f, 1, sizeof(f));
	f[0] = 0;
	f[1] = 0;
	for (int i = 2; i <= 10000000; i++)
	{
		if (f[i])
		{
			p++;
			if (p == k)
			{
				cout << i << endl;
				return 0;
			}
			for (int j = i * i; j <= 10000000; j += i)
				f[j] = 0;
		}
	}
	return 0;
}
