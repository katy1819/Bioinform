#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	char s[100];
	char s1[100];
	char s2[100];
	string str[100], str1[100];
	int z2[30];
	int k1, g, j = 0, k, z, max = 1, n, h = 0, l = 0, m;
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите строку: " << endl;
	cin.getline(s, 100);
	n = strlen(s);
	cout << "¬ведите k - мер:" << endl;
	cin >> k1;
	g = 0;
	while(g < n)
	{
		for (int j = 0; j < k1; j++)
		{
			s1[j] = s[g];
			g++;
		}
		s1[k1] = 0;
		if (strlen(s1) != k1)
			break;
		cout << "k - mer: " << s1 << endl;
		//puts(s1);
		cout << endl;
		z = 0;
		for (int i = 0; i < n; i++)
		{
			k = 0;
			for (int j = 0; j < k1; j++)
			{
				if (s1[j] == s[i])
				{
					k = k + 1;
					i = i + 1;
					if (j == k1 - 1)
						i = i - k1;
				}
				else
				{
					i = i - k;
					break;
				}
			}
			if (k == k1)
			{
				z = z + 1;;
			}
		}
		cout << "„исло вхождений: " << z << endl;
		//////////
		if (max <= z)
		{
			max = z;
			strcpy_s(s2, s1);
			if (h == 0)
			{
				z2[h] = max;
				str[h] = s2;
			}
			////////////////////////////
			else
			{
				m = 0;
				z2[h] = max;
				while ((str[m] != s2) && (m < h))
				{
					m++;
				}
				if (m == h)
					str[h] = s2;
				else
					h--;
			}
		}
		h++;
		g = g - k1 + 1;
	}
	///////////
	
	for (int i = 0; i < h; i++)
	{
		if (z2[i] == max)
		{
			str1[l] = str[i];
			l++;
		}
	}
	cout << "„аще всего встретились: " << endl;
	for (int i = 0; i < l ; i++)
	{
		cout << str1[i] << endl;
	}
		return 0;
}