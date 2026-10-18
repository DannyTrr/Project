#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
    float diem, tong =0, dtb;
    int i;
    for (i=1; i<=3; i++)
    { 
        do
        { 
            cout << " Nhap diem mon hoc thu " << i << " (0 - 10) : ";
            cin >> diem;
            if (diem <0 || diem > 10)
            { 
                cout << " Nhap sai, vui long nhap lai ! \n";
            }
        }
            while (diem < 0 || diem > 10);
            tong += diem;
    }
    dtb = tong /3;
    cout << "\n Diem trung binh cua hoc sinh la : " << fixed << setprecision(2) << dtb << endl;
    return 0;
}
    
