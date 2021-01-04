#include <iostream>
#include <math.h>

using namespace std;

int gt(int n)
{
    int gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}

float tinh1 (float x, int n)
{
    float tong=0;
    for (int i = 0; i<n; i++)
    {
        tong += pow(x,(float)i+1);
    }
    return (1.0/gt(n)) * (2020 * exp(fabs(x)) + tong);
}

float tinh2(float x, int n, int m)
{
    return (tinh1(x,n) + tinh1(x,m)) / tinh1(x,m+n);
}

float tinh(float x, int n, int m)
{
    return tinh1(x,n) + tinh1(x,m) + tinh2(x,n,m);
            //20292     //40584     
}

int main()
{
    int m, n;
    float x;
    cout << "Nhap : ";
    cin >> m >> n >> x;
    cout << "Ket qua phep tinh 1 = " << tinh1(x,n) << endl;
    cout << "Ket qua phep tinh 2 = " << tinh2(x,n,m) << endl;
    cout << "Ket qua phep tinh 3 = " << tinh(x,n,m) << endl;
}