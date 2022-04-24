#include <iostream>

using namespace std;

int main()
{
    cout<<"Unesite naziv proizvoda: ";
    char naziv[20];
    cin.getline(naziv, 20);
    cout<<endl;

    cout<<"Unesite cenu proizvoda: ";
    int cena;
    cin>>cena;
    cout<<endl;

    cout<<"Proizvod:    "<<naziv[20];
    cout<<endl;

    double porez = 78.38;
    cout<<"Cena:    "<<(double)cena<<endl;
    cout<<"Porez:   "<<(double)porez<<endl;
    cout<<"-----------------------------"<<endl;

    cout<<"Ukupno:    "<<(double)(porez+cena);


    return 0;
}
