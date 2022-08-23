#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005];
int maxn, minn;

int main()
{
	cin >> n;
	cin >> a[1];
	maxn = a[1];
	minn = a[1];
	for (int i = 2; i <= n; i++)
	{
		cin >> a[i];
		maxn = max(maxn, a[i]);
		minn = min(minn, a[i]);
	}
	for (int i = 1; i <= n; i++)
		if (a[i] == maxn)
			cout << minn << " ";
		else if (a[i] == minn)
			cout << maxn << " ";
		else
			cout << a[i] << " ";
	return 0;
}
