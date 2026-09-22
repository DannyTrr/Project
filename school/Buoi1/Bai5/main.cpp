#include <iostream>
using namespace std;
int main ()
{
    float x, tong;
    cout << "Nhap so dien tieu thu x(kWh) :";
    cin >> x;
    if (x<=0)
    {
        cout <<"So dien tieu thu khong hop le "<< endl;
    }
    if (x<=50)
    {
        tong = x*1800;
    }
    else if (x<=100)
    {
        tong =50*1800 + (x-50)*2000;
    }
    else
    {
        tong =50*1800 +50*2000 + (x-100)*2500;
    }
    cout << " Tong tien dien phai tra la :" << tong <<" VND" <<endl ;
    return 0;

}