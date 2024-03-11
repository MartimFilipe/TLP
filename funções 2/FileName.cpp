#include <iostream>
#include <locale.h>
using namespace std;
int i, j, g, e,n,  apostas[100], soma, res = 0, p[100];
void resto()
{
	    soma = 0;
		for (n = 0; n < g; n++)
		{
			soma = soma + apostas[n];
		}
		res = soma % g;
		cout << " o resto é " << res << "\n";
		for (n = 0; n < g; n++)
		{
			if (res == apostas[n])
			{
				p[n] = p[n] + 1;
			}
		}
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << " quantas jogadas ? \n";
	cin >> j;
	cout << " quantos jogadores ? \n";
	cin >> g;
	for (e = 0; e < g; e++)
	{
		apostas[e] = 0;
	}
	
		for (e = 0; e < j; e++)
		{
			for (i = 0; i < g; i++)
			{
				cout << " diz um número ";
				cin >> apostas[i];
			}
			resto();
		}
		
		for (e = 0; e < g; e++)
		{
			cout << " o jogador " << e + 1 << " acertou " << p[e] << "\n";
		}
	
}