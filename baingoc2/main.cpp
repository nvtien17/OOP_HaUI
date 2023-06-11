#include <bits/stdc++.h>

using namespace std;

class DATHUC
{
    int n;
    float a;
public:
    void nhap();
    void xuat();
    float Giatri();
    friend float Tong(DATHUC a, DATHUC b);
    friend float Hieu(DATHUC a, DATHUC b);
};
void DATHUC::nhap()
{
    cout<<" n = " ; cin>>n;
    cout<<" a = "; cin>>a;
}
void DATHUC::xuat()
{
    cout<<"Da thuc vua nhap la :"<<a<<" * x^"<<n<<endl;
}
float DATHUC::Giatri()
{
    float x;
    cout<<"Nhap gia tri x : ";cin>>x;
    cout<<"Gia tri cua da thuc la : ";
    return a*pow(x,n);
}
float Tong(DATHUC a, DATHUC b)
{
    float S=0;
    S=a.Giatri()+b.Giatri();
    return S;
}
float Hieu(DATHUC a, DATHUC b)
{
    float H=0;
    H=a.Giatri()-b.Giatri();
    return H;
}
int main()
{
    DATHUC a;
    DATHUC b;
    a.nhap();
    a.xuat();
    a.Giatri();
    b.nhap();
    b.xuat();
    b.Giatri();
    cout<<"Tong ="<<Tong(a,b)<<endl;
    cout<<"Hieu ="<<Hieu(a,b)<<endl;
    return 0;
}
