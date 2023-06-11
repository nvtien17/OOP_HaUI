#include <bits/stdc++.h>

using namespace std;
class MATRIX
{
    int m;
    int n;
    int **a;
public:
    void nhap();
    void xuat();
    int MAX();
};
void MATRIX::nhap()
{
    cout<<"Nhap so hang m : ";cin>>m;
    cout<<"Nhap so cot n : ";cin>>n;
    a=new int*[m];
    for(int i=0;i<m;i++)
        a[i]= new int[n];
    for(int i=0;i<m;i++ )
        for(int j=0;j<n;j++)
    cin>>a[i][j];
}
void MATRIX::xuat()
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int MATRIX::MAX()
{
    int M=a[0][0];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        if(a[i][j]>M)
        M=a[i][j];
    return M;
}
int main()
{
    MATRIX A;
    A.nhap();
    A.xuat();
    cout<<"Max = "<<A.MAX()<<endl;
    return 0;
}
