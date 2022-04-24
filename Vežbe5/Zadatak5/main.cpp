#include <iostream>

using namespace std;

int main()
{
    double radniSati, satnica, regularnaPlata = 0, prekovremenaPlata = 0, ukupnaPlata = 0;
    const int NORMASATI = 40;
    cout<<"Unesite broj ostvarenih sati: ";
    cin>>radniSati;
    cout<<"Unesite satnicu: ";
    cin>>satnica;

    const double FAKTORPREKOVREMENOGRADA = satnica * 1.5;
    int sledeciRadnik;
    do
    {
        cout<<"REGULARNO     PREKOVREMENO     UKUPNO"<<endl;
        if(radniSati<=NORMASATI)
        {
            regularnaPlata = NORMASATI * satnica;
            ukupnaPlata = regularnaPlata;
        }
        else
        {
            regularnaPlata = NORMASATI * satnica;
            prekovremenaPlata = (radniSati - NORMASATI) * FAKTORPREKOVREMENOGRADA;
            ukupnaPlata = regularnaPlata + prekovremenaPlata;
        }
        cout<<regularnaPlata<<"     "<<prekovremenaPlata<<"     "<<ukupnaPlata;
        cout<<"Da li postoji sledeci radnik? \n0 - ne\n1 - da   ";
        cin>>sledeciRadnik;
    }while(sledeciRadnik == 1);

    }
