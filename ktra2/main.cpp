#include <bits/stdc++.h>

using namespace std;

class TUGIAC
{
    float a, b, c, d;
public:
    TUGIAC();
    TUGIAC(float x, float y, float z, float t);
    friend istream& operator>>(istream &x, TUGIAC &y);
    friend ostream& operator<<(ostream &x, TUGIAC y);
    float operator!();
    TUGIAC operator+(TUGIAC A);
    bool operator*(TUGIAC A);
};
TUGIAC::TUGIAC()
{
    a=b=c=d=0;
}
TUGIAC::TUGIAC(float x, float y, float z, float t)
{
    a=x; b=y; c=z; d=t;
}
istream& operator>>(istream &x, TUGIAC &y)
{
    cout<<"a = "; x>>y.a;
    cout<<"b = "; x>>y.b;
    cout<<"c = "; x>>y.c;
    cout<<"d = "; x>>y.d;
    return x;
}
ostream& operator<<(ostream &x, TUGIAC y)
{
    x<<y.a<<", "<<y.b<<", "<<y.c<<", "<<y.d;
    return x;
}
float TUGIAC::operator!()
{
    return (a+b+c+d)/2;
}
TUGIAC TUGIAC::operator+(TUGIAC A)
{
    TUGIAC K;
    K.a=a+A.a;
    K.b=b+A.b;
    K.c=c+A.c;
    K.d=d+A.d;
    return K;
}
bool TUGIAC::operator*(TUGIAC A)
{
    TUGIAC K;
    K.a=a;
    K.b=b;
    K.c=c;
    K.d=d;
    if(!K==!A)
        return true;
    return false;
}
int main()
{
    TUGIAC A,B;
    cout<<"Nhap A: "<<endl;
    cin>>A;
    cout<<"Nhap B:"<<endl;
    cin>>B;
    cout<<"Tu giac A : "<<A<<endl;
    cout<<"Chu vi tu giac A :"<<(!A)*2<<endl;
    cout<<"Tu giac B : "<<B<<endl;
    cout<<"Chu vi tu giac B :"<<(!B)*2<<endl;
    ofstream f;
    f.open("C:/OOP/TEP/TUGIAC12.txt", ios::out);
    f<<"Tu giac A :"<<A<<endl;
    f<<"Chu vi A : "<<(!A)*2<<endl;
    f<<"Tu giac B :"<<B<<endl;
    f<<"Chu vi B : "<<(!B)*2<<endl;
    f.close();
    f.open("C:/OOP/TEP/TUGIAC12.txt", ios::app);
    TUGIAC C= A+B;
    f<<"tong cua 2 tu giac A va B la tu giac : "<<C<<endl;
    f.close();
    if(A*B)
        cout<<"2 tu giac co chu vi bang nhau"<<endl;
    else
        cout<<"2 tu giac co chu vi khong bang nhau!"<<endl;
    return 0;
}
