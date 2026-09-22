#include <iostream>
using namespace std;
int main ()
{ 
    int d, m, y ;
    cout << "Nhap ngay: ";
    cin >> d;
    cout << "Nhap thang: ";
    cin >> m;
    cout << "Nhap nam: ";
    cin >> y;
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100!=0))
    {
        cout << "Nam nhuan"<< endl;
    }
    else
    {
        cout << "Nam ko nhuan"<< endl;
    }
    if (m < 1 || m > 12)
    {
        cout << "Thang ko hop le"<< endl;
    return 1;
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        cout << "Thang co 31 ngay"<< endl;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        cout << "Thang co 30 ngay"<< endl;
    }
    else
    {
        if (( y % 400 == 0) || ( y % 4 == 0 & y % 100 != 0))
        { 
            cout << " Thang 2 co 29 ngay "<< endl;
        }
        else
        {
            cout << " Thang 2 co 28 ngay "<< endl;
        }
    }
return 0;
}