#include <iostream>

using namespace std;

int main()
{
    int n;
    double minimo;
    double massimo;
    double media=0;
    double somma;
    bool primoCiclo = true;
    cout<< "scrivi il numero dei numeri che vuoi scrivere";
    cin>>n;
    int i=1;
    somma = 0;
    double a;
    while (i<=n)
    {
        cout<< "inserisci un numero";
        cin>>a;
        i++;
        somma = somma + a;
        if (primoCiclo)
        {
            minimo = a;
            massimo = a;
            primoCiclo = false;
        }
        else
        {
            if (a<minimo)
            {
                minimo=a;
            }
            if (a>massimo)
            {
                massimo=a;
            }
        }
    }
    cout<<"il minimo è="<<minimo<<endl;
    cout<<"il massimo è="<<massimo<<endl;
    media=somma/n;
    cout<<"la media è="<<media<<endl;
}

