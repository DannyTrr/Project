#include <iostream>

using namespace std;

int main()
{
    long long soDu, tienRut;
    cout << "Nhap so du tai khoan (VND): ";
    cin >> soDu;
    cout << "Nhap so tien muon rut (VND): ";
    cin >> tienRut;
    if (tienRut <= 0)
    {
        cout << "Loi: So tien rut khong hop le!" << endl;
        return 1;
    }
    else if (tienRut > soDu)
    {
        cout << "Loi: So du khong du de thuc hien giao dich!" << endl;
        return 1;
    }
    else if (tienRut % 50000 != 0)
    {
        cout << "Loi: So tien rut phai la boi so cua 50.000 VND!" << endl;
        return 1;
    }
    else
    {
        soDu = soDu - tienRut;
        cout << "Giao dich thanh cong!" << endl;
        cout << "So tien da rut : " << tienRut << " VND" << endl;
        cout << "So du con lai  : " << soDu << " VND" << endl;
    }

    return 0;
}