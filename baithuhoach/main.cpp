#include <bits/stdc++.h>

using namespace std;

class HANG
{
    char MaH[20];
    char TenH[30];
    float DG;
    int SL;
    int Nam;
public:
    HANG();
    HANG(char *x, char *y, float z, int t, int w);
    friend istream& operator>>(istream &x, HANG &y);
    friend ostream& operator<<(ostream &x, HANG y);
    friend check(HANG A, int n);

};
HANG::HANG()
{
    strcpy(MaH,"");
    strcpy(TenH,"");
    DG=0;
    SL=0;
    Nam=0;
}
HANG::HANG(char *x, char *y, float z, int t, int w)
{
    strcpy(MaH,x);
    strcpy(TenH,y);
    DG=z;
    SL=t;
    Nam=w;
}
istream& operator>>(istream &x, HANG &y)
{
    cout<<"Ma Hang : "; fflush(stdin); x.getline(y.MaH,20);
    cout<<"Ten hang : "; fflush(stdin); x.getline(y.TenH,30);
    x.ignore();
    cout<<"DG : ";x>>y.DG;
    cout<<"SL : "; x>>y.SL;
    cout<<"Nam : "; x>>y.Nam;
    return x;
}
ostream& operator<<(ostream &x, HANG y)
{
    x<<setw(10)<<y.MaH<<setw(10)<<y.TenH<<setw(10)<<DG<<setw(10)<<SL<<setw(10)<<Nam<<endl;
    return x;
}
int check(HANG *A,int n)
{
    for(int i=0;i<n;i++)
        if(strcmp(A.TenH,"IPHONE 12")==0)
            return 1;
        return 0;
}
int main()
{
    int n;
    HANG *A;
    cout<<"Nhap so mat hang n = ";cin>>n;
    A = (HANG*) malloc (n*sizeof(HANG));
    for(int i=0;i<n;i++)
        cin>>A[i];
    ofstream f;
    f.open("C:/OOP/TEP/HANGNHAP.DAT", ios::out);
    for(int i=0 ;i<n;i++)
        f<<A[i];
    f.close();
    if(check(A,n)==1)
        cout<<"Co IPHONE 12 "<<endl;
    else cout<<"Khong co IPHONE 12 "<<endl;
    return 0;
}
