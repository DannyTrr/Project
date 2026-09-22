#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "Nhap a:";
    cin >> a;
    cout <<"Nhap b :";
    cin >> b;
    if (a==0)
    {
        if (b==0)
        {
        cout << "pt co vo so nghiem" << endl;
        }
        else
        {
            cout << " pt vo nghiem " << endl;
        }
    }
    else 
    {
        cout << " pt co 1 nghiem x= " << -b/a << endl;
    }
    
return 0;
}