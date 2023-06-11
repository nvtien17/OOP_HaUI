#include <bits/stdc++.h>

using namespace std;

class HANG
{
    char Mahang[20];
    char Tenhang[30];
    float Dongia;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang : ";fflush(stdin);gets(Mahang);
    cout<<"Ten hang : ";fflush(stdin);gets(Tenhang);
    cout<<"Don gia : ";cin>>Dongia;
}
void HANG::xuat()
{
    cout<<setw(20)<<Mahang<<setw(20)<<Tenhang<<setw(20)<<Dongia<<endl;
}
class PHIEU
{
    char Maphieu[20];
    HANG *x;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap()
{
    cout<<"Ma phieu : ";fflush(stdin);gets(Maphieu);
    cout<<"Nhap so mat hang : n = ";cin>>n;
    x=new HANG[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
}
void PHIEU::xuat()
{
    cout<<"\tMa phieu : "<<Maphieu<<endl;
    cout<<setw(20)<<"Ma hang"<<setw(20)<<
    "Ten hang"<<setw(20)<<"Don gia"<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
}
int main()
{
    PHIEU x;
    x.nhap();
    x.xuat();
    return 0;
}
