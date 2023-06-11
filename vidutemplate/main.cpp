#include <bits/stdc++.h>

using namespace std;

class MANG
{
    int *a;
    int n;
public :
    void nhap();
    void xuat();
    int MAX();
};
void MANG::nhap()
{
    cout<<"Nhap kich thuoc mang n = "; cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void MANG::xuat()
{
    cout<<"Mang co "<<n<<" phan tu : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int MANG::MAX()
{
    int Max=a[0];
    for(int i=0;i<n;i++)
        if(Max<a[i])
            Max=a[i];
    return Max;
}
int main()
{
    MANG a;
    a.nhap();
    a.xuat();
    cout<<"Phan tu lon nhat trong mang la :"<<a.MAX()<<endl;
    return 0;
}
