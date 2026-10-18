#include <iostream>
using namespace std;
int main()
{ 
    int N;
    do
    { 
        cout << " Nhap so ho gia dinh (N>0) : ";
        cin >> N;
        if (N <=0)
        { 
            cout << " Nhap sai, vui long nhap lai ! \n";
        }
    }
    while (N <= 0);
    double tongtiendientodanPho = 0;
    double tiendiencaoNhat = -1;
    int hogdcaoNhat = 0;
    for ( int i =1; i <=N ; i++)
    { 
    double dientieuThu;
    do 
    { 
        cout << " Nhap dien tieu thu cua ho gia dinh thu " << i << " (kWh) : ";
        cin >> dientieuThu;
        if (dientieuThu < 0)
        {
            cout << " Nhap sai, vui long nhap lai ! \n";
        }
    }
    while (dientieuThu < 0);
    double tiendiencuaHo = 0;
    
    if( dientieuThu <= 50)
    { 
        tiendiencuaHo = dientieuThu * 1800;
    }
    else if (dientieuThu <= 100)
    { 
        tiendiencuaHo = 50 * 1800 + (dientieuThu - 50) * 2000;
    }
    else  
    { 
        tiendiencuaHo = 50 * 1800 + 50 * 2000 + (dientieuThu - 100) * 2500;
    }
    cout << " Tien dien cua ho gia dinh thu " << i << " la :" << tiendiencuaHo << " VND " << endl;
    tongtiendientodanPho += tiendiencuaHo;
    if (tiendiencuaHo > tiendiencaoNhat)
    { 
        tiendiencaoNhat = tiendiencuaHo;
        hogdcaoNhat = i;
    }
}


    cout << " \n ----Ket qua tong tien dien cua dan pho va ho gia dinh co tien dien cao nhat----\n";
    cout << " Tong tien dien cua dan pho la : " << tongtiendientodanPho << " VND " << endl;
    cout << " Ho gia dinh co tien dien cao nhat la ho gia dinh thu " << hogdcaoNhat << " voi so tien la " << tiendiencaoNhat << " VND " << endl;
return 0;
}

