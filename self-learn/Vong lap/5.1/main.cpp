#include <iostream>
using namespace std;
int main ()
{ 
    int n; 
    cout << " Nhap n : ";
    cin>> n;
    if (n<0)
    { 
        cout << "nhap lai n(n>0) :"<<endl;
        return 0;
    }
    cout<< " Ket qua 1 :";
    for (int i=1; i<=n; i++)
    { 
        if (i%2==0)
        { 
            cout<< i<< " ";
        }
    }
    cout << "\n";
    cout << " Ket qua 2 :";
    for (int i=1; i<=n; i++)
    { 
        if (i%3==0)
        { 
            cout<< i<< " " ;
        }
    }
    cout << "\n";
    cout << " Ket qua 3 :";
    for (int i =1; i<=n; i++)
    { 
        if ( i%2!=0 && i%3==0)
        { 
            cout << i<< " ";
        }
    }
    cout << "\n";
    cout << " Ket qua 4 :"; // tu -n den n va chia het cho 5
    for (int i=-n; i<=n; i++)
    { 
        if (i%5==0)
        { 
            cout<< i<< " ";
        }
    }
    cout << "\n";
    return 0;
}