#include <bits/stdc++.h>

using namespace std;
class PHONGMAY;
class QUANLY
{
    char Maql[20];
    char Hoten[30];
public:
    void nhap();
    void xuat();
};
void QUANLY::nhap()
{
    cout<<"Ma quan ly : ";fflush(stdin);gets(Maql);
    cout<<"Ho ten quan ly : ";fflush(stdin);gets(Hoten);
}
void QUANLY::xuat()
{
    cout<<"Ma quan ly : "<<Maql<<endl;
    cout<<"Ho ten quan ly : "<<Hoten<<endl;
}
class MAY
{
    char Mamay[20];
    char Kieumay[20];
    char Tinhtrang[20];
public:
    void nhap();
    void xuat();
    friend void SuaTT(PHONGMAY a);
};
void MAY::nhap()
{
    cout<<"Ma may : ";fflush(stdin);gets(Mamay);
    cout<<"Kieu may : ";fflush(stdin);gets(Kieumay);
    cout<<"Tinh trang : ";fflush(stdin);gets(Tinhtrang);
}
void MAY::xuat()
{
    cout<<setw(20)<<Mamay<<setw(20)<<Kieumay<<setw(20)<<Tinhtrang<<endl;
}
class PHONGMAY
{
    char Maphong[20];
    char Tenphong[30];
    float Dientich;
    QUANLY x;
    MAY *y;
    int n;
public:
    void nhap();
    void xuat();
    friend void SuaTT(PHONGMAY a);
    friend void SuaDT(PHONGMAY &a);
};
void PHONGMAY::nhap()
{
    cout<<"Ma phong : ";fflush(stdin);gets(Maphong);
    cout<<"Ten phong : ";fflush(stdin);gets(Tenphong);
    cout<<"Dien tich : ";cin>>Dientich;
    x.nhap();
    cout<<"Nhap so may : n = ";cin>>n;
    y=new MAY[n];
    for(int i=0;i<n;i++)
        y[i].nhap();
}
void PHONGMAY::xuat()
{
    cout<<"<===============================>"<<endl;
    cout<<"Ma phong : "<<Maphong<<endl;
    cout<<"Ten phong : "<<Tenphong<<endl;
    cout<<"Dien tich : "<<Dientich<<" m"<<(char)253<<endl;
    x.xuat();
    cout<<setw(20)<<"Ma may "<<setw(20)<<"Kieu may"<<setw(20)<<"Tinh trang"<<endl;
    for(int i=0;i<n;i++)
        y[i].xuat();
}
void SuaTT(PHONGMAY a)
{
    for(int i=0;i<a.n;i++)
        if(strcmp(a.y[i].Mamay,"MS001")==0)
           strcpy(a.y[i].Tinhtrang,"Tot");
}
void SuaDT(PHONGMAY &a)
{
    a.Dientich=50;
}
int main()
{
    PHONGMAY a;
    a.nhap();
    a.xuat();
    cout<<endl;
    SuaTT(a);
    SuaDT(a);
    a.xuat();
    return 0;
}
