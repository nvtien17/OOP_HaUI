#include <bits/stdc++.h>

using namespace std;
class CHUYENBAY;
class KHACH
{
protected:
    char MaKH[20];
    char Hoten[30];
    char Diachi[30];
public:
    void nhap();
    void xuat();
     friend void suatt(CHUYENBAY A);
};
void KHACH::nhap()
{
    cout<<"Ma Khach hang : "; fflush(stdin); gets(MaKH);
    cout<<"Ho ten : "; fflush(stdin); gets(Hoten);
    cout<<"Dia chi : "; fflush(stdin); gets(Diachi);
}
void KHACH::xuat()
{
    cout<<"Ma khach hang : "<<MaKH<<endl;
    cout<<"Ho ten : "<<Hoten<<endl;
    cout<<"Dia chi : "<<Diachi<<endl;
}
class KHACHBAY : public KHACH
{
    char Mave[20];
    char Soghe[10];
    float Giave;
public:
    void nhap();
    void xuat();
     friend void suatt(CHUYENBAY A);
};
void KHACHBAY::nhap()
{
    KHACH::nhap();
    cout<<"Ma ve : "; fflush(stdin); gets(Mave);
    cout<<"So ghe : "; fflush(stdin); gets(Soghe);
    cout<<"Gia ve : "; cin>>Giave;
}
void KHACHBAY::xuat()
{
    KHACH::xuat();
    cout<<"Ma ve :"<<Mave<<endl;
    cout<<"So ghe : "<<Soghe<<endl;
    cout<<"Gia ve :"<<Giave<<endl;
}
class CHUYENBAY
{
    char Sohieu;
    char Ngay[30];
    char Gio[30];
    char Tu[30];
    char Den[30];
    KHACHBAY *x;
    int n;
public:
    void nhap();
    void xuat();
    friend void suatt(CHUYENBAY A);
};
void CHUYENBAY::nhap()
{
    cout<<"So hieu :"; fflush(stdin); gets(Sohieu);
    cout<<"Ngay : "; fflush(stdin); gets(Ngay);
    cout<<"Gio : "; fflush(stdin); gets(Gio);
    cout<<"Tu : "; fflush(stdin); gets(Tu);
    cout<<"Den : "; fflush(stdin); gets(Den);
    cout<<"Nhap so khach bay : "; cin>>n;
    x=new KHACHBAY[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap khach bay thu "<<i+1<<" : "<<endl;
        x[i].nhap();
    }
}
void CHUYENBAY::xuat()
{
    cout<<"So hieu :"<<Sohieu<<endl;
    cout<<"Ngay : "<<Ngay<<endl;
    cout<<"Gio : "<<Gio<<endl;
    cout<<"Tu : "<<Tu<<endl;
    cout<<"Den : "<<Den<<endl;
    cout<<"Khach trong chuyen bay"<<endl;
    for(int i=0;i<n;i++)
    {
        x[i].xuat();
    }
}
void suatt(CHUYENBAY A)
{
    for(int i=0;i<A.n;i++)
    {
        if(strcmp(A.x[i].MaKH,"KH005")==0)
            strcpy(A.x[i].Soghe, "M6");
    }
}
int main()
{
    CHUYENBAY A;
    A.nhap();
    A.xuat();
    suatt(A);
    A.xuat();
}
