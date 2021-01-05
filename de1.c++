#include <iostream>
#include <math.h>

using namespace std;

void nhap (int &n, int &m)
{
    cout << "Nhap n : ";
    cin >> n;
    cout << "Nhap m : ";
    cin >> m;
    if (n > m)
    {
        int temp = n;
        n = m;
        m = temp;
    }
}

void phanB (int n, int m)
{
    for (int i = n; i<= m; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << "\t";
        }
    }
    cout << endl;
}

float phanC (float x, int n)
{
    float tong = 0;
    for (int i = 0; i<=n; i++)
    {
        tong += x / (2 * i - 1);
    }
    return 2020.0 * fabs(n * x) + tong;
}

int main()
{
    int m,n;
    float x;
    nhap(n,m);
    cout << "Nhap x: ";
    cin >> x;
    phanB(n,m);
    phanB(1,n);
    cout << "Tong = " << phanC(x,n);
}