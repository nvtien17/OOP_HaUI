#include <bits/stdc++.h>

using namespace std;
class TRUONG;

class KHOA
{
    char MAKH[30];
    char TENKH[30];
    int SGV;
    friend class TRUONG;
    friend void TIMKIEM(TRUONG k);
    friend void SAP(TRUONG k);
};

class TRUONG
{
    char MATR[30];
    char TENTR[30];
    KHOA*x;
    int n;
public:
    void nhap();
    void xuat();
    friend void TIMKIEM(TRUONG k);
    friend void SAP(TRUONG k);
};

void TRUONG::nhap()
{
    cout<<"Ma truong : "; fflush(stdin); cin.getline(MATR, 30);
    cout<<"Ten truong: "; fflush(stdin); cin.getline(TENTR, 30);
    cout<<"n="; cin>>n;
    x = new KHOA[n];
    for(int i=0; i<n; i++)
    {
        char k[30];
        cout<<"Ma khoa : "; fflush(stdin); cin.getline(x[i].MAKH, 30);
        cout<<"Ten khoa: "; fflush(stdin); cin.getline(x[i].TENKH, 30);
        cout<<"So gv   : "; cin>>x[i].SGV;
    }
}
void TRUONG::xuat()
{
    cout<<"Ma truong : "<<MATR<<endl;
    cout<<"Ten truong: "<<TENTR<<endl;
    for(int i=0; i<n; i++)
        cout<<setw(10)<<x[i].MAKH<<setw(20)<<x[i].TENKH<<setw(15)<<x[i].SGV<<endl;
}

void TIMKIEM(TRUONG k)
{
    int d=0;
    for(int i=0; i<k.n; i++)
        if(strcmp(k.x[i].TENKH,"CNTT")==0)
        d++;
    if(d==0)
        cout<<"KHONG CO KHOA CNTT";
    else
        cout<<"CO KHOA CNTT";
}
void SAP(TRUONG k)
{
    for(int i=0; i<k.n; i++)
    for(int j=i+1; j<k.n; j++)
    if(k.x[i].SGV > k.x[j].SGV)
    swap(k.x[i], k.x[j]);
}

int main()
{
    TRUONG k;
    k.nhap();
    k.xuat();
    TIMKIEM(k);

    SAP(k);
    k.xuat();

}














