#include <bits/stdc++.h>

using namespace std;

class PHANSO
{
    float tu;
    float mau;
public:
    PHANSO();
    PHANSO(float x, float y);
    PHANSO operator*(PHANSO A);
    float operator!();
    friend istream& operator>>(istream &x, PHANSO &y);
    friend ostream& operator<<(ostream &x, PHANSO y);
};
PHANSO::PHANSO()
{
    tu=mau=0;
}
PHANSO::PHANSO(float x, float y)
{
    tu=x; mau=y;
}
PHANSO PHANSO::operator*(PHANSO A)
{
    PHANSO K;
    K.tu=tu*A.tu;
    K.mau=mau*A.mau;
    return K;
}
float PHANSO::operator!()
{
    return tu/mau;
}
istream& operator>>(istream &x, PHANSO &y)
{
    cout<<"tu = "; x>>y.tu;
    cout<<"mau = "; x>>y.mau;
    return x;
}
ostream& operator<<(ostream &x, PHANSO y)
{
    x<<y.tu<<"/"<<y.mau;
}
int main()
{
    PHANSO A(3,4), B(5,4);
    ofstream f;
    f.open("C:/OOP/TEP/AS3.txt", ios::out);
    f<<"Phan so A : "<<A<<endl;
    f<<"Phan so B : "<<B<<endl;
    f<<"A*B = "<<A*B<<"="<<!(A*B)<<endl;
    return 0;
}
