#include <iostream>

using namespace std;

int main()
{
    double V;
    cout << "Nhap dien ap pin V (Volt): ";
    cin >> V;
    if (V < 0)
    {
        cout << "Gia tri dien ap khong hop le!" << endl;
        return 1;
    }
    if (V < 3.0)
    {
        cout << "Trang thai: Pin rat yeu" << endl;
    }
    else if (V < 3.3)
    {
        cout << "Trang thai: Pin yeu" << endl;
    }
    else if (V < 3.7)
    {
        cout << "Trang thai: Pin trung binh" << endl;
    }
    else if (V <= 5.0)
    {
        cout << "Trang thai: Pin tot" << endl;
    }
    else
    {
        cout << "CANH BAO: Dien ap cao!" << endl;
    }

    return 0;
}