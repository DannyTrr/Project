#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<< " Ban muon nhap bao nhieu chu so : ";
    cin>> n;
    for(int i=1; i<=n; i++)
    { 
       int x;
       cout<< " Nhap so thu " << i<< " :";
       cin>>x;
       int sum = 0;
       int temp = x;
       while(temp>0)
       { 
        sum+= temp%10;
        temp/=10;

       }
       cout<< " Tong cac chu so cua " << x << " la : " << sum << endl;
    }
}