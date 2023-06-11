#include <bits/stdc++.h>

using namespace std;
class MANG
{
    int n;
    int *a;
public:
    MANG();
    MANG(int m);
    friend istream& operator>>(istream &x, MANG &y);
    friend ostream& operator<<(ostream &x, MANG y);
    bool operator!();
    bool operator+(MANG B);
};
MANG::MANG()
{
    n=0;
    a=NULL;
}
MANG::MANG(int m)
{
    n=m;
    a=new int[n];
    for(int i=0;i<n;i++)
        a[i]=0;
}
istream& operator>>(istream &x, MANG &y)
{
    x>>y.n;
    y.a=new int[y.n];
    for(int i=0;i<y.n;i++)
        x>>y.a[i];
    return x;
}
ostream& operator<<(ostream &x, MANG y)
{
    x<<"Mang vua nhap : ";
    for(int i=0;i<y.n;i++)
        x<<y.a[i];
    return x;
}
bool MANG::operator!()
{
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
            if(a[i]!=a[j])
                return false;
    }
            return true;
}
bool MANG::operator+(MANG B)
{
    if(n!=B.n)
    {
        return false;
    }else
    {
        int T1=0,T2=0;
        for(int i=0;i<n;i++)
            T1+=a[i];
        for(int i=0;i<B.n;i++)
            T2+=B.a[i];
        if(T1==T2)
            return true;
        return false;
    }
}
int main()
{
    MANG A,B;
    cout<<"Nhap mang A : "<<endl;
    cin>>A;
    cout<<"Nhap mang B : "<<endl;
    cin>>B;

    if(!A==true)
    {
        cout<<"cac phan tu mang bang nhau"<<endl;
    } else {
        cout<<"cac phan tu mang khong deu bang nhau "<<endl;
    }
    if(!B==true)
    {
        cout<<"cac phan tu mang bang nhau"<<endl;
    } else {
        cout<<"cac phan tu mang khong deu bang nhau "<<endl;
    }
    if(A+B==true)
    {
        cout<<"Hai mang co cung kich thuoc va tong cac phan tu bang nhau"<<endl;
    } else {
        cout<<"Hai mang ko thoa man dau bai"<<endl;
    }
    return 0;
}
