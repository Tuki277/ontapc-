#include <iostream>
#include <math.h>

using namespace std;

void ghiFile(int a[], int n)
{
    FILE *f;
    f = fopen("ABC2007.txt", "a");
    for (int i = 0; i<n; i++)
    {
        fprintf(f, "%3d", a[i]);
    }
    fprintf(f, "\n");
    fclose(f);
}

void ghiFile2(int a[], int n)
{
    FILE *f;
    f = fopen("XYZ2007.txt", "a");
    for (int i = 0; i<n; i++)
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

void sort (int a[], int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void tach(int a[], int b[], int c[], int n, int &p, int &g)
{
    p,g = 0;
    for (int i = 0; i<n; i++) {
        if (a[i] % 2 == 0)
        {
            b[p] = a[i];
            p++;
        }
        if (a[i] % 2 != 0)
        {
            c[g] = a[i];
            g++;
        }
    }
}

void xetHopLe (int a[], int n)
{
    int dem = 0;
    for (int i = 0; i<n; i++)
    {
        if (a[i] % 2 == 0 && a[i] != a[i+1] && a[i+1] != a[i+2])
        {
            dem = 1;
        }
    }
    if (dem == 1)
    {
        cout << "Hop le";
    }
    else
    {
        cout << "Deo hop le";
    }
    
}

int main()
{
    FILE *f;
    int *p = new int;
    int n;
    cout << "Nhap vao so luong phan tu: ";
    cin >> n;
    int a[n], b[n], c[n], e, g;
    cout << "Nhap mang " << endl;
    nhap(a,n);
    cout << "Xuat mang" << endl;
    xuat(a,n);
    ghiFile(a,n);
    sort(a,n);
    ghiFile2(a,n);
    tach(a,b,c,n,e,g);
    cout << "Mang chan : ";
    xuat(b,e);
    cout << "\n Mang le : ";
    xuat(c,g);
    xetHopLe(a,n);
}