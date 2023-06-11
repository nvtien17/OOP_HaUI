#include <bits/stdc++.h>

using namespace std;
class PHANSO
{
    float a,b;
public:
    void nhap();
    void xuat();
    PHANSO operator+(PHANSO Q);
    PHANSO operator-();
    float operator!();
};
void PHANSO::nhap()
{
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
}
void PHANSO::xuat()
{
    cout<<a<<"/"<<b<<endl;
}
PHANSO PHANSO::operator+(PHANSO Q)
{
    PHANSO K;
    K.a=a*Q.b+Q.a*b;
    K.b=b*Q.b;
    return K;
}
PHANSO PHANSO::operator-()
{
    PHANSO K;
    K.a=-a;
    K.b=b;
    return K;
}
float PHANSO::operator!()
{
    return a/b;
}
int main()
{
    PHANSO P, Q;
    P.nhap();
    Q.nhap();
    P.xuat();
    Q.xuat();
    PHANSO K= P+ Q;
    K.xuat();
    K=-K;
    K.xuat();
    cout<<!K<<endl;
    return 0;
}
