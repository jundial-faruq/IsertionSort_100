#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true)
    {
       cout << "Masukan jumlah Data pada Array : ";
       cin >> n;

       if (n <= 20)
       {
        /break;
       }
       else
       {
        cout << "\nArray yang anda masukan maksimal 20 Elemen.\n";

       }
    }
    cout << endl;
    cout << "===================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "===================" << endl;

}