#include <bits/stdc++.h>

using namespace std;

class SACH
{
    char Masach[30];
    char Tensach[30];
    char NXB[30];
    int Sotrang;
    float Giatien;
public:
    void nhap();
    void xuat();
};
void SACH::nhap()
{
    cout<<"Ma sach : ";fflush(stdin);cin.getline(Masach,30);
    cout<<"Ten sach : ";fflush(stdin);cin.getline(Tensach,30);
    cout<<"Nha xuat ban : ";fflush(stdin);cin.getline(NXB,30);
    cout<<"So trang : "; cin>>Sotrang;
    cout<<"Gia tien : "; cin>>Giatien;
}
void SACH::xuat()
{
    cout<<setw(15)<<Masach<<setw(20)<<Tensach
    <<setw(20)<<NXB<<setw(10)<<Sotrang
    <<setw(15)<<Giatien<<endl;
}
int main()
{
    int n;
    SACH *a;
    cout<<"Nhap so cuon sach : n = ";cin>>n;
    a=new SACH[n];
    for (int i=0;i<n;i++)
        a[i].nhap();
    cout<<setw(15)<<"Ma sach"<<setw(20)<<"Ten sach"
    <<setw(20)<<"NXB"<<setw(10)<<"So trang"
    <<setw(15)<<"Gia tien"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
