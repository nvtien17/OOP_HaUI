#include <bits/stdc++.h>

using namespace std;

class PHANSO
{
    float Tu;
    float Mau;
public:
    friend istream& operator>> (istream &x, PHANSO &y);
    friend ostream& operator<< (ostream &x, PHANSO y);
    PHANSO operator+(PHANSO A);
    PHANSO operator-(PHANSO A);
    PHANSO operator*(PHANSO A);
    PHANSO operator/(PHANSO A);
    float operator!();
};
PHANSO PHANSO::operator+(PHANSO A)
{
    PHANSO K;
    K.Tu=Tu*A.Mau + A.Tu*Mau;
    K.Mau=Mau*A.Mau;
    return K;
}
PHANSO PHANSO::operator-(PHANSO A)
{
    PHANSO K;
    K.Tu=Tu*A.Mau - A.Tu*Mau;
    K.Mau=Mau*A.Mau;
    return K;
}
PHANSO PHANSO::operator*(PHANSO A)
{
    PHANSO K;
    K.Tu=Tu*A.Tu;
    K.Mau=Mau*A.Mau;
    return K;
}
PHANSO PHANSO::operator/(PHANSO A)
{
    PHANSO K;
    K.Tu= Tu*A.Mau;
    K.Mau= Mau*A.Tu;
    return K;
}
float PHANSO::operator!()
{
    return Tu/Mau;
}
istream& operator>> (istream &x, PHANSO &y)
{
    cout<<"Tu so = ";x>>y.Tu;
    cout<<"Mau so = ";x>>y.Mau;
    return x;
}
ostream& operator<< (ostream &x, PHANSO y)
{
    x<<y.Tu<<"/"<<y.Mau;
    return x;
}
int main()
{
    PHANSO A,B;
    cout<<"Nhap phan so thu nhat : "<<endl; cin>>A;
    cout<<"Nhap phan so thu hai : "<<endl; cin>>B;
    PHANSO M= A+B;
    PHANSO N= A-B;
    PHANSO P=A*B;
    PHANSO Q= A/B;
    cout<<A<<" + "<<B<<" = "<<M<<" = "<<!M<<endl;
    cout<<A<<" - "<<B<<" = "<<N<<" = "<<!N<<endl;
    cout<<A<<" * "<<B<<" = "<<P<<" = "<<!P<<endl;
    cout<<A<<" / "<<B<<" = "<<Q<<" = "<<!Q<<endl;
    ofstream fout;
    fout.open("C:/OOP/TEP/Phanso.txt",ios::out);
    fout<<A<<" + "<<B<<" = "<<M<<" = "<<!M<<endl;
    fout<<A<<" - "<<B<<" = "<<N<<" = "<<!N<<endl;
    fout<<A<<" * "<<B<<" = "<<P<<" = "<<!P<<endl;
    fout<<A<<" / "<<B<<" = "<<Q<<" = "<<!Q<<endl;
    fout.close();
    return 0;
}
