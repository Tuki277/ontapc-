#include <iostream>

using namespace std;

void ghiFile (int a[], int n)
{
    FILE *f;
    f = fopen("ABC2017.txt", "a");
    for (int i = 0; i<n ; i++)
    {
        fprintf(f, "%3d", a[i]);
    }
    fprintf(f, "\n");
    fclose(f);
}

void nhap (int a[], int &n)
{
    for (int i = 0; i<n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }
}

void xuat (int a[], int &n)
{
    for (int i = 0; i<n; i++)
    {
        cout << "A[" << i << "] = " << a[i] << endl;
    }
}

void min(int a[], int n)
{
    int min = a[0], dem = 0;
    for (int i = 0; i<n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (min == a[i])
        {
            dem++;
        }
    }
    cout << "Min = " << min << endl;
    cout << "So luong phan tu = " << min << " la " << dem;
}

void chen (int a[], int n)
{
    int x, vitri = 0;
    cout << "Nhap so can chen : ";
    cin >> x;
    for (int i = n; i >= vitri; i--)
    {
        a[i] = a[i-1];
    }
    a[vitri] = x;
    n++;
}

int main()
{
    int *p = new int;
    int n;
    cout << "Nhap vao so luong phan tu: ";
    cin >> n;
    int a[n];
    cout << "Nhap mang " << endl;
    nhap(a,n);
    cout << "Xuat mang" << endl;
    xuat(a,n);
    ghiFile(a,n);
    min(a,n);
    chen(a,n);
    xuat(a,n);
}