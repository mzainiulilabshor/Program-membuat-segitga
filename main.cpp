#include <iostream>

using namespace std;

int main()
{int i,a,b;
    cout << " Program Membuat Bentuk Segitiga " << endl;
    cout << " Masukan Jumlah Baris : ";
    cin>>i;

    b=0;
    while (b<=i)
    {
        b++;
        a=i;
        while (a>=b)

        {
            cout<<"*";
        a--;

        }
        cout <<endl;

    }
    return 0;
