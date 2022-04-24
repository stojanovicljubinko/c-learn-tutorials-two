#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double ulog, rok, kamata;
    //ulog
    cout<<"Unesite visinu uloga: ";
    cin>>ulog;
    //tok
    cout<<"Unesite period izrazen u broju meseci: ";
    cin>>rok;
    //kamatna stopa
    cout<<"Unesite godisnju kamatu: ";
    cin>>kamata;

    cout<<setprecision(2)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint);
    cout<<endl<<endl;

    cout<<"            MESECNI         UKUPAN         NOVO"<<endl;
    cout<<"MESEC    KAMATNI IZNOS   KAMATNI IZNOS    STANJE"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    int mesec;
    double mesecnaKamata, kamatniIznos, ukupnaKamata;
    for(mesec = 1; mesec <= rok; mesec++){
        mesecnaKamata = kamata /100 /12;
        kamatniIznos = mesecnaKamata * ulog;
        ulog = ulog + kamatniIznos;
        ukupnaKamata += kamatniIznos;
        cout<<mesec<<"            "<<kamatniIznos<<"            "<<ukupnaKamata<<"           "<<ulog<<endl;
    }
    cout<<"------------------------------------------------------"<<endl;
}
