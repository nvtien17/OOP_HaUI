#include <iostream>

using namespace std;
class LASERPRINTER;
class PRINTER
{
protected:
    float TL;
    char Hangsx[30];
    int Namsx;
    int Tocdo;
};
class DOTPRINTER: public PRINTER
{
    int MDK;
public:
    void nhap();
    void xuat();
    friend void sua(DOTPRINTER &a, LASERPRINTER &b);
};
void DOTPRINTER::nhap()
{
    cout<<"Trong luong : "; cin>>TL;
    cout<<"Hang san xuat : "; fflush(stdin); gets(Hangsx);
    cout<<"Nam san xuat : "; cin>>Namsx;
    cout<<"Toc do : "; cin>>Tocdo;
    cout<<"MDK : "; cin>>MDK;
}
void DOTPRINTER::xuat()
{
    cout<<"Trong luong           : "<<TL<<endl;
    cout<<"Hang san xuat         : "<<Hangsx<<endl;
    cout<<"Nam san xuat          : "<<Namsx<<endl;
    cout<<"Toc do (So trang/phut): "<<Tocdo<<endl;
    cout<<"Mat do kim            : "<<MDK<<endl;
}
class LASERPRINTER: public PRINTER
{
    int DPG;
public:
    void nhap();
    void xuat();
    friend void sua(DOTPRINTER &a, LASERPRINTER &b);
};
void LASERPRINTER::nhap()
{
    cout<<"Trong luong : "; cin>>TL;
    cout<<"Hang san xuat : "; fflush(stdin); gets(Hangsx);
    cout<<"Nam san xuat : "; cin>>Namsx;
    cout<<"Toc do : "; cin>>Tocdo;
    cout<<"Do phan giai : "; cin>>DPG;
}
void LASERPRINTER::xuat()
{
    cout<<"Trong luong           : "<<TL<<endl;
    cout<<"Hang san xuat         : "<<Hangsx<<endl;
    cout<<"Nam san xuat          : "<<Namsx<<endl;
    cout<<"Toc do (So trang/phut): "<<Tocdo<<endl;
    cout<<"Do phan giai cua may  : "<<DPG<<endl;
}
void sua(DOTPRINTER &a, LASERPRINTER &b)
{
    a.Namsx = 2021;
    b.Namsx = 2021;
}
int main()
{
   DOTPRINTER a;
   LASERPRINTER b;
   cout<<"Nhap thong tin may in kim "<<endl;
   a.nhap();
   cout<<"Nhap thong tin may in Laser "<<endl;
   b.nhap();
   cout<<"Thong tin may in kim : "<<endl;
   a.xuat();
   cout<<"Thong tin may in Laser : "<<endl;
   b.xuat();
   sua(a,b);
   cout<<"Thong tin cua may in kim vua sua: "<<endl;
    a.xuat();
    cout<<"Thong tin cua may in laser vua sua: "<<endl;
    b.xuat();
    return 0;
}
