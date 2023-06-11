#include <bits/stdc++.h>

using namespace std;
class ELECTRONIC
{
protected:
    int Congsuat;
    int Dienap;
public:
    ELECTRONIC(int a, int b);
};
ELECTRONIC::ELECTRONIC(int a, int b)
{
    Congsuat=a;
    Dienap=b;
}
class MAYGIAT : public ELECTRONIC
{
    float Dungtich;
    char Loai[20];
public:
    MAYGIAT(int a, int b, float c, char *d);
    void xuat();
};
MAYGIAT::MAYGIAT(int a,int b, float c, char *d): ELECTRONIC(a,b)
{
    Dungtich=c;
    strcpy(Loai,d);
}
void MAYGIAT::xuat()
{
    cout<<"Cong suat : "<<Congsuat<<endl;
    cout<<"Dien ap   : "<<Dienap<<endl;
    cout<<"Dung tich : "<<Dungtich<<endl;
    cout<<"Loai      : "<<Loai<<endl;
}
class TULANH : public ELECTRONIC
{
    float DT;
    int songan;
public :
    TULANH(int a, int b, float c, int d);
    void xuat();
};
TULANH::TULANH(int a, int b, float c, int d): ELECTRONIC(a,b)
{
    DT=c;
    songan=d;
}
void TULANH::xuat()
{
    cout<<"Cong suat : "<<Congsuat<<endl;
    cout<<"Dien ap   : "<<Dienap<<endl;
    cout<<"Dung tich : "<<DT<<endl;
    cout<<"So ngan   : "<<songan<<endl;
}
int main()
{
    MAYGIAT a(1200,220,15,"cua tren");
    TULANH b(2000,220,50,2);
    cout<<"Thong tin may giat: "<<endl;
    a.xuat();
    cout<<"Thong tin tu lanh : "<<endl;
    b.xuat();
    return 0;
}
