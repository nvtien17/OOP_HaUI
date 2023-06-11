#include <bits/stdc++.h>

using namespace std;

class SV
{
    char MaSV[20];
    char TenSV[30];
    char Lop[10];
    int Khoa;
public:
    void nhap();
    void xuat();
};
void SV::nhap()
{
    cout<<"Ma sinh vien : "; fflush(stdin); gets(MaSV);
    cout<<"Ten sinh vien : "; fflush(stdin); gets(TenSV);
    cout<<"Lop : "; fflush(stdin) ; gets(Lop);
    cout<<"Khoa : ";cin>>Khoa;
}
void SV::xuat()
{
    cout<<"Ma sinh vien : "<<MaSV<<"\tTen sinh vien : "<<TenSV<<endl;
    cout<<"Lop : "<<Lop<<"\t\tKhoa : "<<Khoa<<endl;
}
class BANGDIEM
{
    char Tenmon[50];
    int Sotrinh;
    float Diem;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void BANGDIEM::nhap()
{
    cout<<"Ten mon : ";fflush(stdin); gets(Tenmon);
    cout<<"So trinh : "; cin>>Sotrinh;
    cout<<"Diem : ";cin>>Diem;
}
void BANGDIEM::xuat()
{
    cout<<setw(20)<<Tenmon<<setw(10)<<Sotrinh<<setw(10)<<Diem<<endl;
}
class PHIEU
{
    SV a;
    BANGDIEM *b;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap()
{
    a.nhap();
    cout<<"Nhap so mon hoc : n = ";cin>>n;
    b=new BANGDIEM[n];
    for(int i=0;i<n;i++)
        b[i].nhap();
}
void PHIEU::xuat()
{
    cout<<"\t---------------------------"<<endl;
    cout<<"\t\tPHIEU BAO DIEM"<<endl;
    a.xuat();
    cout<<"Bang diem : "<<endl;
    cout<<setw(20)<<"Ten mon"<<setw(10)<<"So trinh"<<setw(10)<<"Diem"<<endl;
    for(int i=0;i<n;i++)
        b[i].xuat();
    float TD=0;
    int TST=0;
    for(int i=0;i<n;i++)
    {
        TST+=b[i].Sotrinh;
        TD+=b[i].Sotrinh*b[i].Diem;
    }
    cout<<setw(30)<<"Diem trung binh : "<<setprecision(3)<<setw(10)<<TD/TST;
}
int main()
{
    PHIEU k;
    k.nhap();
    k.xuat();
    return 0;
}
