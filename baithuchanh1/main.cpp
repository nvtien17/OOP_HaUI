#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char MaSV[20];
    char Hoten[30];
    int tuoi;
    float diem;
public:
    void nhap();
    void xuat();
};
void SINHVIEN::nhap()
{
    cout<<" Ma SV : " ;fflush(stdin); cin.getline(MaSV,20);
    cout<<" Ho ten: " ;fflush(stdin); cin.getline(Hoten,30);
    cout<<" Tuoi  : ";cin>>tuoi;
    cout<<" Diem  : ";cin>>diem;
}
void SINHVIEN::xuat()
{
    cout<<"Ma SV : "<<MaSV<<endl;
    cout<<"Ho ten : "<<Hoten<<endl;
    cout<<"Tuoi : "<<tuoi<<endl;
    cout<<"Diem : "<<diem<<endl;
    }
int main()
{
    SINHVIEN a,b;
    a.nhap();
    b.nhap();
    cout<<"------------------------------"<<endl;
    a.xuat();
    b.xuat();
    return 0;
}
