#include<bits/stdc++.h>
using namespace std;

struct node{
	int step, x, y, fun;
	friend bool operator <(node a, node b)
	{
		return a.fun > b.fun;
	}
};
priority_queue < node > q;
bool space[1005][1005];
int n, sx, sy, ex, ey;
int func(int x, int y){return abs(ex - x) + abs(ey - y);}
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> space[i][j];
	cin >> sx >> sy >> ex >> ey;
	q.push({0, sx, sy, func(sx, sy)});
	while (q.size())
	{
		node t = q.top();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ax = t.x + dx[i];
			int ay = t.y + dy[i];
			if (ax >= 1 && ax <= n && ay >= 1 && ay <= n)
				if (space[ax][ay] == 0)
				{
					if (ax == ex && ay == ey)
					{
						cout <<	t.step + 1 << endl;
//						for (int i = 1; i <= n; i++)
//						{
//							for (int j = 1; j <= n; j++)
//								cout << space[i][j] << " ";
//	   						puts("");
//						}
						return 0;
					}
					q.push({t.step + 1, ax, ay, t.step + 1 + func(ax, ay)});
					space[ax][ay] = t.step + 1;
				}
		}
	}
	cout << -1 << endl;
	return 0;
}
