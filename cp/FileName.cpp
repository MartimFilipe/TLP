#include <iostream>​
#include <string>​
#include <locale.h>
#include <math.h>
float p, d, g ,i, r, f ; // p= preço ,d = dias , g= grupo , r = DECIMAS, f = final 
using namespace std;
int main()
{
	do {
		cin >> p;
		cin >> d;
		cin >> g;
		
	} while (100 <= p && p < 1000);
	p = p / 100;
	p = p - p * 0.25;
	r = p - trunc(p);
	if (r > 0.5)
	{
		f = trunc(p) + 1;
	}
	else
	{
		f = trunc(p) + 0.5;
	}
	p = f;


	if (d > 4 && d < 9)
	{
		p = p - p * 0.4;
		r = p - trunc(p);
		if (r > 0.5)
		{
			f = trunc(p) + 1;
		}
		else
		{
			f = trunc(p) + 0.5;
		}
		p = f;
	}
	else if (d > 8)
	{
		p = p - p * 0.65;
		r = p -  trunc(p);
		if (r > 0.5)
		{
			f = trunc(p) + 1;
		}
		else
		{
			f = trunc(p) + 0.5;
		}
		p = f;
	}
	if (g > 3)
	{
		p = p - p * 0.65;
		r = p - trunc(p);
		if (r > 0.5)
		{
			f = trunc(p) + 1;
		}
		else
		{
			f = trunc(p) + 0.5;
		}
		p = f;
	}
	p = f * 100;
	cout << p;




	return 0;
}