#include <bits/stdc++.h>

using namespace std;
class BAN
{
    char maban[30];
    char tenban[30];
    char ngaythanhlap[11];
public:
    friend class TRUONGDH;
};
class KHOA
{
    char makhoa[30];
    char tenkhoa[30];
    char truongkhoa[30];
public:
    friend class TRUONGDH;
};
class TRUONG
{
protected:
    char matruong[30];
    char tentruong[30];
    char diachi[30];
public:
    void nhap();
    void xuat();
};
void TRUONG::nhap()
{
    cout<<"Nhap ma truong : "; fflush(stdin); cin.getline(matruong, 30);
    cout<<"Nhap ten truong: "; fflush(stdin); cin.getline(tentruong, 30);
    cout<<"Nhap dia chi   : "; fflush(stdin); cin.getline(diachi, 30);
}
void TRUONG::xuat()
{
    cout<<"Ma truong  : "<<matruong<<endl;
    cout<<"Ten truong: "<<tentruong<<endl;
    cout<<"Dia chi    : "<<diachi<<endl;
}
class TRUONGDH : public TRUONG
{
    KHOA *x;
    int n;
    BAN *y;
    int m;
public:
    void nhap();
    void xuat();
};
void TRUONGDH::nhap()
{
    TRUONG::nhap();
    cout<<"Nhap so khoa: "; cin>>n;
    x = new KHOA[n];
    for(int i = 0; i < n; i++)
    {
        cout<<"Nhap thong tin khoa thu "<<i+1<<": "<<endl;
        cout<<"\tNhap ma khoa    : "; fflush(stdin); cin.getline(x[i].makhoa, 30);
        cout<<"\tNhap ten khoa   : "; fflush(stdin); cin.getline(x[i].tenkhoa, 30);
        cout<<"\tNhap truong khoa: "; fflush(stdin); cin.getline(x[i].truongkhoa, 30);
    }
    cout<<"Nhap so ban: "; cin>>m;
    y = new BAN[m];
    for(int i = 0; i < m; i++)
    {
        cout<<"Nhap thong tin ban thu "<<i+1<<": "<<endl;
        cout<<"\tNhap ma ban   : "; fflush(stdin); cin.getline(y[i].maban, 30);
        cout<<"\tNhap ten ban  : "; fflush(stdin); cin.getline(y[i].tenban, 30);
        cout<<"\tNgay thanh lap: "; fflush(stdin); cin.getline(y[i].ngaythanhlap, 11);
    }
}
void TRUONGDH::xuat()
{
    cout<<endl;
    cout<<"THONG TIN TRUONG DAI HOC VUA NHAP"<<endl;
    TRUONG::xuat();
    cout<<"-------------------DANH SACH CAC KHOA------------------------"<<endl;
    cout<<setw(10)<<left<<"Ma khoa"<<setw(20)<<"Ten khoa"<<setw(20)<<"Truong khoa"<<endl;
    for(int i = 0; i < n; i++)
        cout<<setw(10)<<left<<x[i].makhoa<<setw(20)
        <<x[i].tenkhoa<<setw(20)<<x[i].truongkhoa<<endl;
    cout<<endl;
    cout<<"-----------------------------DANH SACH CAC BAN-----------------------------"<<endl;
    cout<<setw(10)<<left<<"Ma ban"<<setw(20)<<"Ten ban"<<setw(20)<<"Ngay thanh lap"<<endl;
    for(int i = 0; i < m; i++)
        cout<<setw(10)<<left<<y[i].maban<<setw(20)
        <<y[i].tenban<<setw(20)<<y[i].ngaythanhlap<<endl;
}
int main()
{
    TRUONGDH a;
    a.nhap();
    a.xuat();
    return 0;
}
