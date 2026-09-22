#include <iostream>
using namespace std;
int main()
{ 
    double T;
    cout << " Nhap vao tong tien hang : ";
    cin >> T;
    if (T < 500000)
    {
        cout << " Phai tra = "<< (long long)T << endl;
    }
    else if ( T< 1000000)
    { 
        cout << " Phai tra = " << (long long)(T*0.95) << endl;
    }
    else if (T < 2000000)
    {
        cout << " Phai tra = " << (long long)(T*0.9) << endl;
    }
    else
    {
        cout << " Phai tra = " << (long long)(T*0.85) << endl;
    }
return 0;
}