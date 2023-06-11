#include <bits/stdc++.h>

using namespace std;
class PTB2
{
    float a;
    float b;
    float c;
public:
    void nhap();
    void xuat();
    void giai();
    PTB2();
    PTB2(float x, float y, float z);
};
void PTB2::nhap()
{
    cout<<"Nhap cac he so cua PTB2 : "<<endl;
    cout<<"\ta = ";cin>>a;
    cout<<"\tb = ";cin>>b;
    cout<<"\tc = ";cin>>c;
}
void PTB2::xuat()
{
    cout<<"PT vua nhap la : "<<a<<"x"<<(char)253<<" + "<<b<<"x + "<<c<<" = 0"<<endl;
}
void PTB2::giai()
{
    if(a==0)
        cout<<"Khong phai phuong trinh bac 2 !"<<endl;
    else
    {
        float delta=b*b-4*a*c;
        if(delta < 0)
            cout<<"Phuong trinh vo nghiem"<<endl;
        if(delta == 0)
            cout<<"Phuong trinh co 2 nghiem kep: x1 = x2 = "<<-b/(2*a)<<endl;
        if(delta > 0)
        {
            cout<<"Phuong trinh co 2 nghiem thuc phan biet: "<<endl;
            cout<<"\tx1 = "<<(-b + sqrt(delta))/(2*a)<<endl;
            cout<<"\tx2 = "<<(-b - sqrt(delta))/(2*a)<<endl;
        }
    }
}

PTB2::PTB2()
{
     a=b=c=0;
}
PTB2::PTB2(float x,float y,float z)
{
    a=x;
    b=y;
    c=z;
}
int main()
{
    cout<<"Phuong trinh P"<<endl;
    PTB2 P(1,3,2);
    P.xuat();
    P.giai();
    cout<<"Phuong trinh Q"<<endl;
    PTB2 Q;
    Q.nhap();
    Q.xuat();
    Q.giai();
    return 0;
}
