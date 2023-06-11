#include <bits/stdc++.h>

using namespace std;

class MANG
{
    float *a;
    int n;
public:
    friend istream& operator>> (istream &x, MANG &y);
    friend ostream& operator<< (ostream &x, MANG y);
    MANG operator++();
    MANG operator--();
};
istream& operator>> (istream &x, MANG &y)
{
    cout<<"nhap n = "; x>>y.n;
    y.a=new float[y.n];
    for(int i=0;i<y.n;i++)
        x>>y.a[i];
    return x;
}
ostream& operator<< (ostream &x, MANG y)
{
    for(int i=0;i<y.n;i++)
        x<<y.a[i]<<" ";
    return x;
}
MANG MANG::operator++()
{
    MANG K;
    K.n=n;
    K.a=a;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if(a[i]>a[j]) swap(a[i],a[j]);
    for(int i=0;i<n;i++)
        K.a[i]=a[i];
    return K;
}
MANG MANG::operator--()
{
    MANG K;
    K.n=n;
    K.a=a;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if(a[i]<a[j]) swap(a[i],a[j]);
    for(int i=0;i<n;i++)
        K.a[i]=a[i];
    return K;
}
int main()
{
    MANG A;
    cin>>A;
    ofstream f;
    f.open("C:/OOP/TEP/Sapmang.txt", ios::out);
    f<<A<<endl;
    f<<"sap tang: "<<++A<<endl;
    f<<"sap giam : "<<--A<<endl;
    f.close();
    return 0;
}
