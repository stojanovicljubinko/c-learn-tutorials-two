#include <iostream>

using namespace std;

int main()
{
    int i = 17;
    int *pi = &i;

    cout<<"Memorijska lokacija u koju je smestena promenjiva i je: "<<&i<<endl;
    cout<<endl<<"Vrednost promenjive pokazivaca pi je: "<<pi<<endl;
    cout<<endl<<"Vrednost i je "<<i<<endl;
    cout<<endl<<"Vrednost pokazivaca pi je "<<*pi<<endl;

    return 0;
}
