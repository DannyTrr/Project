#include <iostream>
using namespace std;
int main()
{ 
    float V ;
    cout << "Nhap V (volt): ";
    cin >> V;
    if (V<0) 
    {
        cout << " Dien ap khong hop le " << endl;
    }
    else if (V<4)
    {
        cout << " Dien ap thap " << endl;
    }
    else if (V<=5.25)
    { 
        cout << " Dien ap binh thuong " << endl;
    }
    else 
    { 
        cout << " Dien ap cao " << endl;
    }
    return 0; 
}