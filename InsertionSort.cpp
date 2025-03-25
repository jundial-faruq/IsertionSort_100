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
        break;
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

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }


}


void InsertionSort()
{
    int temp;
    int j, i;
    
    for (i = 1; i <= n - 1; i++)
    {
        temp = arr[i];

    while (j >= 0 && arr[j] > temp)
    {
        arr[j + 1] = arr[j];
    }
    arr[j + 1] = temp;
    }
    
}

void display()
{
    cout << endl;
    cout << "=====================" << endl;
    cout << "Total Pass =" << n - 1 << endl;
    cout << "=====================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "=====================" << endl;

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }
    cout << endl;
}


int main()
{
    input();
    InsertionSort();
    display();
    system("pause");
    return 0;
}



