#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string nome;
	ofstream Escrita("nome.txt");
	cout << " Qual é o seu nome? "; 
	getline(cin, nome);
	Escrita << nome;
	Escrita.close();
	ifstream Leitura("nomes.txt");
	while (getline(Leitura, nome))
	{
		cout << nome; 
	}
	Leitura.close();
}