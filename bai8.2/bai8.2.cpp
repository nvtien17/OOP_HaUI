#include <bits/stdc++.h>

using namespace std;

class SP
{
    float Thuc;
    float Ao;
public:
    SP();
    SP(float a, float b);
    friend ostream& operator<<(ostream &x, SP y);
    SP operator+(SP A);
    SP operator-(SP A);
};
SP::SP()
{
    Thuc=0;
    Ao=0;
}
SP::SP(float a, float b)
{
    Thuc=a;
    Ao=b;
}
ostream& operator<<(ostream &x, SP y)
{
    x<<y.Thuc<<"+"<<"i*"<<y.Ao;
    return x;
}
SP SP::operator+(SP A)
{
    SP K;
    K.Thuc = Thuc + A.Thuc;
    K.Ao = Ao + A.Ao;
    return K;
}
SP SP::operator-(SP A)
{
    SP K;
    K.Thuc = Thuc - A.Thuc;
    K.Ao = Ao - A.Ao;
    return K;
}
int main()
{
    SP SP1(3,4), SP2(2,5);
    cout<<SP1<<endl;
    cout<<SP2<<endl;
    SP SP3=SP1 + SP2;
    SP SP4=SP1 - SP2;
    cout<<SP1<<" + "<<SP2<<" = "<<SP3<<endl;
    cout<<SP1<<" - "<<SP2<<" = "<<SP4<<endl;
    ofstream fout;
    fout.open("C:/OOP/TEP/Sophuc.txt", ios::out);
    fout<<SP1<<" + "<<SP2<<" = "<<SP3<<endl;
    fout<<SP1<<" - "<<SP2<<" = "<<SP4<<endl;
    fout.close();
    return 0;
}
