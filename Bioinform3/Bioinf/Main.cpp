
//#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	char s1[100], s2[100], s3[100];
	int n, j, g = 0;
	cout << "Введите строку: " << endl;
	cin.getline(s1, 100);
	n = strlen(s1);
	s1[n + 1] = 0;
	for (int i = n - 1; i > -1; i--)
	{
		s2[g] = s1[i];
		g++;
	}
	s2[g] = 0;
	cout << "Строка наоборот: " << s2 << endl;
	//puts(s2);
	for (j = 0; j < n; j++)
	{
		if (s2[j] == 'A')
			s3[j] = 'T';
		else if (s2[j] == 'T')
			s3[j] = 'A';
		else if (s2[j] == 'C')
			s3[j] = 'G';
		else if (s2[j] == 'G')
			s3[j] = 'C';
	}
	s3[n] = 0;
	cout << "Строка соответствия: " << s3 << endl;
	//puts(s3);
}