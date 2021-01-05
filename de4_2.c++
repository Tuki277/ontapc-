#include <iostream>

using namespace std;

void ghiFile(float a[], int n)
{
    FILE *f;
    f = fopen("ABC2018.txt", "a");
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%3g\t", a[i]);
    }
    fprintf(f, "\n");
    fclose(f);
}

void inputArr(float a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }
}

void outputArr(float a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = " << a[i] << endl;
    }
}

void sort(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

float findMin(float a[], int n)
{
    float min = 0;
    for (int i = 0; i<n; i++)
    {
        if (a[i] > 0)
        {
            min = a[0];
            if (a[i] < min)
            {
                min = a[i];
            }
        }
    }
    return min;
}

int xetHopLe (float a[], int n)
{
    int dem = 0;
    for (int i = 0; i<n; i++)
    {
        if ( a[i] > 0 && a[i] + a[i + 1] > 5 )
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
        cout << "deo hop le";
    }
}

int main()
{
    FILE *f;
    int n;
    int *p = new int;
    *p = n;
    cout << "Nhap so luong phan tu : ";
    cin >> n;
    float a[n];
    cout << "Nhap Mang " << endl;
    inputArr(a, n);
    cout << "Xuat Mang " << endl;
    outputArr(a, n);
    ghiFile(a, n);
    sort(a, n);
    outputArr(a, n);
    ghiFile(a, n);
    cout << "Phan tu nho nhat la : " << findMin(a, n) << endl;
    xetHopLe(a,n);
}