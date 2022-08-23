#include<bits/stdc++.h>
using namespace std;

struct node{
	int step, x, y;
};
queue < node > q;
int n;
int tx, ty, ex, ey;
bool space[1005][1005];
bool vis[1005][1005];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> space[i][j];
	cin >> tx >> ty >> ex >> ey;
	q.push({0, tx, ty});
	while (q.size())
	{
		node t = q.front();
		cout << t.step << " " << t.x << " " << t.y << endl;
		q.pop();
		for (int i = 0; i < 4; i++)
			if ()
			{
				if (!vis[t.x + dx[i]][t.y + dy[i]] && !space[t.x + dx[i]][t.y + dy[i]])
				{
					vis[t.x + dx[i]][t.y + dy[i]] = 1;
					q.push({t.step + 1, t.x + dx[i], t.y + dy[i]});
					if (t.x + dx[i] == ex && t.y + dy[i] == ey)
					{
						cout << t.step + 1 << endl;
						return 0;
					}
				}
			}
	}
	return 0;
}
