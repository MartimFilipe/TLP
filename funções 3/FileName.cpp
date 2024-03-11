#include <iostream>
#include <locale.h>
int m[8] = { 200, 100, 50, 20, 10, 5, 2, 1 };
int me[8], ve, e, ct, t, i, md[8];
using namespace std;
int vscompra()
{
    t = ve - (e * 100 + ct);
    if (t >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void vl()
{
    for (i = 0; i < 8; i++)
    {
        ve = ve + me[i] * m[i];
    }
}
void dv()
{
    for (i = 0; i < 8; i++)
    {
        md[i] = t / m[i];
        t = t % m[i];
        cout << md[i];
    }
}
void main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << " Euros ";
    cin >> e;
    cout << " Cêntimos ";
    cin >> ct;
    for (i = 0; i < 8; i++)
    {
        cout << " diz as moedas entregues de 2 euros  a 1 cêntimo   ";
        cin >> me[i];
    }
    vl();
    if (vscompra() == 0)
    {
        for (i = 0; i < 8; i++)
        {
            cout << me[i];
        }
    }
    else
    {
        dv();
    }
}