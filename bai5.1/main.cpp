#include<bits/stdc++.h>

using namespace std;

class NCC
{
    char MaNCC[20];
    char TenNCC[30];
    char Diachi[50];
public:
    void nhap();
    void xuat();
};
void NCC::nhap()
{
    cout<<"Ma NCC: " ; fflush(stdin) ; gets(MaNCC);
    cout<<"Ten NCC: "; fflush(stdin) ; gets(TenNCC);
    cout<<"Dia chi : "; fflush(stdin); gets(Diachi);
}
void NCC::xuat()
{
    cout<<"Ma NCC : "<<MaNCC<<"\t\tTen NCC : "<<TenNCC<<endl;
    cout<<"Dia chi : "<<Diachi<<endl;
}
class HANG
{
    char TenH[20];
    float DG;
    int SL;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void HANG::nhap()
{
    cout<<"Ten hang : "; fflush(stdin); gets(TenH);
    cout<<"Don gia : ";cin>>DG;
    cout<<"So luong : ";cin>>SL;
};
void HANG::xuat()
{
    cout<<setw(15)<<TenH<<setw(15)<<DG<<setw(15)<<SL<<setw(15)<<SL*DG<<endl;
};
class PHIEU
{
    char MaP[20];
    char Ngaylap[20];
    NCC x;
    HANG *y;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap()
{
    cout<<"Ma phieu : "; fflush(stdin); gets(MaP);
    cout<<"Ngay lap : "; fflush(stdin); gets(Ngaylap);
    x.nhap();
    cout<<"Nhap so mat hang : n = ";cin>>n;
    y= new HANG[n];
    for(int i=0;i<n;i++)
    y[i].nhap();
}
void PHIEU::xuat()
{
    cout<<"\t\t<=============================>"<<endl;
    cout<<setw(30)<<"PHIEU NHAP HANG"<<endl;
    cout<<"Ma phieu : "<<MaP<<"\t\tNgay lap : "<<Ngaylap<<endl;
    x.xuat();
    cout<<setw(15)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)
    <<"So luong"<<setw(15)<<"Thanh tien"<<endl;
    for(int i=0;i<n;i++)
        y[i].xuat();
    float tong=0;
    for(int i=0;i<n;i++)
        tong+=y[i].DG * y[i].SL;
    cout<<setw(50)<<"Cong thanh tien : \t"<<tong<<endl;
}
int main()
{
    PHIEU a;
    a.nhap();
    a.xuat();
    return 0;
}
