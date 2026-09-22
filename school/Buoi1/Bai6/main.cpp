#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double a, b, c, delta, x, x1, x2;
    cout << " Nhap a: ";
    cin >> a;
    cout << " Nhap b: ";
    cin >> b;
    cout << " Nhap c: ";
    cin >> c;
    if (a==0)
    { 
        if (b==0)
        {
            if (c ==0)
            {
                cout << " Pt vo so nghiem "<<endl;
            }
            else
            {
                cout << " Pt vo nghiem "<< endl;
            }
        }
        else 
        {
            cout << " Phuong trinh co 1 nghiem x = " << -c/b << endl;
        }
    }
    else 
    {
        delta = b*b -4*a*c;
        if (delta <0)
        { 
            cout << " Pt vo nghiem " << endl;
        }
        else if (delta ==0)
        {  
            x = -b/(2*a);
            cout << " pt co nghiem kep x1=x2 = " << x << endl;
        }
        else 
        { 
            x1 = (-b +sqrt(delta))/(2*a);
            x2 = (-b -sqrt(delta))/(2*a);
            cout << " pt co 2 nghiem phan biet x1 = "<< x1 << " va x2=" << x2 << endl;
        }
    }

    return 0;
}
