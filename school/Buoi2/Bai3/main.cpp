#include <iostream>
using namespace std;
int main ()
{ 
    int masanPham, soLuong;
    double donGia = 0, tlGiam=0;
    cout << " Nhap ma san pham : "<< endl ;
    cout << " 1. Vo (10000)" << endl;
    cout << " 2. But (5000)" << endl;
    cout << " 3. Tai nghe (200000)" << endl;
    cout << " Chon ma sp (1-3): "<< endl;
    cin >> masanPham;
    switch (masanPham)
    { 
        case 1:
        cout<< " Ban dan chon SP 1 " << endl;
        donGia =10000;
        break;
        case 2: 
        cout << " Ban dan chon SP 2 " << endl;
        donGia = 5000;
        break;
        case 3:
        cout << " Ban dan chon SP 3 " << endl;
        donGia = 200000;
        break;
        default:
        cout << " Ma san pham khong hop le " << endl;
        return 0;
    }
    cout << " Nhap so luong : " << endl;
    cin >> soLuong;
    if ( soLuong <=0) 
    { 
        cout << " so luong sp khong hop le " << endl;
        return 0;
    }
    if (soLuong <=2)
    { 
        tlGiam = 0.0;
    }
    else if ( soLuong<=5)
    { 
        tlGiam = 0.05 ;
    }
    else 
    { 
        tlGiam = 0.1 ;
    }
    double thanhTien = donGia * soLuong;
    double tienGiam = thanhTien * tlGiam;
    double tienphaiTra = thanhTien - tienGiam;
    cout << " ============ Hoa don thanh toan ============"<<endl;
    cout << " Thanh tien :" <<(long long) thanhTien<< endl;
    cout << " Tien Giam : " <<tlGiam *100 << "% :" << (long long )tienGiam<< endl;
    cout << " Tien phai tra :" << (long long)tienphaiTra << endl;
    return 0;


}