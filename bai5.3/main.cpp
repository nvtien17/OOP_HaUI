#include <bits/stdc++.h>

using namespace std;
class PHIEU;
class NVKK
{
    char TenNV[20];
    char Chucvu[20];
public:
    void nhap();
    void xuat();
};
void NVKK::nhap()
{
    cout<<"Nhan vien kiem ke : "; fflush(stdin); gets(TenNV);
    cout<<"Chuc vu : "; fflush(stdin); gets(Chucvu);
}
void NVKK::xuat()
{
    cout<<"Nhan vien kiem ke : "<<TenNV<<"\tChuc vu : "<<Chucvu<<endl;
}
class PHONG
{
    char TenP[30];
    char MaP[10];
    char TruongP[30];
public:
    void nhap();
    void xuat();
};
void PHONG::nhap()
{
    cout<<"Kiem ke tai phong : "; fflush(stdin); gets(TenP);
    cout<<"Ma phong : "; fflush(stdin); gets(MaP);
    cout<<"Truong phong : " ; fflush(stdin); gets(TruongP);
}
void PHONG::xuat()
{
    cout<<"Kiem ke tai phong : "<<TenP<<"\t Ma phong : "<<MaP<<endl;
    cout<<"Truong phong : "<<TruongP<<endl;
}
class TAISAN
{
    char TenTS[20];
    int SL;
    char Tinhtrang[30];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend void SUA(PHIEU a);
    friend void SAPXEP(PHIEU a);
};
void TAISAN::nhap()
{
    cout<<"Ten tai san : "; fflush(stdin); gets(TenTS);
    cout<<"So luong : "; cin>>SL;
    cout<<"Tinh trang : "; fflush(stdin); gets(Tinhtrang);
}
void TAISAN::xuat()
{
    cout<<TenTS<<setw(15)<<SL<<setw(40)<<Tinhtrang<<endl;
}
class PHIEU
{
    char MaP[10];
    char Ngay[10];
    NVKK x;
    PHONG y;
    TAISAN *z;
    int n;
public:
    void nhap();
    void xuat();
    friend void SUA(PHIEU a);
    friend void SAPXEP(PHIEU a);
};
void PHIEU::nhap()
{
    cout<<"Ma phieu : "; fflush(stdin);gets(MaP);
    cout<<"Ngay kiem ke : "; fflush(stdin);gets(Ngay);
    x.nhap();
    y.nhap();
    cout<<"Nhap so tai san n = ";cin>>n;
    z=new TAISAN[n];
    for(int i=0;i<n;i++)
        z[i].nhap();
}
void PHIEU::xuat()
{
    cout<<"---------------------------------"<<endl;
    cout<<"\tPHIEU KIEM KE TAI SAN"<<endl;
    cout<<"Ma phieu : "<<MaP<<"\tNgay kiem ke : "<<Ngay<<endl;
    x.xuat();
    y.xuat();
    cout<<"Ten tai san"<<setw(15)<<"So luong"<<setw(40)<<"Tinh trang"<<endl;
    for(int i=0;i<n;i++)
        z[i].xuat();
    cout<<"So tai san da kiem ke : "<<n;
    int TSL=0;
    for(int i=0;i<n;i++)
        TSL+=z[i].SL;
    cout<<"\t Tong so luong : "<<TSL<<endl;
}
void SUA(PHIEU a)
{
    for(int i=0;i<a.n;i++)
    {
        if(strcmp(a.z[i].TenTS,"May vi tinh")==0)
            a.z[i].SL=20;
    }
}
void SAPXEP(PHIEU a)
{
    for(int i=0;i<a.n;i++)
        for(int j=i+1;j<a.n;j++)
        if(a.z[i].SL>a.z[j].SL) swap(a.z[i],a.z[j]);
}
int main()
{
    PHIEU k;
    k.nhap();
    k.xuat();
    SUA(k);
    cout<<"Phieu sau khi da sua : "<<endl;
    k.xuat();
    SAPXEP(k);
    cout<<"Phieu sau khi sap xep : "<<endl;
    k.xuat();
    return 0;
}
