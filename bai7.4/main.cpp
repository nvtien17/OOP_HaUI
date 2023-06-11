#include <bits/stdc++.h>

using namespace std;
class NGUOI
{
protected:
    char Hoten[30];
    int Tuoi;
public:
    void nhap();
    void xuat();
    friend class BENHVIEN;
};
void NGUOI::nhap()
{
    cout<<"Ho ten : "; fflush(stdin); gets(Hoten);
    cout<<"Tuoi   : "; cin>>Tuoi;
}
void NGUOI::xuat()
{
    cout<<"Ho ten : "<<Hoten<<endl;
    cout<<"Tuoi : "<<Tuoi<<endl;
}
class BENHVIEN
{
    char TenBV[30];
    char Diachi[30];
    NGUOI GD;
public:
    friend class BENHNHAN;
};
class BENHNHAN: public NGUOI
{
    char MaBN[20];
    char TienSu[50];
    char Chandoan[50];
    BENHVIEN x;
public:
    void nhap();
    void xuat();
    friend void loc(BENHNHAN *a, int n);
    friend void sua(BENHNHAN *a, int n);
};
void BENHNHAN::nhap()
{
    NGUOI::nhap();
    cout<<"Nhap ma benh nhan   : "; fflush(stdin); gets(MaBN);
    cout<<"Nhap tien su benh   : "; fflush(stdin); gets(TienSu);
    cout<<"Nhap chuan doan benh: "; fflush(stdin); gets(Chandoan);
    cout<<"Nhap ten benh vien  : "; fflush(stdin); gets(x.TenBV);
    cout<<"Dia chi benh vien   : "; fflush(stdin); gets(x.Diachi);
    cout<<"Nhap thong tin giam doc benh vien: "<<endl;
    x.GD.nhap();
}
void BENHNHAN::xuat()
{
    NGUOI::xuat();
    cout<<"Ma benh nhan   : "<<MaBN<<endl;
    cout<<"tien su benh   : "<<TienSu<<endl;
    cout<<"Chuan doan benh: "<<Chandoan<<endl;
    cout<<"Ten benh vien  : "<<x.TenBV<<endl;
    cout<<"Dia chi benh vien   : "<<x.Diachi<<endl;
    cout<<"Giam doc benh vien: "<<endl; x.GD.xuat();
}
void loc(BENHNHAN *a, int n)
{
    int d = 0;
    for(int i = 0; i < n; i++)
        if(a[i].Tuoi > 30)
            d++;
    if(d == 0)
        cout<<"Khong co benh nhan nao lon hon 30 tuoi."<<endl;
    else
        cout<<"Co "<<d<<" benh nhan lon hon 30 tuoi."<<endl;
}
void sua(BENHNHAN *a, int n)
{
    for(int i = 0; i < n; i++)
        if(strcmp(a[i].MaBN, "BN01") == 0)
            a[i].Tuoi = 20;
}

int main()
{
    BENHNHAN *a;
    int n;
    cout<<"Nhap so benh nhan : n = ";cin>>n;
    a=new BENHNHAN[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap thong tin benh nhan thu "<<i+1<<": "<<endl;
        a[i].nhap();
    }
    for(int i = 0; i < n; i++)
        a[i].xuat();
    loc(a, n);
    sua(a, n);
    cout<<endl;
    cout<<"Thong tin sau khi sua: "<<endl;
    for(int i = 0; i < n; i++)
    a[i].xuat();
    return 0;
}
