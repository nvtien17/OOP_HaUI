#include <bits/stdc++.h>

using namespace std;

class PTB2
{
    float a,b,c;
public:
    void nhap();
    void xuat();
    void giai();
};
void PTB2::nhap()
{
    cout<<" a = ";cin>>a;
    cout<<" b = ";cin>>b;
    cout<<" c = ";cin>>c;
}
void PTB2::giai()
{
    if(a==0)
    {
        cout<<"Khong phai PT bac 2!"<<endl;
    }else
    {
    float delta = b*b-4*a*c;
        if(delta<0)
        cout<<"Phuong trinh vo nghiem"<<endl;
        else
        {
            cout<<"x1="<<(-b+sqrt(delta))/(2*a)<<endl;
            cout<<"x2"<<(-b-sqrt(delta))/(2*a)<<endl;
        }
    }
}
void PTB2::xuat()
{
    cout<<"Phuong trinh "<<a<<"x"<<(char) 253<<" + "<<b<<"x + "<<c<<" = 0"<<endl;
}
int main()
{
    PTB2 x;
    x.nhap();
    x.xuat();
    x.giai();
    return 0;
}
