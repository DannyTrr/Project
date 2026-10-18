#include <iostream>
using namespace std;
int main() 
{ 
    double diemTB;
    do 
    { 
        cout << " Nhap diem TB cua hoc sinh (0 - 10) :";
        cin >> diemTB; 
        if (diemTB < 0 || diemTB > 10)
        { 
            cout << " Nhap sai, vui long nhap lai !\n";
        } 
    }while (diemTB < 0|| diemTB > 10);
    cout << "\n ----Ket qua xep loai hoc sinh----\n";
    cout << " Diem TB cua hoc sinh la : " << diemTB << endl;
    cout << " Xep loai : ";
    if (diemTB < 5)
    { 
        cout << " Yeu";
    }
    else if ( diemTB < 6.5)
    { 
        cout << " Trung binh";
    }
    else if (diemTB < 8)
    { 
        cout << " Kha";
    }
    else 
    { 
        cout << " Gioi";
    }
    return 0;
}