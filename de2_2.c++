#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

void ghiFile(int a[],int &n)
{
    FILE *f;
    f = fopen("ABC2006.txt","a");
    for(int i = 0 ;i < n; i++)
    {
        fprintf(f,"%3d",a[i]);
    }
    fprintf(f, "\n");
    fclose(f);
}

void ghiFile2(int a[],int &n)
{
    FILE *f;
    f = fopen("XYZ2006.txt","a");
    for(int i = 0 ;i < n; i++)
    {
        fprintf(f,"%3d",a[i]);
    }
    fprintf(f, "\n");
    fclose(f);
}

void nhap(int a[], int &n)
{
    for (int i = 0; i<n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }
}

void xuat(int a[], int &n)
{
    for (int i = 0; i<n; i++)
    {
        cout << "A[" << i << "] = " << a[i] << endl;
    }
}

void sort(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void xuatNhoHonX(int a[], int n)
{
    int x;
    cout << "Nhap gia tri cua x: ";
    cin >> x;
    for (int i = 0; i<n; i++)
    {
        if (x > fabs(a[i]))
        {
            cout << a[i] << endl;
        }
    }
}

void deleteArr(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i<n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    for (int i = max; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    xuat(a,n);
}

int main()
{
    FILE *f;
    int *p = new int;
    int n;
    *p = n;
    cout << "Nhap so luong phan tu : ";
    cin >> n;
    int a[n];
    cout << "Nhap mang " << endl;
    nhap(a,n);
    cout << "Xuat mang " << endl;
    xuat(a,n);
    ghiFile(a,n);
    xuatNhoHonX(a,n);
    cout << "Xoa mang" << endl;
    deleteArr(a,n);
}