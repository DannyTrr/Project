#include <iostream> 
using namespace std;
int main ()
{ 
    int loaiPin;
    float dienAp;
    cout << " Nhap loai pin: " << endl;
    cout << " 1. Pin 3.7V " << endl;
    cout << " 2. Pin 5V " << endl;
    cout << " 3. Pin 12V " << endl;
    cout << "Chon 1 hoac 2 hoac 3 :" << endl;
    cin >> loaiPin;
    cout << " Nhap dien ap cua pin : " << endl;
    cin >> dienAp;
    if ( dienAp < 0)
    { 
        cout << " Dien ap khong hop le " << endl;
        return 0;
    }
    switch (loaiPin)
    { 
        case 1:
        if ( dienAp < 3.0)
    { 
        cout << "Yeu " << endl;
    }
        else if ( dienAp<= 4.2)
        { 
            cout << " Binh thuong " << endl;
        }
        else 
        { 
            cout << " Cao " << endl;
        }
        break;
        case 2:
        if ( dienAp <=4.5)
        { 
            cout << " Yeu" << endl;
        }
        else if (dienAp <= 5.5)
        { 
            cout << " Binh thuong " << endl;
        }
        else 
        { 
            cout << " Cao " << endl;
        }
        break;
        case 3:
        if ( dienAp < 10.5 )
        { 
            cout << " Yeu" << endl;
        }
        else if ( dienAp < 14.0)
        { 
            cout << " Binh thuong " << endl;
        }
        else 
        { 
            cout << " Cao " << endl;
        }
        break;
        default:
        cout << " Loai pin khong hop le " << endl;
        return 0;
    }
return 0;
    

}