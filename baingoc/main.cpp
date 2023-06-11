#include <bits/stdc++.h>

using namespace std;

class DAGIAC
{
protected:
    int Socanh;
    float *Dodaicanh;
public:
    DAGIAC();
    DAGIAC(int n);
    void nhap();
    void xuat();
    float chuvi();
};
DAGIAC::DAGIAC()
{
    Socanh=0;
    Dodaicanh=NULL;
}
DAGIAC::DAGIAC(int n)
{
    Socanh=n;
}
void DAGIAC::nhap()
{
    Dodaicanh=new float[Socanh];
    cout<<"Nhap do dai "<<Socanh<<" canh :"<<endl;
    for(int i=0;i<Socanh;i++)
    {
        cout<<"Nhap do dai canh thu "<<i+1<<" : ";
        cin>>Dodaicanh[i];
    }
}
void DAGIAC::xuat()
{
    cout<<"Da giac "<<Socanh<<" canh co do dai: ";
    for(int i=0;i<Socanh;i++)
        cout<<Dodaicanh[i]<<" ";
}
float DAGIAC::chuvi()
{
    float CV=0;
    for(int i=0;i<Socanh;i++)
        CV+=Dodaicanh[i];
    return CV;
}
class TAMGIAC : public DAGIAC
{
public:
    void nhap();
    void xuat();
    float DT();
};
void TAMGIAC::nhap()
{
    Socanh=3;
    DAGIAC::nhap();
}
void TAMGIAC::xuat()
{
    DAGIAC::xuat();
}
float TAMGIAC::DT()
{
    float c=0,p=0;
    for(int i=0;i<Socanh;i++)
    {
        c=c+Dodaicanh[i];
    }
    p= c/2;
    float S=sqrt(p*(p-Dodaicanh[0])*(p-Dodaicanh[1])*(p-Dodaicanh[2]));
    return S;
}
int main()
{
    DAGIAC a(4);
    a.nhap();
    a.xuat();
    cout<<endl;
    cout<<"Chu vi da giac = "<<a.chuvi()<<endl;
    TAMGIAC b;
    b.nhap();
    b.xuat();
    cout<<"Chu vi da giac = "<<b.chuvi()<<endl;
    cout<<"Dien tich tam giac = "<<b.DT();
    return 0;
}
