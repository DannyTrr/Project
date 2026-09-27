#include <iostream>
using namespace std;
int main ()
{
    int loaiMon;
    float diem;
    cout << " Nhap loai mon hoc: " << endl;
    cout << " 1. Mon ly thuyet " << endl;
    cout << " 2. Mon thuc hanh " << endl;
    cout << "Chon 1 hoac 2 :" << endl;
    cin >> loaiMon;
    switch ( loaiMon)
    {
        case 1:
            cout << " Ban da chon mon ly thuyet"<< endl;
            break;
        case 2: 
            cout << " Ban da chon mon thuc hanh " << endl;
        break ;
        default: 
            cout << " Mon hoc khong hop le " << endl;
            return 0;
    }
     cout << " Nhap diem cua ban : " << endl;
     cin >> diem;
     if ( diem < 0 || diem > 10)
     { 
         cout << " Diem khong hop le " << endl;

     }
    else
    {
        if (diem < 5)
        {
            cout << "Khong dat" << endl;
        }
        else if (diem < 6.5)
        {
            cout << " Trung binh " << endl;
        }
        else if ( diem < 8.0)
        { 
            cout << " Kha " << endl;
        }
        else 
        { 
            cout << " Gioi " << endl;
        }
    }
    return 0;

}