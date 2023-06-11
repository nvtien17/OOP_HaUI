#include <bits/stdc++.h>

using namespace std;
class HANG;
class DATE
{
    int D;
    int M;
    int Y;
    friend class HANG;
    friend void Output(HANG *a, int n);
};
class HANG
{
    char Mahang[20];
    char Tenhang[30];
    DATE ngaysx;
public:
    void nhap();
    void xuat();
    friend void Output(HANG *a, int n);
};
void HANG::nhap()
{
    cout<<"Ma hang : "; fflush(stdin); cin.getline(Mahang,20);
    cout<<"Ten hang : ";fflush(stdin); cin.getline(Tenhang,30);
    cout<<"Ngay san xuat : "<<endl;
    cout<<"\tNgay : "; cin>>ngaysx.D;
    cout<<"\tThang : ";cin>>ngaysx.M;
    cout<<"\tNam : ";cin>>ngaysx.Y;
}
void HANG::xuat()
{
    cout<<setw(15)<<Mahang<<setw(15)<<Tenhang<<setw(15)<<ngaysx.D<<"/"
    <<ngaysx.M<<"/"<<ngaysx.Y<<endl;
}
void Output(HANG *a, int n)
{
    int d=0;
    for(int i=0;i<n;i++)
        if(a[i].ngaysx.Y==2017)
            d++;
    if(d==0)
    {
        cout<<"Khong co mat hang nao san xuat nam 2017 !"<<endl;
    }
    else
    {
        cout<<setw(15)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(15)
        <<"Ngay san xuat"<<endl;
        for(int i=0;i<n;i++)
            if(a[i].ngaysx.Y==2017)
            a[i].xuat();
    }
}
int main()
{
   HANG *a;
   int n;
   cout<<"Nhap so luong mat hang : n = ";cin>>n;
   a=new HANG[n];
   for(int i=0;i<n;i++)
    a[i].nhap();
   cout<<"CAC MAT HANG SAN XUAT NAM 2017"<<endl;
   Output(a,n);
}
