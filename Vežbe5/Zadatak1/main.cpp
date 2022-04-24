#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char niz[30];
    char* pniz = niz;
    int i = 0;
    cin.getline(niz, 30);
    while(*pniz!='\0'){
        i++;
        pniz++;
    }
    cout<<"Niz koji ste uneli sadrzi "<<i<<" znakova."<<endl;
}
