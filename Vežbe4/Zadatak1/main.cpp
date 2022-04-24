#include <iostream>

using namespace std;

int main()
{
    int nizTestova[10];
    int i = 0; int unos;
    while(i<10){
            cout<<"Unesite broj bodova za test broj "<<i<<" ";
            cin>>unos;
        nizTestova[i] = unos;
    cout<<endl;
    i++;
    }
    i=0;
    while(i<10){
        if(85<nizTestova[i]){
            cout<<"Prvi test sa najmanje 85 bodova je test broj "<<i<<" sa "<<nizTestova[i]<<" bodova"<<endl;
            i++;
            break;
        }
        if(i>=11){
        cout<<"Ne postoji test sa najmanje 11 bodova."<<endl;
        }
    }


    return 0;
}
