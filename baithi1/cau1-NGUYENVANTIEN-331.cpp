#include <bits/stdc++.h>

using namespace std;
class PHIEU;
class NHANVIEN
{
    char MaNV[10];
    char HotenNV[30];
public:
    void nhap();
    void xuat();
};
void NHANVIEN::nhap()
{
    cout<<"Ma NV : "; fflush(stdin); gets(MaNV);
    cout<<"Ho ten NV : "; fflush(stdin);gets(HotenNV);
}
void NHANVIEN::xuat()
{
    cout<<"Ma nhan vien : "<<MaNV<<"\tHo va ten : "<<HotenNV;
}
class PHONGBAN
{
    char MaPB[10];
    char TenPB[30];
    int Thang;
    int Nam;
public:
    void nhap();
    void xuat();
};
void PHONGBAN::nhap()
{
    cout<<"Ma PB: "; fflush(stdin); gets(MaPB);
    cout<<"Ten PB : "; fflush(stdin); gets(TenPB);
    cout<<"Thang tinh luong :";cin>>Thang;
    cout<<"Nam : "; cin>>Nam;
}
void PHONGBAN::xuat()
{
    cout<<"\tMa phong ban : "<<MaPB<<endl;
    cout<<"Ten phong ban : "<<TenPB<<"\tThang tinh luong : "<<Thang<<"\tNam : "<<Nam<<endl;
}
class LUONG
{
    char MaKH[10];
    char Tenkhoan[30];
    int SL;
    float Tamung;
    float Conlai;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend void sap(PHIEU k);
};
void LUONG::nhap()
{
    cout<<"Ma KH : ";fflush(stdin); gets(MaKH);
    cout<<"Ten khoan : "; fflush(stdin);gets(Tenkhoan);
    cout<<"So luong : "; cin>>SL;
    cout<<"Tam ung : "; cin>>Tamung;
    cout<<"Con lai : "; cin>>Conlai;
}
void LUONG::xuat()
{
    cout<<setw(10)<<MaKH<<setw(15)<<Tenkhoan<<setw(10)<<SL
    <<setw(10)<<Tamung<<setw(10)<<Conlai<<endl;
}
class PHIEU
{
    char MaP[10];
    char Ngaylap[20];
    NHANVIEN a;
    PHONGBAN b;
    LUONG *x;
    int n;
public:
    void nhap();
    void xuat();
    friend void sua(PHIEU k);
    friend void sap(PHIEU k);
};
void PHIEU::nhap()
{
    cout<<"Ma phieu : ";fflush(stdin);gets(MaP);
    cout<<"Ngay lap : ";fflush(stdin);gets(Ngaylap);
    a.nhap();
    b.nhap();
    cout<<"Nhap so khach hang n = "; cin>>n;
    x= new LUONG[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
}
void PHIEU::xuat()
{
    cout<<"CONG TY MEGA"<<endl;
    cout<<setw(40)<<"PHIEU LUONG "<<endl;
    cout<<"Ma phieu :"<<MaP<<"\tNgay lap : "<<Ngaylap<<endl;
    a.xuat();
    b.xuat();
    cout<<setw(10)<<"Ma Kh"<<setw(15)<<"Ten khoan"<<setw(10)<<"So Luong"
    <<setw(10)<<"Tam ung"<<setw(10)<<"Con lai"<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
    float T=0;
    for(int i=0;i<n;i++)
        T+=x[i].Conlai;
    cout<<setw(40)<<"Tong : "<<setw(30)<<T<<endl;
    cout<<setw(20)<<"Ha Noi, ngay... thang... nam 2021"<<endl;
}
void sua(PHIEU k)
{
    strcpy(k.Ngaylap,"25/12/2021");
}
void sap(PHIEU k)
{
    for(int i=0; i<k.n-1; i++)
        for(int j=i+1; j<k.n; j++)
            if(k.x[i].Conlai>k.x[j].Conlai)
                swap(k.x[i],k.x[j]);
    cout<<endl;
}
int main()
{
     PHIEU k;
    k.nhap();
    k.xuat();
    sua(k);
    cout<<"Phieu sau khi sua : "<<endl;
    k.xuat();
    sap(k);
    cout<<"Phieu sau khi sap : "<<endl;
    k.xuat();
    return 0;
}
