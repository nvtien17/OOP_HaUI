#include <bits/stdc++.h>

using namespace std;

class DATE
{
    int D;
    int M;
    int Y;
public:
    void nhap();
    void xuat();
};
void DATE::nhap()
{
    cout<<"Ngay : ";cin>>D;
    cout<<"Thang : ";cin>>M;
    cout<<"Nam : ";cin>>Y;
}
void DATE::xuat()
{
    cout<<D<<"/"<<M<<"/"<<Y<<endl;
}
class NHANSU
{
    char Manhansu[20];
    char Hoten[30];
    DATE NS;
public:
    void nhap();
    void xuat();
};
void NHANSU::nhap()
{
    cout<<"Ma nhan su : ";fflush(stdin);cin.getline(Manhansu,20);
    cout<<"Ho ten nhan su :";fflush(stdin);cin.getline(Hoten,30);
    NS.nhap();
}
void NHANSU::xuat()
{
    cout<<"Ma nhan su : "<<Manhansu<<endl;
    cout<<"Ten nhan su: " <<Hoten<<endl;
    cout<<"Ngay sinh : ";
    NS.xuat();
}

int main()
{
   NHANSU k;
   k.nhap();
   k.xuat();
       return 0;
}
