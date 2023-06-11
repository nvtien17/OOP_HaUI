#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char MaSV[30];
    char TenSV[30];
    int tuoi;
public:
    void nhap();
    void xuat();
};
void SINHVIEN::nhap()
{
    cout<<"Ma SV : ";fflush(stdin);gets(MaSV);
    cout<<"Ten SV : "; fflush(stdin);gets(TenSV);
    cout<<" Tuoi : ";cin>>tuoi;
}
void SINHVIEN::xuat()
{
    cout<<setw(30)<<MaSV<<setw(30)<<TenSV<<setw(20)<<tuoi<<endl;
}
class LOPHOC
{
    char MaLH[30];
    char Phong[30];
    SINHVIEN *x;
    int n;
public:
    void nhap();
    void xuat();
};
void LOPHOC::nhap()
{
    cout<<"Ma lop hoc : "; fflush(stdin); gets(MaLH);
    cout<<"Phong hoc  : ";fflush(stdin); gets(Phong);
    cout<<"n = "; cin>> n;
    x=new SINHVIEN[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
}
void LOPHOC::xuat()
{   cout<<setw(40)<<"LOP HOC";
    cout<<"Ma lop hoc : "<<MaLH<<endl;
    cout<<"Phong hoc : "<<Phong<<endl;
    cout<<setw(30)<<"Ma SV"<<setw(30)<<"Ten SV"<<setw(20)<<"tuoi"<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
}

int main()
{
    LOPHOC k;
    k.nhap();
    k.xuat();
    return 0;
}
