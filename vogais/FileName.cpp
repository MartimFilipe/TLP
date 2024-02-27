#include <iostream>
#include <string>?

int i, r, ca = 0, ce = 0, ci = 0, co = 0, cu = 0;
using namespace std;
int main()
{
	string a;
	cout << " 1 – Contar vogais da frase? \n ";
	cout << " 0 – Sair? ";
	cin >> r;


	if (r == 1)
	{
		cout << " escreve uma frase \n ";
		cin >> a;
		cin.ignore();
		getline(cin, a);

		for (i = 0; i < a.size(); i++)
		{
			switch (a[i])
			{
			case  'a':
			{
				ca = ca + 1;
				break;
			}
			case 'e':
			{
				ce = 0;
				ce = ce + 1;
				break;
			}
			case 'i':
			{
				ci = ci + 1;
				break;
			}
			case 'o':
			{
				co = co + 1;
				break;
			}
			case 'u':
			{
				cu = cu + 1;
				break;
			}
			}

		}
		cout << " escreveste " << ca << " as, " << ce << " es, " << ci << " is, " << co << " os, " << cu << " us ";

	}
	if (r == 0)
	{

	}
}