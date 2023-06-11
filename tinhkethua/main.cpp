#include <bits/stdc++.h>

using namespace std;

class HANG
{
protected:
    char MaH[20];
    float DG;
    int SL;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang : "; fflush(stdin); gets(MaH);
    cout<<"Don gia : "; cin>>DG;
    cout<<"So luong : ";cin>>SL;
}
void HANG::xuat()
{
    cout<<"Ma hang : "<<MaH<<endl;
    cout<<"Don gia : "<<DG<<endl;
    cout<<"So luong : "<<SL<<endl;
}
class Hangmaymac: public HANG
{
    char Chatlieu[20];
    char Size[20];
public:
    void nhap();
    void xuat();
};
void Hangmaymac::nhap()
{
    HANG::nhap();
    cout<<"Chat lieu : "; fflush(stdin);gets(Chatlieu);
    cout<<"Size : "; fflush(stdin);gets(Size);
}
void Hangmaymac::xuat()
{
    HANG::xuat();
    cout<<"Chat lieu : "<<Chatlieu<<endl;
    cout<<"Size : "<<Size<<endl;
}
int main()
{
    Hangmaymac k;
    k.nhap();
    k.xuat();
    return 0;
}
