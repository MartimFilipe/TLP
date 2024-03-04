#include <iostream>
#include <locale.h>
using namespace std;
void resto(float &pes, float &val)
{
	val = val / pes;
}
void main()
{
	float pes, val;
	setlocale(LC_ALL, "Portuguese");
	cout << " custo da conta ";
	cin >> val;
	cout << " quantidade de pessoas ";
	cin >> pes;
	resto(pes, val);
	cout << "cada um paga " << val;
	val = 0;
}