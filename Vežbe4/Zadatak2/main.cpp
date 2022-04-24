#include <iostream>

using namespace std;

int main()
{
    double student[10][10];
    double unos;
    double rezultat;
    for(int i = 0; i<5; i++)
    {
        cout<<"Unesite broj bodova studenta "<<i+1<<" je: ";
        for(int j = 0; j <5; j++)
        {
            cin>>student[i][j];
        }
    }
        for(int i = 0; i<5; i++)
        {
            for(int j = 0; j<5; j++)
            {
                rezultat += student[i][j];

            }
             cout<<"Prosecan broj bodova studenta "<<i<<" je "<<(double)rezultat/5.0<<endl;
        }

    return 0;
}
