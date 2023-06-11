//9h10p-10h10p
#include <bits/stdc++.h>

using namespace std;

class PERSON
{
protected:
    char Hoten[50];
    int Ngaysinh;
    char Quequan[100];
};
class VANDONGVIEN : public PERSON
{
protected:
    char Bomon[30];
    float Thunhap;

};
class CAUTHU :public VANDONGVIEN
{
    char CLB[100];
    char Vitri[100];
public:
    void nhap();
    void xuat();
    friend void THUNHAPMAX(int n, CAUTHU *a);
    friend void OUTPUT(int n, CAUTHU *a);
};
void CAUTHU::nhap()
{
    cout<<"Ho ten : "; fflush(stdin); gets(Hoten);
    cout<<"Ngay sinh : "; cin>>Ngaysinh;
    cout<<"Que quan : "; fflush(stdin); gets(Quequan);
    cout<<"Bo mon : "; fflush(stdin); gets(Bomon);
    cout<<"Thu nhap : "; cin>>Thunhap;
    cout<<"CLB : "; fflush(stdin); gets(CLB);
    cout<<"Vi tri : "; fflush(stdin); gets(Vitri);
}
void CAUTHU::xuat()
{
    cout<<setw(20)<<Hoten<<setw(10)<<Ngaysinh<<setw(15)<<Quequan<<setw(10)
    <<Bomon<<setw(10)<<Thunhap<<setw(10)<<CLB<<setw(10)<<Vitri<<endl;
}
void OUTPUT(int n, CAUTHU *a)
{
    for(int i=0;i<n;i++)
        if(strcmp(a[i].CLB,"T&T")==0)
        a[i].xuat();
}
void THUNHAPMAX(int n, CAUTHU *a)
{
    float M=a[0].Thunhap;
    for(int i=0;i<n;i++)
        if(a[i].Thunhap>M)
        M=a[i].Thunhap;
    cout<<"THONG TIN CAU THU CO MUC LUONG CAO NHAT: "<<endl;
    for(int i=0;i<n;i++)
        if(a[i].Thunhap==M)
            a[i].xuat();
}
int main()
{
    int n;
    CAUTHU *a;
    do
    {
        cout<<"Nhap so luong cau thu : n = "; cin>>n;
    } while(n<=0 || n>=50);
    a=new CAUTHU[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    cout<<"Danh sach cau thu cua clb T&T : "<<endl;
    OUTPUT(n,a);
    //thong tin nguoi co thu nhap cao nhat
    THUNHAPMAX(n,a);
    return 0;
}
