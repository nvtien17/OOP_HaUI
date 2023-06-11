#include <bits/stdc++.h>

using namespace std;
class MANG
{
    int *a ;
    int n;
public:
    void nhap();
    void xuat();
    void saptang();
};
void MANG::nhap()
{
    cout<<"Nhap n = ";cin>>n;
    a= new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void MANG::saptang()
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j]) swap(a[i],a[j]);
    }
}
void MANG::xuat()
{
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}
int main()
{
   MANG k;
   k.nhap();
   k.saptang();
   cout<<"Mang sau khi da sap xep la : ";
   k.xuat();
   return 0;
}
