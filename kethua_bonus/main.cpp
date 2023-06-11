#include <bits/stdc++.h>

using namespace std;
class NSX
{
    char TENNSX[30];
    char DIACHI[30];
public:
    void nhap();
    void xuat();
};
void NSX::nhap()
{
    cout<<"Ten nsx : "; fflush(stdin); gets(TENNSX);
    cout<<"Dia chi : "; fflush(stdin); gets(DIACHI);
}

void NSX::xuat()
{
    cout<<"Ten nsx : "<<TENNSX<<endl;
    cout<<"Dia chi : "<<DIACHI<<endl;
}

class DATE
{
    int D, M, Y;
public:
    void nhap();
    void xuat();
};
void DATE::nhap()
{
    cout<<"Ngay  : "; cin>>D;
    cout<<"Thang : "; cin>>M;
    cout<<"Nam   : "; cin>>Y;
}
void DATE::xuat()
{
    cout<<D<<"/"<<M<<"/"<<Y<<endl;
}

class HANG
{
protected:
    char TENH[30];
    NSX x;
    float DONGIA;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ten hang: "; fflush(stdin); gets(TENH);
    x.nhap();
    cout<<"Don gia : "; cin>>DONGIA;
}
void HANG::xuat()
{
    cout<<"Ten hang : "<<TENH<<endl;
    x.xuat();
    cout<<"Don gia  : "<<DONGIA<<endl;
}

class TIVI : public HANG
{
    int KICHTHUOC;
    DATE NGAYNHAP;
public:
    void nhap();
    void xuat();
    friend void tanggia(TIVI *k, int n);
    friend void xoa(TIVI *&k, int &n);
};
void TIVI::nhap()
{
    HANG::nhap();
    cout<<"Kich thuoc: "; cin>>KICHTHUOC;
    NGAYNHAP.nhap();
}
void TIVI::xuat()
{
    HANG::xuat();
    cout<<"Kich thuoc: "<<KICHTHUOC<<endl;
    cout<<"Ngay nhap: "; NGAYNHAP.xuat();
}
void tanggia(TIVI *k, int n)
{
    for(int i=0;i<n;i++)
        k[i].DONGIA=k[i].DONGIA+1000;
}
void xoa(TIVI *&k, int &n)
{
    for(int i=0;i<n;i++)
        while(k[i].DONGIA<2000 && i<n-1)
        {
            for(int j=i+1;j<n;j++)
                k[j]=k[j-1];
            n--;
            k=(TIVI*) realloc (k, n*sizeof(TIVI));
        }
}


int main()
{
    TIVI *k; int n;
    cout<<"n="; cin>>n;
    k = (TIVI*) calloc(n, sizeof(TIVI));
    for(int i=0; i<n; i++)
        k[i].nhap();
    cout<<"HANG VUA NHAP"<<endl;
    for(int i=0; i<n; i++)
        k[i].xuat();
    tanggia(k,n);
    cout<<endl<<"SAU KHI SUA:"<<endl;
    for(int i=0; i<n; i++)
        k[i].xuat();
    cout<<endl<<"SAU KHI XOA:"<<endl;
    xoa(k,n);
    for(int i=0; i<n; i++)
        k[i].xuat();
}
