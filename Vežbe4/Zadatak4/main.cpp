#include <iostream>

using namespace std;

int main()
{
    int niz[5];
    int i = 0;
    int *pniz = niz;

    cout<<"Unesite elemente niza: \n";
    while(i<5){
        cin>>niz[i];
        i++;
    }
    i = 0;
    while(i<5){
    cout<<"\nUneti niz preko indeksa "<<i<<" je "<<niz[i];
    cout<<"\nUneti niz preko prvog clana + i indeksa "<<i<<" je "<<*(niz+i);
    cout<<"\nUneti niz preko pokazivaca indeksa "<<i<<" je "<<*(pniz+i);
    i++;
    }


    return 0;
}
