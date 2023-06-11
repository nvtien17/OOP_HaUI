#include<bits/stdc++.h>

using namespace std;

class Hang
{
    float Trongluong,Giatien,Thetich;
public:
    Hang();
    Hang(float a, float b, float c);
    friend istream& operator>>(istream& x, Hang &y);
    friend ostream& operator<<(ostream& x, Hang y);
    Hang operator+(Hang x);
    bool operator-(Hang x);
};
Hang::Hang()
{
    Trongluong=Giatien=Thetich= 0;
}
Hang::Hang(float a, float b, float c)
{
    Trongluong=a;
    Giatien=b;
    Thetich=c;
}
istream& operator>>(istream& x, Hang &y)
{
    cout<<"Nhap trong luong: "; x>>y.Trongluong;
    cout<<"Nhap gia tien: "; x>>y.Giatien;
    cout<<"Nhap the tich: "; x>>y.Thetich;
    return x;
}
ostream& operator<<(ostream& x, Hang y)
{
    x<<y.Trongluong<<endl;
    x<<y.Giatien<<endl;
    x<<y.Thetich<<endl;
    return x;
}

Hang Hang::operator+(Hang x)
{
    Hang k;
    k.Trongluong= Trongluong+ x.Trongluong;
    k.Giatien= Giatien+x.Giatien;
    k.Thetich=Thetich+x.Thetich;
    return k;
}
bool Hang::operator-(Hang x)
{
    if(Giatien==x.Giatien && Trongluong==x.Trongluong)
        {
            return true;
        }else return false;

}
int main()
{
    Hang a,b;
    cin>>a;
    cout<<a<<endl;
    cin>>b;
    cout<<b<<endl;
    Hang c= a+b;
    cout<<"tong hai mat hang : "<<c<<endl;
    ofstream f;
    f.open("C:\OOP\TEP\Hang.txt", ios::out);
	f<<a<<endl;
    f<<b<<endl;
    f<<"tong hai mat hang : "<<c<<endl;
    if(a-b)
    {
        cout<<"2 mat hang cung gia va cung trong luong"<<endl;
        f<<"2 mat hang cung gia va cung trong luong"<<endl;
    }else{
        cout<<"2 mat hang khong cung gia hoac trong luong"<<endl;
        f<<"2 mat hang khong cung gia hoac trong luong"<<endl;
    }
    f.close();
    return 0;
}
