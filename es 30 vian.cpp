#include <iostream>

using namespace std;

int main()
{
    int a;
    int unita=0;
    int decine=0;
    int centinaia=0;
    cout<<"inserisci il numero "<<endl;
    cin>>a;
    while(a>=1000 || a<=-1000)
    {
        cout<<"non puoi inserire un numero maggiore di 999 o inferiore a -999!"<<endl;
        cin>>a;
    }
    if(a<0)
    {
        a=-a;
    }
    int i=1;
    while(a>0)
    {
        if(i==1)
        {
            unita=a%10;
            i++;
        }
        else if(i==2)
        {
            decine=a%10;
            i++;
        }
        else
        {
            centinaia=a%10;
        }
        a=a/10;
    }
    cout<<"numero delle unita="<<unita<<endl;
    cout<<"numero delle decine="<<decine<<endl;
    cout<<"numero delle centinaia="<<centinaia<<endl;
}
