#include <bits/stdc++.h>

using namespace std;
class MT
{
    double **a;
    int n,m;
public:
    friend istream& operator>>(istream &x, MT &y);
    friend ostream& operator<<(ostream &x, MT y);
    MT operator+(MT A);
    MT operator-(MT B);
    MT operator!();
};
istream& operator>>(istream &x, MT &y)
{
    cout<<"Nhap so cot n = "; x>>y.n;
    cout<<"Nhap so hang m = "; x>>y.m;
    y.a = new double*[y.n];
    for(int i=0;i<y.n;i++)
        y.a[i]= new double[y.m];
    for(int i=0; i<y.n; i++)
        for(int j=0; j<y.m; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            x>>y.a[i][j];
        }
 return x;
}
ostream& operator<<(ostream &x, MT y)
{

    for(int i=0; i<y.n; i++)
      {
        for(int j=0; j<y.m; j++)
            x<<y.a[i][j]<<" ";
        x<<endl;
      }
    return x;
}
MT MT::operator!()
{
    MT K;
    K.n=n;
    K.m=m;
    K.a=a;

    for(int i=0;i<K.n;i++)
        for(int j=0;j<K.m;j++)
        K.a[i][j]=-a[i][j];
    return K;
}
MT MT::operator+(MT A)
{
    MT K;
    if(A.n==n && A.m==m)
    {
        K.n=n;
        K.m=m;
        K.a=new double*[n];
        for(int i=0; i<n; i++)
            K.a[i]=new double[m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                K.a[i][j]=a[i][j]+A.a[i][j];
    }
    else
    {
        K.n=K.m=0;
        K.a= NULL;
    }
    return K;
}
MT MT::operator-(MT A)
{
    MT K;
    if(n==A.n && m==A.m)
    {
        K.n=n;
        K.m=m;
        K.a=new double*[n];
        for(int i=0; i<n; i++)
            K.a[i]=new double[m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                K.a[i][j]=a[i][j]-A.a[i][j];
    }
    else
    {
        K.n=K.m=0;
        K.a= NULL;
    }
    return K;
}
int main()
{
    MT A,B;
    cout<<"Nhap ma tran A : "<<endl; cin>>A;
    cout<<"Nhap ma tran B : "<<endl; cin>>B;
    ofstream f;
    f.open("C:/OOP/TEP/MATRAN.txt", ios::out);
    f<<"Ma tran A"<<endl; f<<A<<endl;
    f<<"Ma tran B"<<endl; f<<B<<endl;
    f<<"Doi dau A "<<endl; f<<!A<<endl;
    f<<"Doi dau B "<<endl; f<<!B<<endl;
    f<<"Tong 2 ma tran A va B "<<endl;
    f<<A+B<<endl;
    f<<"Hieu 2 ma tran A va B "<<endl;
    f<<A-B<<endl;
    f.close();
    return 0;
}
