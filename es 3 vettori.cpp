#include <iostream>

using namespace std;

void dimensione(int&);
void inserimento (int [], int);
void inverso (int[], int);

int main()
{
int vet[10];
int a;
dimensione (a);
inserimento (vet,a);
inverso (vet,a);
}

void dimensione (int&a){
do{
    cout<<"Inserisci il numero di elementi: ";
    cin>> a;

}while(a>10 || a<0);
}

void inserimento(int v[],int a){
for(int i=0;i<a;i++){
    cout<<"Inserisci il "<<i+1<<" numero: ";
    cin>> v[i];
}
}

void inverso (int v[], int a){
for (int i=a-1; i>=0; i--){
    cout<<v[i]<<endl;
}
}
