#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
    double doanhThu, tongDT = 0, doanhthuTB, doanhthuMax = -1;
    int soNgay = 0, ngayMax = 0;
    for ( int i =1; i<=7; i++)
    { 
        do 
        { 
            cout << " Nhap doanh thu cua ngay thu " << i << " (VND) : ";
            cin >> doanhThu;
            if (doanhThu < 0)
            { 
                cout << " Nhap sai, vui long nhap lai ! \n";
            }
        }while (doanhThu < 0);
        tongDT +=doanhThu;
        if (doanhThu >= 1000000)
        { 
            soNgay++;
        }
        if (doanhThu > doanhthuMax)
        { 
            doanhthuMax = doanhThu;
            ngayMax = i;
        }
    }
    doanhthuTB = tongDT / 7;
    cout << " Doanh thu trung binh trong tuan: " << fixed << setprecision(0) << doanhthuTB << " VND\n";
    cout << " So ngay co doanh thu >= 1000000 VND: " << soNgay << "\n";
    cout << " Ngay co doanh thu cao nhat: ngay " << ngayMax << " voi doanh thu " << fixed << setprecision(0) << doanhthuMax << " VND\n";    
}