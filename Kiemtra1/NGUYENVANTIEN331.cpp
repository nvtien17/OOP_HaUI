#include <bits/stdc++.h>

using namespace std;

class PHIEU;
class NGUOILAP
{
    char MaNL[20];
    char TenNL[30];
public:
    void nhap();
    void xuat();
};
void NGUOILAP::nhap()
{
    cout<<"Nguoi lap : "; fflush(stdin); gets(MaNL);
    cout<<"Ho ten nguoi lap : "; fflush(stdin); gets(TenNL);
}
void NGUOILAP::xuat()
{
    cout<<"Nguoi lap : "<<MaNL<<"       Ho ten : "<<TenNL<<endl;
}
class NHANVIEN
{
    char MaNV[20];
    char TenNV[30];
public:
    void nhap();
    void xuat();
};
void NHANVIEN::nhap()
{
    cout<<"Ma nhan vien : ";fflush(stdin); gets(MaNV);
    cout<<"Ho ten nhan vien : "; fflush(stdin); gets(TenNV);
}
void NHANVIEN::xuat()
{
    cout<<"Ma nhan vien : "<<MaNV<<"       Ho ten nhan vien : "<<TenNV<<endl;
}
class NGAYCONG
{
    char Maluot[20];
    int Ngay;
    int Gio;
    int Phut;
public:
    void nhap();
    void xuat();
    friend void SUA(PHIEU k);
    friend void SAPXEP(PHIEU k);
    friend bool check(PHIEU k);
    friend class PHIEU;
};
void NGAYCONG::nhap()
{
    cout<<"Ma luot : "; fflush(stdin); gets(Maluot);
    cout<<"Ngay : "; cin>>Ngay;
    cout<<"Gio : "; cin>>Gio;
    cout<<"Phut : "; cin>>Phut;
}
void NGAYCONG::xuat()
{
    cout<<setw(20)<<Maluot<<setw(20)<<Ngay<<setw(20)<<Gio<<setw(20)<<Phut<<endl;
}
class PHIEU
{
    char MaP[20];
    char Ngaylap[20];
    NGUOILAP x;
    NHANVIEN y;
    NGAYCONG *a;
    int n;
public :
    void nhap();
    void xuat();
    friend void SUA(PHIEU k);
    friend void SAPXEP(PHIEU k);
    friend bool check(PHIEU k);
};
void PHIEU::nhap()
{
    cout<<"Ma phieu : "; fflush(stdin); gets(MaP);
    cout<<"Ngay lap : "; fflush(stdin); gets(Ngaylap);
    x.nhap();
    y.nhap();
    cout<<"Nhap so luot cham n = "; cin>>n;
    a=new NGAYCONG[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
}
void PHIEU::xuat()
{
    cout<<"DIEN LANH FOCO"<<endl;
    cout<<"\t\t BANG CHAM CONG THANG 11 \t\t"<<endl;
    x.xuat();
    y.xuat();
    for(int i=0;i<n;i++)
        a[i].xuat();
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].Gio>7) d++;
        if(a[i].Gio == 7)
            if(a[i].Phut > 0)
                d++;
    }
    cout<<"             Tong so ngay cong: "<<n<<".So ngay di tre: "<<d<<"."<<endl;
    cout<<"TRUONG PHONG KD                  NGUOI LAP"<<endl;
}
void SUA(PHIEU k)
{
    for(int i=0;i<k.n;i++)
        if(strcmp(k.a[i].Maluot, "K002") == 0)
            k.a[i].Gio = 8;
}
void SAPXEP(PHIEU k)
{
    for(int i=0;i<k.n;i++)
        for(int j=i;j<k.n;j++)
            if(k.a[i].Ngay < k.a[j].Ngay)
             swap(k.a[i], k.a[j]);
}
bool check(PHIEU k)
{
    for(int i=0; i<k.n; i++)
        if(k.a[i].Ngay == 15)
            return true;
    return false;
}
int main()
{
    PHIEU k;
    k.nhap();
    k.xuat();
    cout<<"\t\t\t+ Phieu sau khi sua+"<<endl;
    SUA(k);
    k.xuat();
    cout<<"\t\t\t+ Phieu sau khi sap xep+"<<endl;
    SAPXEP(k);
    k.xuat();
    if(check(k)==true)
        cout<<"Ngay 15 nhan su vua nhap co di lam"<<endl;
    else
        cout<<"Nhan vien chua di lam ngay 15"<<endl;
    return 0;
}
