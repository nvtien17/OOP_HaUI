#include <bits/stdc++.h>

using namespace std;
class DN
{
    char tenDN[50];
    char diachi[50];
    int sonv;
    float doanhthu;
public:
    void nhap();
    void xuat();
};
void DN::nhap()
{
    cout<<"Ten doanh nghiep : ";fflush(stdin);cin.getline(tenDN,50);
    cout<<"Dia chi : "; fflush(stdin); cin.getline(diachi,50);
    cout<<"So nhan vien : "; cin>>sonv;
    cout<<"Doanh thu : "; cin>>doanhthu;
}
void DN::xuat()
{
    cout<<setw(25)<<tenDN<<setw(25)<<diachi<<
    setw(15)<<sonv<<setw(15)<<doanhthu<<endl;
}
int main()
{
    int n;
    DN *a;
    cout<<"Nhap so doanh nghiep : n = ";cin>>n;
    a= new DN[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    cout<<setw(25)<<"Ten DN"<<setw(25)<<"Dia chi"<<
    setw(15)<<"So NV"<<setw(15)<<"Doanh thu"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
