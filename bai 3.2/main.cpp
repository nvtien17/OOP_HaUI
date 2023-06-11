#include <bits/stdc++.h>

using namespace std;
class NSX
{
    char Mansx[20];
    char Tennsx[20];
    char Dcnsx[20];
public:
    void nhap();
    void xuat();
};
void NSX::nhap()
{
    cout<<"Ma NSX : ";fflush(stdin);gets(Mansx);
    cout<<"Ten NSX : ";fflush(stdin);gets(Tennsx);
    cout<<"Dia chi : ";fflush(stdin);gets(Dcnsx);
}
void NSX::xuat()
{
    cout<<"Ma NSX : "<<Mansx<<endl;
    cout<<"Ten NSX : "<<Tennsx<<endl;
    cout<<"Dia chi NSX : "<<Dcnsx<<endl;
}
class HANG
{
    char mahang[20];
    char tenhang[20];
    NSX x;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang : ";fflush(stdin);gets(mahang);
    cout<<"Ten hang : ";fflush(stdin);gets(tenhang);
    x.nhap();
}
void HANG::xuat()
{
    cout<<"Ma hang : "<<mahang<<endl;
    cout<<"Ten hang : "<<tenhang<<endl;
    x.xuat();
}
int main()
{
    HANG a;
    a.nhap();
    a.xuat();
    return 0;
}
