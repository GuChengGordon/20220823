#include <bits/stdc++.h>
using namespace std;

int q[1000005], x[200005], v[200005];
int l, n, f, b;
long long ans;
int head;

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

void write(long long x)
{
	if (x < 0)
	{
		cout << '-';
		write(-x);
		return;
	}
	if (x < 10)
	{
		putchar(x + '0');
		return;
	}
	write(x / 10);
	putchar((x % 10) + '0');
}

int main()
{
	
	l = read(), n = read();
	b = read(), f = read();
	for (int i = 1; i <= n; i++)
	{
		x[i] = read();
		v[i] = read();
	}

	for (int i = 1; i <= n; i++)
	{
		while (head && v[i] >= v[q[head]])
		{
			head--;
		}
		head++;
		q[head] = i;
	}

	ans = 0;
	for (int i = 1; i <= head; i++)
	{
		ans += (long long)(x[q[i]] - x[q[i - 1]]) * (f - b) * v[q[i]];
	}
	write(ans);
	puts("");
	return 0;
}
