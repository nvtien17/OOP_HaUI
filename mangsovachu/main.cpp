#include <bits/stdc++.h>

using namespace std;

class HANG
{
    char MaH[10];
    char TenH[20];
    float DG;
    float TL;
    char Mau[10];
public:
    friend istream& operator>>(istream& x, HANG &y);
    friend ostream& operator<<(ostream& x, HANG y);
};
istream& operator>>(istream& x, HANG &y)
{
    fflush(stdin); x.getline(y.MaH,10);
    fflush(stdin); x.getline(y.TenH,20);
    x>>y.DG;
    x>>y.TL; x.ignore();
    x.getline(y.Mau,10);
    return x;
}
ostream& operator<<(ostream& x, HANG y)
{
    x<<setw(10)<<y.MaH<<setw(10)<<y.TenH<<setw(10)<<y.DG
    <<setw(10)<<y.TL<<setw(10)<<y.Mau<<endl;
}
int main()
{
    HANG *a; int n;
    cout<<"n = "; cin>>n;
    a=new HANG[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    fstream fout;
    fout.open("C:/OOP/TEP/Hang.txt", ios::out);
    for(int i=0;i,n;i++)
        fout<<a[i];
    fout.close();
    return 0;
}
