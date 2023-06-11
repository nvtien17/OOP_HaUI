#include <bits/stdc++.h>
using namespace std;
class GIAMDOC
{
    char Hoten[30];
    int tuoi;
    char sdt[15] ;
public:
    void nhap();
    void xuat();
};
void GIAMDOC::nhap()
{
    cout<<"Ho ten GD : "; fflush(stdin);gets(Hoten);
    cout<<"Tuoi   : "; cin>>tuoi;
    cout<<"SDT    : ";fflush(stdin); gets(sdt);
}
void GIAMDOC::xuat()
{
    cout<<"Ho ten GD : "<<Hoten<<endl;
    cout<<"Tuoi      : "<<tuoi<<endl;
    cout<<"So dien thoai: "<<sdt<<endl;
}
class CONGTY
{
    char TenCT[50];
    char Diachi[50];
    GIAMDOC x;
public:
    void nhap();
    void xuat();
};
void CONGTY::nhap()
{
    cout<<"Ten cong ty : ";fflush(stdin);gets(TenCT);
    cout<<"Dia chi     : " ; fflush(stdin);gets(Diachi);
    x.nhap();
}
void CONGTY::xuat()
{
    cout<<"Ten cong ty : "<<TenCT<<endl;
    cout<<"Dia chi     : "<<Diachi<<endl;
    x.xuat();
}
int main()
{
   CONGTY k;
   k.nhap();
   k.xuat();
    return 0;
}
