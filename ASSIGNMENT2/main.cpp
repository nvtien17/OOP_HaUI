#include <bits/stdc++.h>

using namespace std;
class LOPHOC;
class NGUOI
{
    char Hoten[20];
    char NS[10];
    char Que[30];
public:
    void nhap();
    void xuat();
};
void NGUOI::nhap()
{
    cout<<"Ho ten : "; fflush(stdin); gets(Hoten);
    cout<<"Ngay sinh : "; fflush(stdin); gets(NS);
    cout<<"Que quan : "; fflush(stdin); gets(Que);
}
void NGUOI::xuat()
{
    cout<<setw(25)<<Hoten<<setw(20)<<NS<<setw(20)<<Que;
}
class SINHVIEN : public NGUOI
{
    char MaSV[15];
    char Nganh[15];
    int Khoahoc;
public:
    void nhap();
    void xuat();
    friend void dem(LOPHOC k);
    friend void sap(LOPHOC k);
};
void SINHVIEN::nhap()
{
    NGUOI::nhap();
    cout<<"Ma SV : "; fflush(stdin); gets(MaSV);
    cout<<"Nganh : "; fflush(stdin); gets(Nganh);
    cout<<"Khoa hoc : "; cin>>Khoahoc;
}
void SINHVIEN::xuat()
{
    NGUOI::xuat();
    cout<<setw(20)<<MaSV<<setw(20)<<Nganh<<setw(20)<<Khoahoc<<endl;
}
class LOPHOC
{
    char MaLH[10];
    char TenLH[15];
    char Ngaymo[10];
    SINHVIEN *a;
    int n;
    char GV[20];
public:
    void nhap();
    void xuat();
    friend void dem(LOPHOC k);
    friend void sap(LOPHOC k);
};
void LOPHOC::nhap()
{
    cout<<"Ma lop hoc : "; fflush(stdin); gets(MaLH);
    cout<<"Ten lop hoc : "; fflush(stdin); gets(TenLH);
    cout<<"Ngay mo : "; fflush(stdin); gets(Ngaymo);
    cout<<"So sinh vien : n = "; cin>>n;
    a=new SINHVIEN[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    cout<<"Giao vien : " ; fflush(stdin); gets(GV);
}
void LOPHOC::xuat()
{
    cout<<"<======THONG TIN LOP HOC======>"<<endl;
    cout<<"Ma lop hoc : "<<MaLH<<endl;
    cout<<"Ten lop hoc : "<<TenLH<<endl;
    cout<<"Ngay mo : "<<Ngaymo<<endl;
    cout<<"Danh sach cac sinh vien : "<<endl;
    cout<<left<<setw(25)<<"Ho ten"<<setw(20)<<"Ngay sinh"<<setw(20)<<"Que"
    <<setw(20)<<"Ma SV"<<setw(20)<<"Nganh"<<setw(20)<<"Khoa hoc"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    cout<<"Giao vien : "<<GV<<endl;
}
void dem(LOPHOC k)
{
    int d=0;
    for(int i=0;i<k.n;i++)
        if(k.a[i].Khoahoc==11)
        d++;
    if(d==0)
        cout<<"Lop khong co sinh vien khoa 11."<<endl;
    else cout<<"Lop co "<<d<<" sinh vien khoa 11."<<endl;
}
void sap(LOPHOC k)
{
    for(int i=0;i<k.n;i++)
        for(int j=i+1;j<k.n;j++)
        if(k.a[i].Khoahoc>k.a[j].Khoahoc)
            swap(k.a[i],k.a[j]);
}
int main()
{
    LOPHOC k;
    k.nhap();
    k.xuat();
    dem(k);
    sap(k);
    k.xuat();
}
