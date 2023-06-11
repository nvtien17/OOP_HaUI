#include <bits/stdc++.h>

using namespace std;
class HANG
{
    char Mahang[30];
    char Tenhang[30];
    float Dongia;
    int Soluong ;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang : ";fflush(stdin); cin.getline(Mahang,30);
    cout<<"Ten hang : ";fflush(stdin);cin.getline(Tenhang,30);
    cout<<"Don gia : ";cin>>Dongia;
    cout<<"So luon : ";cin>>Soluong;
}
void HANG::xuat()
{
    cout<<setw(20)<<Mahang<<setw(20)<<Tenhang
    <<setw(15)<<Dongia<<setw(10)<<Soluong
    <<setw(15)<<Dongia*Soluong<<endl;
}
int main()
{
    int n;
    HANG *a;
    cout<<"Nhap so luong hang : n = ";cin>>n;
    a=new HANG[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    cout<<setw(20)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(15)
    <<"Don gia"<<setw(10)<<"So luong"
    <<setw(15)<<"Thanh tien"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
