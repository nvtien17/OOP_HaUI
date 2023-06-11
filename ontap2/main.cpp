#include <bits/stdc++.h>

using namespace std;
class DIEM
{
    float x,y,z;
public:
    DIEM();
    DIEM(float a, float b, float c);
    DIEM operator+(DIEM A);
    friend istream& operator>>(istream& a, DIEM &b);
    friend ostream& operator<<(ostream& a, DIEM b);
};
DIEM::DIEM()
{
    x=y=z=0;
}
DIEM::DIEM(float a, float b, float c)
{
    x=a; y=b; z=c;
}
DIEM DIEM::operator+(DIEM A)
{
    DIEM K;
    K.x= x+ A.x;
    K.y= y+ A.y;
    K.z= z+ A.z;
    return K;
}
istream& operator>>(istream &a, DIEM &b)
{
    cout<<"Nhap toa do diem : "<<endl;
    a>>b.x; a>>b.y; a>>b.z;
    return a;
}
ostream& operator<<(ostream &a, DIEM b)
{
    a<<"Toa do diem vua nhap : " <<b.x<<","<<b.y<<","<<b.z<<endl;
    return a;
}
int main()
{
    DIEM M,N;
    cin>>M>>N;
    cout<<M<<N;
    cout<<"Tong 2 diem vua nhap :"<<M+N<<endl;
    return 0;
}
