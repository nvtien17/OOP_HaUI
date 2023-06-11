#include <bits/stdc++.h>

using namespace std;
class PHIEU;
class NCC
{
    char MaNCC[20];
    char TenNCC[20];
    char Diachi[30];
    char SDT[12];
public:
    void nhap();
    void xuat();
};
void NCC::nhap()
{
    cout<<"Ma NCC : "; fflush(stdin); cin.getline(MaNCC,20);
    cout<<"Ten NCC : "; fflush(stdin); cin.getline(TenNCC,20);
    cout<<"Dia chi : "; fflush(stdin); cin.getline(Diachi,30);
    cout<<"SDT : "; fflush(stdin); cin.getline(SDT,12);
}
void NCC::xuat()
{
    cout<<"Ma nha cung cap : "<<MaNCC<<"   Ten NCC : "<<TenNCC<<endl;
    cout<<"Dia chi : "<<Diachi<<"   SDT : "<<SDT<<endl;
}
class SP
{
    char MaSP[10];
    char TenSP[20];
    int SL;
    float Dongia;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend int dem(PHIEU a);
    friend void saptang(PHIEU a);
};
void SP::nhap()
{
    cout<<"Ma SP : "; fflush(stdin); cin.getline(MaSP,10);
    cout<<"Ten SP : "; fflush(stdin); cin.getline(TenSP,20);
    cout<<"So luong : "; cin>>SL;
    cout<<"Don gia : " ; cin>>Dongia;
}
void SP::xuat()
{
    cout<<setw(10)<<MaSP<<setw(20)<<TenSP<<setw(10)<<
    SL<<setw(10)<<Dongia<<setw(20)<<SL*Dongia<<endl;
}
class PHIEU
{
    char MaP[10];
    char Ngaylap[20];
    NCC x;
    SP *y;
    int n;
public:
    void nhap();
    void xuat();
    friend int dem(PHIEU a);
    friend void saptang(PHIEU a);
};
void PHIEU::nhap()
{
    cout<<"Ma phieu :"; fflush(stdin); cin.getline(MaP,10);
    cout<<"Ngay lap :"; fflush(stdin); cin.getline(Ngaylap,20);
    x.nhap();
    cout<<"So san pham : n = ";cin>>n;
    y=new SP[n];
    for(int i=0 ;i<n;i++)
        y[i].nhap();
}
void PHIEU::xuat()
{
    cout<<"Dai hoc Victory"<<endl;
    cout<<setw(45)<<"PHIEU NHAP VAN PHONG PHAM"<<endl;
    cout<<"Ma phieu : "<<MaP<<"    Ngay lap : "<<Ngaylap<<endl;
    x.xuat();
    float tong=0;
    for(int i=0;i<n;i++)
    {
        tong+=y[i].SL*y[i].Dongia;
    }
     cout<<setw(10)<<"Ma SP"<<setw(20)<<" Ten san pham"<<
     setw(10)<<"So luong"<<setw(10)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
    for(int i=0;i<n;i++)
        y[i].xuat();
    cout<<"Tong : "<<setw(60)<<tong<<endl;
    cout<<setw(20)<<"Hieu truong"<<setw(28)<<"Phong tai chinh"<<setw(20)<<"Nguoi lap"<<endl;
}
int dem(PHIEU a)
{
    int d=0;
    for(int i=0;i<a.n;i++)
    {
        if(a.y[i].SL<80)
            d++;
    }
    return d;
}
void saptang(PHIEU a)
{
    for(int i=0;i<a.n;i++)
        for(int j=i;j<a.n;j++)
        if(a.y[i].Dongia>a.y[j].Dongia)
        swap(a.y[i],a.y[j]);
}
int main()
{
    PHIEU a;
    a.nhap();
    a.xuat();
    if(dem(a)==0)
    {
        cout<<"Khong co sap pham nao co so luong lon hon 80."<<endl;
    } else cout<<"Co "<<dem(a)<<" san pham co so luong lon hon 80."<<endl;
    saptang(a);
    a.xuat();
    return 0;
}
