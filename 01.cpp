#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
	cin >> s;
	if (s.size() - 2)
	{
		cout << (int)s[0] + (int)s[1] + (int)s[2] - '0' * 3 << endl;
		return 0;
	}
	cout << s[1] << s[0] << endl;
	return 0;
}
