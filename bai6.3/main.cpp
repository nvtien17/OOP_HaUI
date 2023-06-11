#include <bits/stdc++.h>

using namespace std;
class VEHICLE
{
protected:
    char Nhanhieu[15];
    int Namsx;
    char Hang[15];
public:
    void nhap();
    void xuat();
};

void VEHICLE::nhap()
{
    cout<<"Nhap nhan hieu   : "; fflush(stdin); cin.getline(Nhanhieu, 15);
    cout<<"Nhap nam san xuat : "; cin>>Namsx;
    cout<<"Nhap ten hang     : "; fflush(stdin); cin.getline(Hang, 15);
}
void VEHICLE::xuat()
{
    cout<<"Nhan hieu   : "<<Nhanhieu<<endl;
    cout<<"Nam san xuat: "<<Namsx<<endl;
    cout<<"Ten hang    : "<<Hang<<endl;
}
class OTO : public VEHICLE
{
    int Sochongoi;
    float Dungtich;
public:
    void nhap();
    void xuat();
    friend void sua(OTO &a);
};

void OTO::nhap()
{
    VEHICLE::nhap();
    cout<<"Nhap so cho ngoi  : "; cin>>Sochongoi;
    cout<<"Nhap dung tich xe : "; cin>>Dungtich;
}
void OTO::xuat()
{
    VEHICLE::xuat();
    cout<<"So cho ngoi : "<<Sochongoi<<endl;
    cout<<"Dung tich xe: "<<Dungtich<<endl;
}
class MOTO : public VEHICLE
{
    float Phankhoi;
public:
    void nhap();
    void xuat();
};

void MOTO::nhap()
{
    VEHICLE::nhap();
    cout<<"Nhap phan khoi xe : "; cin>>Phankhoi;
}

void MOTO::xuat()
{
    VEHICLE::xuat();
    cout<<"Phan khoi   : "<<Phankhoi<<endl;
}
void sua(OTO &a)
{
    a.Dungtich = 3.1;
}
int main()
{
    OTO a;
    MOTO b;
    cout<<"Nhap thong tin xe o to: "<<endl;
    a.nhap();
    cout<<"Nhap thong tin xe moto: "<<endl;
    b.nhap();
    cout<<"Thong tin xe o to vua nhap: "<<endl;
    a.xuat();
    cout<<"Thong tin xe moto vua nhap: "<<endl;
    b.xuat();
    sua(a);
    cout<<"Thong tin xe o to vua sua: "<<endl;
    a.xuat();
    return 0;
}
