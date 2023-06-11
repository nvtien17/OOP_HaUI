#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char Mansx[10];
    char Tennsx[20];
    char DCNSX[25];
    friend class HANG;
};

class HANG
{
    char Mahang[10];
    char Tenhang[15];
    float Dongia;
    float TrongLuong;
    NSX x;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"Nhap ma hang    : "; fflush(stdin); cin.getline(Mahang, 10);
    cout<<"Nhap ten hang   : "; fflush(stdin); cin.getline(Tenhang, 15);
    cout<<"Nhap don gia    : "; cin>>Dongia;
    cout<<"Nhap trong luong: "; cin>>TrongLuong;
    cout<<"Nhap ma nha san xuat     : "; fflush(stdin); cin.getline(x.Mansx, 10);
    cout<<"Nhap ten nha san xuat    : "; fflush(stdin); cin.getline(x.Tennsx, 20);
    cout<<"Nhap dia chi nha san xuat: "; fflush(stdin); cin.getline(x.DCNSX, 25);
}

void HANG:: xuat()
{
    cout<<"Ma hang    : "<<Mahang<<endl;
    cout<<"Ten hang   : "<<Tenhang<<endl;
    cout<<"Don gia    : "<<Dongia<<endl;
    cout<<"Trong luong: "<<TrongLuong<<endl;
    cout<<"Ma nha san xuat : "<<x.Mansx<<endl;
    cout<<"Ten nha san xuat: "<<x.Tennsx<<endl;
    cout<<"Dia chi         : "<<x.DCNSX<<endl;
}

int main()
{
    HANG a;
    a.nhap();
    cout<<"--------------------------------"<<endl;
    a.xuat();
    return 0;
}
