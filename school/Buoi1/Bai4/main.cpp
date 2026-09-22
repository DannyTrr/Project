#include <iostream>
using namespace std;
int main()
{
    float dtb;
    cout << " Nhap diem trung binh tu 0-10: ";
    cin >> dtb;
    if (dtb>=8)
    {
        cout << " Xep loai : Gioi " << endl;
    }
    else if (dtb>=6.5)
    {
        cout << " Xep loai : Kha " << endl;
    }
    else if (dtb >=5)
    {
        cout << " Xep loai : Trung binh " << endl;
    }
    else 
    {
        cout << "Xep loai : yeu " << endl;
    }
return 0;
}
    