#include <bits/stdc++.h>

using namespace std;

class TTB2
{
    float a,b,c;
public:
    TTB2();
    TTB2(float x, float y, float z);
    friend ostream& operator<<(ostream& x, TTB2 y);
    TTB2 operator!();
    TTB2 operator+(TTB2 A);
    TTB2 operator-(TTB2 A);
};
TTB2::TTB2()
{
    a=b=c=0;
}
TTB2::TTB2(float x, float y, float z)
{
    a=x; b=y; c=z;
}
ostream& operator<<(ostream& x, TTB2 y)
{
    x<<y.a<<"x"<<(char)178;
    if(y.b>0)
        x<<"+"<<y.b<<"x";
    else x<<"-"<<-y.b<<"x";
    if(y.c>0)
        x<<"+"<<y.c;
    else x<<"-"<<-y.c;
    return x;
}
TTB2 TTB2::operator!()
{
    TTB2 K;
    K.a=-a;
    K.b=-b;
    K.c=-c;
    return K;
}
TTB2 TTB2::operator+(TTB2 A)
{
    TTB2 K;
    K.a= a+A.a;
    K.b= b+A.b;
    K.c= c+A.c;
    return K;
}
TTB2 TTB2::operator-(TTB2 A)
{
    TTB2 K;
    K.a= a-A.a;
    K.b= b-A.b;
    K.c= c-A.c;
    return K;
}
int main()
{
    TTB2 A(3,4,3), B(2,-5,3);
    ofstream f;
    f.open("C:/OOP/TEP/TTB2.txt", ios::out);
    f<<"TTB2 A : "<<A<<endl;
    f<<"TTB2 B : "<<B<<endl;
    f<<"Doi dau TTB2 A : "<<!A<<endl;
    f<<"Doi dau TTB2 B : "<<!B<<endl;
    f<<"Tong cua 2 TTB2 A va B : "<<A+B<<endl;
    f<<"Hieu cua 2 TTB2 A va B : "<<A-B<<endl;
    f.close();
    return 0;
}
