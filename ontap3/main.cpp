#include <bits/stdc++.h>

using namespace std;
class PHIEU;
class KHO
{
    char Makho[10];
    char Dckho[30];
public:
    void nhap();
    void xuat();
};
void KHO::nhap()
{
    cout<<"Ma kho : "; fflush(stdin); gets(Makho);
    cout<<"Dia chi kho : "; fflush(stdin); gets(Dckho);
}
void KHO::xuat()
{
    cout<<"Ma kho : "<<Makho<<"\t\tDia chi kho : "<<Dckho<<endl;
}
class KHACH
{
    char Makhach[10];
    char Dckhach[30];
    int SDT;
public:
    void nhap();
    void xuat();
    friend void sua(PHIEU k);
};
void KHACH::nhap()
{
    cout<<"Ma khach : "; fflush(stdin); gets(Makhach);
    cout<<"Dia chi khach : "; fflush(stdin); gets(Dckhach);
    cout<<"SDT : "; cin>>SDT;
}
void KHACH::xuat()
{
    cout<<"Ma khach : "<<Makhach<<"\tDia chi : "<<Dckhach<<"\tSDT : "<<SDT<<endl;
}
class THIETBI
{
    char MaTB[10];
    char TenTB[30];
    int SL;
    float DG;
public:
    void nhap();
    void xuat();
    friend void sua(PHIEU k);
    friend void sap(PHIEU k, int n);
    friend class PHIEU;
};
void THIETBI::nhap()
{
    cout<<"Ma TB : "; fflush(stdin); gets(MaTB);
    cout<<"Ten TB : "; fflush(stdin); gets(TenTB);
    cout<<"So luong : ";cin>>SL;
    cout<<"Don gia : "; cin>>DG;
}
void THIETBI::xuat()
{
    cout<<setw(10)<<MaTB<<setw(20)<<TenTB<<setw(10)
    <<SL<<setw(10)<<DG<<setw(10)<<SL*DG<<endl;
}
class PHIEU
{
    char MaP[10];
    char Ngaylap[20];
    KHO a;
    KHACH b;
    THIETBI *x;
    int n;
public:
    void nhap();
    void xuat();
    friend void sua(PHIEU k);
    friend void sap(PHIEU k, int n);
};
void PHIEU::nhap()
{
    cout<<"Ma phieu : "; fflush(stdin); gets(MaP);
    cout<<"Ngay lap : "; fflush(stdin); gets(Ngaylap);
    a.nhap();
    b.nhap();
    cout<<"so thiet bi n = "; cin>>n;
    x= new THIETBI[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
}
void PHIEU::xuat()
{
    cout<<"DIEN MAY ABC"<<endl;
    cout<<setw(30)<<"PHIEU XUAT KHO"<<endl;
    a.xuat();
    b.xuat();
    cout<<setw(10)<<"Ma TB"<<setw(20)<<"Ten TB"<<setw(10)
    <<"So luong"<<setw(10)<<"Don gia"<<setw(10)<<"Thanh tien"<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
    float Tong=0;
    for(int i=0;i<n;i++)
        Tong+=x[i].SL*x[i].DG;
    cout<<setw(30)<<"Tong so : \t\t\t"<<Tong<<endl;
    cout<<setw(40)<<"Ha Noi,ngay ... thang... nam 2021"<<endl;
}
void sua(PHIEU k)
{
    strcpy(k.b.Dckhach,"DA LAT");
}
void sap(PHIEU k, int n)
{
    for(int i=0; i<n;i++)
        for(int j=i;j<n;j++)
            if(k.x[i].DG>k.x[j].DG)
                swap(k.x[i],k.x[j]);
}
int main()
{
    PHIEU k;
    int n;
    k.nhap();
    k.xuat();
    sua(k);
    sap(k,n);
    cout<<"Phieu sau khi sap xep : "<<endl;
    k.xuat();
    return 0;
}
