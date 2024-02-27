#include <iostream>
#include <string> 
int n = 0, k[1000], m[1000], r0, r1, c;
using namespace std;
int main()
{
	do
	{
		if ((k[n] == 0) || (k[n] >= 100) || (m[n] == 0) || (m[n] >= 999))
		{
			break;
		}
	} while ((k[n] == 0) || (m[n] == 0));
	 
	 
		for (n = 0; n < 1000; n++)
		{	 
				 cout << " diz os  valor dos km ate 100km \n";
				 cin >> k[n];
				 cout << " diz o valor dos m ate 999 \n ";
				 cin >> m[n];
				 c = c + 1; 
				 if (k[n] == 0 || m[n] == 0)
				 {
					 break;
					 c = c - 1;
				 }
		}

	for (n = 1; n < c; n++)
	{
		if (k[n] != 0) {
			r0 = (k[n - 1] * 1000 + m[n - 1]);
			r1 = (k[n] * 1000 + m[n]);
		}
		if (r1 > r0)
		{
			cout << " ALTO  " << ((r0 - r1)/1000) << "km  " << ((r1-r0)%1000) << "m \n";
		}
		else if (r1 < r0)
		{

			cout << " BAIXO " << ((r1 - r0)/1000) << "kms " << ((r0-r1)%1000)<<"m \n";

		}
		else
		{
			cout << " PATAMAR  \n ";
		}
	
	}
	return 0;
}