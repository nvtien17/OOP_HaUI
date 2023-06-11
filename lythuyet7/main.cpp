#include <iostream>

using namespace std;

class HANG
{
protected:
    char MaH[20];
    char TenH[20];
    float DG;
    int SL;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang : "; fflush(stdin);gets(MaH);
    cout<<"Ten hang : "; fflush(stdin); gets(TenH);
    cout<<"Don gia : "; cin>>DG;
    cout<<"So luong : "; cin>>SL;
}
void HANG::xuat()
{
    cout<<"Ma Hang : "<<MaH<<endl;
    cout<<"Ten Hang : "<<TenH<<endl;
    cout<<"So luong : "<<SL<<endl;
    cout<<"Don gia : "<<DG<<endl;
}
class HANGMM : public HANG
{
    char Chatlieu[20];
    int Size;
public:
    void nhap();
    void xuat();
    friend void sua1(HANGMM &a);
};
void HANGMM::nhap()
{
    HANG::nhap();
    cout<<"Chat lieu : "; fflush(stdin); gets(Chatlieu);
    cout<<"Size      : "; cin>>Size;
}
void HANGMM::xuat()
{
    HANG::xuat();
    cout<<"Chat lieu : "<<Chatlieu<<endl;
    cout<<"Size      : "<<Size<<endl;
}
class HANGDT : public HANG
{
    float Dienap;
    float CS;
public:
    void nhap();
    void xuat();
    friend void sua2(HANGDT &b);
};
void HANGDT::nhap()
{
    HANG::nhap();
    cout<<"Dien ap : "; cin>>Dienap;
    cout<<"Cong suat : "; cin>>CS;
}
void HANGDT::xuat()
{
    HANG::xuat();
    cout<<"Dien ap  : "<<Dienap<<endl;
    cout<<"Cong suat : "<<CS<<endl;
}
void sua1(HANGMM &a)
{
    a.DG=40;
}
void sua2(HANGDT &b)
{
    b.DG=80;
}
int main()
{
    HANGMM a;
    HANGDT b;
    a.nhap();
    b.nhap();
    a.xuat();
    b.xuat();
    sua1(a);
    sua2(b);
    a.xuat();
    b.xuat();
    return 0;
}
