#include <iostream>
#include <math.h>

using namespace std;

void nhap (float &x, float &y)
{
    do
    {
        cout << "Nhap x : ";
        cin >> x;
        cout << "Nhap y : ";
        cin >> y;
        if (x >= y)
        {
            cout << "Nhap sai, hay nhap lai" << endl;
        }
    } while (x >= y);
}

float phanB (float x, float y)
{
    return exp(fabs(x)) + fabs(y) + sqrt(y-x);
}

float phanC (float x, int n)
{
    float tong = 0;
    for (int i = 2; i<=n; i++)
    {
        tong += pow(x,(float)i) / pow((float)i,(float)i);
    }
    return 2020.0 * x + tong;
}

int main()
{
    float x,y;
    int m;
    nhap(x,y);
    cout << "Nhap m : ";
    cin >> m;
    cout << "Tong 1 = " << phanB(x,y) << endl;
    cout << "Tong 2 = " << phanC(x+y, m) << endl;
}