#include<bits/stdc++.h>
using namespace std;

int l, n, a, b;
int x[200005], v[200005];
int t, maxn, p, m;
long long ans;

inline int read()
{
	int f = 1;
	int x = 0;
	char ch = getchar();
	while (!isdigit(ch) && ch != '-')
	{
		ch = getchar();
	}
	if (ch == '-')
		f = -1, ch = getchar();
	while (isdigit(ch))
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return f * x;
}

int main()
{
	l = read();
	n = read();
	a = read();
	b = read();
	for (int i = 1; i <= n; i++)
		x[i] = read(), v[i] = read();
	p = x[n];
	m = v[n];
	int i = n;
	ans = 0;
	while (i >= 1)
	{
		do {
			i--;
		}
		while (i >= 1 && v[i] < m);
		if (i == 0)
			break;
		i++;
		ans += m * (p - x[i] + 1) * (b - a);
		cout << i << " " << ans << endl;
		p = x[i];
		m = v[i];
	}
	cout << p << endl;
	ans += p * m * (b - a);
	cout << ans << endl; 
 	return 0;
}
