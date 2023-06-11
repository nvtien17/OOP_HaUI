#include <bits/stdc++.h>

using namespace std;
class MANG
{
    float *a ;
    int n;
public:
    void nhap();
    void xuat();
    float max();
    float min();
};
void MANG::nhap()
{
    cout<<"Nhap n = ";cin>>n;
    a= new float[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void MANG::xuat()
{
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}
float MANG::max()
{
    float p=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>p)
            p=a[i];
    }
    return p;
}
float MANG::min()
{
    float q=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<q)
            q=a[i];
    }
    return q;
}
int main()
{
    MANG k;
    k.nhap();
    cout<<"Mang vua nhap la : ";
    k.xuat();
    cout<<endl;
    cout<<"Phan tu Max = "<<k.max()<<endl;
    cout<<"Phan tu Min = "<<k.min();
    return 0;
}
