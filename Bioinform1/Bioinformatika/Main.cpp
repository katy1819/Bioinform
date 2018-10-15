#include <iostream>
#include <string>
//#include <cstdio>


using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	char s[100];
	char s1[100];
	int n, n1, k, z = 0;
	cout << "Введите строку: " << endl;
	cin.getline(s,100);
	n = strlen(s);
	cout << "Введите подстроку: " << endl;
	cin.getline(s1, 100);
	n1 = strlen(s1);
	for (int i = 0; i < n; i++)
	{
		k = 0;
		for (int j = 0; j < n1; j++)
		{
			if (s1[j] == s[i])
			{
				k = k + 1;
				i = i + 1;
				if (j == n1 - 1)
					i = i - n1;
			}
			else
			{
				i = i - k;
				break;
			}
		}
		if (k == n1)
		{
			z = z + 1;;
		}
	}
	cout << "Число вхождений: " << z << endl;
}