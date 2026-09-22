#include <iostream>
using namespace std;
int main ()
{ 
    float U, R, I;
    cout << " Nhap gia tri U: ";
    cin >> U;
    cout << " Nhap gia tri R : ";
    cin >> R;
    if (R<=0)
    {
        cout << "Gia tri R khong hop le " << endl;
        return 1;
    }
    I = U/R;
    cout << "Gia tri I la: " << I << "A"<<endl;
    if (I<0.2)
    { 
        cout << " Tai nhe " << endl;
    }
    else if ( I<=1)
    {
        cout << " Tai binh thuong " << endl;
    }
    else 
    {
        cout << " Canh bao qua dong " << endl;
    }
    return 0;
}