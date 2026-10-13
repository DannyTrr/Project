#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
    int n; 
    cout << " Nhap n(n>0):";
    cin>>n;
    if (n<1)
    { 
        cout<< " Nhap lai n (n>1) :";
        cin>>n;
        return 0;
    }
    long long P =0, Q =0, R=0, S=0, U=0, V=0, X=0;
    double T=0.0;
    for (int i=1; i<=n; i++)
    { 
        P += i;
        Q *=i;
        if( i % 2 !=0)
        { 
            R +=i;
        }
        S+= 1LL*i*i*i;
        double mau =1.0;
        for (int k=1; k<=i; k++)
        { 
            mau *=i;
        }
        T += (double)i/mau;
        U+= 1LL * i*(i+1);
        V = V*10 +i;
        X+= 1LL * i*(i+1)/2;


    }
    cout << "P("<< n << ") = " << P << endl;
    cout << "Q("<< n << ") = " << Q << endl;
    cout << "R("<< n << ") = " << R << endl;
    cout << "S("<< n << ") = " << S << endl;
    cout << fixed << setprecision(2);
    cout << "T("<< n << ") = " << T << endl;
    cout << "U("<< n << ") = " << U << endl;
    cout << "V("<< n << ") = " << V << endl;
    cout << "X("<< n << ") = " << X << endl;
    return 0;
}