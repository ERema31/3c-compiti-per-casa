#include <iostream>

using namespace std;

int main()
{
    int n=-1;
    int c=0;
    int cont;
    int r;
    while(n!=0)
    {
        cout<<"inserisci il numero che vuoi controllare "<<endl;
        cin >> n;
        c=0;
        for(cont=n-1; cont>=2; cont--)
        {
            r=n%cont;
            if(r==0)
            {
                c++;
            }
        }
        if(c>0 && n!=0)
        {
            cout << "non e' primo "<<endl;
        }
        else if(c==0 && n!=0)
        {
            cout << "e' primo "<<endl;
        }
    }
}


