#include <bits/stdc++.h>

using namespace std;

class KHOA
{
    char MAKH[30];
    char TENKH[30];
    int SGV;
    friend class TRUONG;

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

int main()
{
    TRUONG k;
    k.nhap();
    k.xuat();
}














