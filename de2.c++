#include <iostream>
#include <math.h>

using namespace std;

void nhap (int &n, int &m, float &x)
{
    cout << "Nhap n : ";
    cin >> n;
    cout << "Nhap m : ";
    cin >> m;
    cout << "Nhap x : ";
    cin >> x;
}

int phanA (int n)
{
    int gt = 1;
    for (int i = 1; i<=n; i++)
    {
        gt *= i;
    }
    return gt;
}

float phanB(float x, int n)
{
    float tong = 0;
    for (int i = 0; i<n; i++)
    {
        tong += pow(x,i+1);
    }
    return 1.0 / phanA(n) * ( 2020.0 * exp(fabs(x)) + tong);
}

float phanC(float x, int n, int m)
{
    float tong = ( phanB(x,n) + phanB(x,m) ) / phanB(x, n+m);
    return tong;
}

int main()
{
    int m,n;
    float x;
    nhap(n,m,x);
    cout << "Tong = " << phanC(x,n,m) + phanB(x,n) + phanB(x,m);
}