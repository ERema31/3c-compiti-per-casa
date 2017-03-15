#include <iostream>

using namespace std;
void dimensione (int&);
void inserimento (int [], int);
int prodotto (int [], int);
int somma (int [], int);
int main()
{
    int vet[10], a, p,s;
    dimensione(a);
    inserimento (vet,a);
     cout<<"il prodotto di quelli pari e' " <<  prodotto (vet,a) <<endl;
     cout<<"la somma di quelli dispari e' " << somma (vet,a) <<endl;
}

void dimensione (int&a){
    do{
    cout<<"inserisci quanti numeri vuoi analizzare ";
    cin>>a;
    }while (a>10);
    }
    void inserimento (int v [], int a){
        for (int i=0;i<a;i++){
          cout<<"inserisci il " << i+1 << " valore " ;
        cin>>v[i];
        }
        }
    int prodotto (int v[], int a){
     int p=1;
  for(int i=0;i<a;i++){
      p=p*v[i];
      i++;
   }
  return p;
   }
   int somma (int v[], int a){
       int s=0;
       for(int i=1;i<a;i++){
      s=s+v[i];
      i++;
    }
     return s;
    }


