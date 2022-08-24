#include<bits/stdc++.h>
using namespace std;

struct node{
	int step, x, y;
	int f;
};
queue < node > q;
int space[1005][1005];
int vis[1005][1005];
int n, sx, sy, ex, ey;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> space[i][j];
			if (space[i][j] == 1)
				space[i][j] = -1;
		}
	cin >> sx >> sy >> ex >> ey;
	q.push({0, sx, sy, 1});
	vis[sx][sy] = 1;
	q.push({0, ex, ey, 2});
	vis[ex][ey] = 2;
	while (q.size())
	{
		node t = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ax = t.x + dx[i];
			int ay = t.y + dy[i];
			if (ax >= 1 && ax <= n && ay >= 1 && ay <= n)
				if (space[ax][ay] != -1 && vis[ax][ay] != t.f)
				{
					if (space[ax][ay] > 0)
					{
						cout <<	space[ax][ay] + space[t.x][t.y] + 1 << endl;
						return 0;
					}
					q.push({t.step + 1, ax, ay, t.f});
					space[ax][ay] = t.step + 1;
					vis[ax][ay] = t.f;
				}
		}
	}
	cout << -1 << endl;
	return 0;
}
