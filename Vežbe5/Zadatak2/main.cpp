#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char niz[30];
    char* pniz = niz;
    cout<<"Unesite niz znakova: "<<endl;
    cin.getline(niz, 30);
    while(*pniz!='\0'){
        pniz++;
    }
    cout<<"Niz u obrnutom redosledu je: "<<endl;
    while(pniz!=niz){
        cout<<*(pniz-1);
        pniz--;
    }
}
