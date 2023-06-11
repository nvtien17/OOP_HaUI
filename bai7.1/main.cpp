#include <bits/stdc++.h>

using namespace std;
class NSX
{
    char TenNSX[20];
    char Diachi[20];
public:
    void nhap();
    void xuat();
    friend class HANG;
};
void NSX::nhap()
{
    cout<<"Ten NSX : "; fflush(stdin) ; gets(TenNSX);
    cout<<"Dia chi : "; fflush(stdin) ; gets(Diachi);
}
void NSX::xuat()
{
    cout<<"Ten NSX : "<<TenNSX<<endl;
    cout<<"Dia chi : "<<Diachi<<endl;
}
class DATE
{
    int D;
    int M;
    int Y;
    friend class TIVI;
public:
    void nhap();
    void xuat();
};
void DATE::nhap()
{
    cout<<"Ngay : "; cin>>D;
    cout<<"Thang : "; cin>>M;
    cout<<"Nam : "; cin>>Y;
}
void DATE::xuat()
{
    cout<<D<<"/"<<M<<"/"<<Y<<endl;
}
class HANG
{
protected:
    char TenH[20];
    NSX x;
    float DG;
public:
    void nhap();
    void xuat();
    HANG();
};
void HANG::nhap()
{
    cout<<"Ten hang : "; fflush(stdin); gets(TenH);
    x.nhap();
    cout<<"Don gia : ";cin>>DG;
}
void HANG::xuat()
{
    cout<<"Ten Hang : "<<TenH;
    x.xuat();
    cout<<"Don gia :"<<DG;
}
HANG::HANG()
{
    strcpy(TenH, "");
    strcpy(x.Diachi, "");
    strcpy(x.TenNSX, "");
    DG= 0;
}
class TIVI: public HANG
{
    float KT;
    DATE NgayNhap;
public:
    void nhap();
    void xuat();
    TIVI();
};
void TIVI::nhap()
{
    HANG::nhap();
    cout<<"Kich thuoc :"; cin>>KT;
    NgayNhap.nhap();
}
void TIVI::xuat()
{
    HANG::xuat();
    cout<<"Kich thuoc : "<<KT<<endl;
    cout<<"Ngay nhap : "; NgayNhap.xuat();
    cout<<endl;
}
TIVI::TIVI()
{
    KT= 0;
    NgayNhap.D = 0;
    NgayNhap.M = 0;
    NgayNhap.Y = 0;
}
int main()
{
    TIVI a;
    a.nhap();
    a.xuat();
    TIVI b;
    b.xuat();
    return 0;
    return 0;
}
