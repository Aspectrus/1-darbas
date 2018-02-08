#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string vardas;
    cin>>vardas;
    int a;
    a=vardas.length();
    if(vardas[a-1]=='s')  vardas.insert(0, " Sveikas, ");
    else      vardas.insert(0, " Sveika, ");
    vardas+='! ';
    a=vardas.length();
    for(int j=0; j<a+2; j++)
    {
        cout<<'*';

    }
    cout<<endl<<'*';
    for(int j=0; j<a; j++)
    {
        cout<<' ';

    }
    cout<<'*'<<endl;
    cout<<'*'<<vardas<<"*"<<endl;
    cout<<'*';

    for(int j=0; j<a; j++)
    {
        cout<<' ';

    }
    cout<<'*'<<endl;
    for(int j=0; j<a+2; j++)
    {
        cout<<'*';

    }
    return 0;
}
