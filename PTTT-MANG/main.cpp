#include <bits/stdc++.h>

using namespace std;
class MANG
{
    int n;
    int *a;
public:
    void nhap();
    void xuat();
    MANG operator+(MANG B);
    MANG operator-();
    int operator++();
};
void MANG::nhap()
{
    cout<<"Nhap so phan tu cua mang n = ";cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>a[i];
    }
}
void MANG::xuat()
{
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}
MANG MANG::operator+(MANG B)
{
    MANG K;
    if(n==B.n)
    {   K.n=n;
        K.a=new int[n];
        for(int i=0;i<n;i++)
        K.a[i]=a[i]+B.a[i];
    } else
    {
        K.n=0;
        K.a=NULL;
    }
    return K;
}
MANG MANG::operator-()
{
    MANG K;
    for(int i=0;i<K.n;i++)
        K.a[i]=-a[i];
    return K;
}
int MANG :: operator++()
{
    int Max=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>Max) Max=a[i];
    return Max;
}
int main()
{
    MANG A,B;
    cout<<"Nhap mang A: "<<endl;
    A.nhap();
    cout<<"Nhap mang B: " <<endl;
    B.nhap();
    cout<<"Mang A : "; A.xuat();
    cout<<endl;
    cout<<"Mang B : "; B.xuat();
    cout<<endl;
    MANG K= A + B;
    cout<<"Mang K= A + B : "; K.xuat();
    cout<<endl;
    K=-K;
    cout<<"Doi dau mang K : ";
    K.xuat();
    cout<<endl;
    cout<<"Gia tri Max trong mang K : "<<++K<<endl;

}
