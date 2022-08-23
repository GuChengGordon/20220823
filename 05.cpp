#include<bits/stdc++.h>
using namespace std;

int y, m, d, days;
int md[24] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool islunar(int year)
{
	return (year % 4 == 0 & year % 100 != 0 || year % 400 == 0);
}

int main()
{
	cin >> y >> m >> d >> days;
	while (days > 365)
	{
		if (islunar(y))
			days -= 366, y++;
		else
			days -= 365, y++;
	}
	if (islunar(y))
		md[1]++;
	while (days--)
	{
		d++;
		if (d > md[m - 1])
			m++, d = 1;
	}
	cout << y << " " << m << " " << d << endl;
	return 0;
}
