#include <bits/stdc++.h>

using namespace std;

class PERSON
{
protected:
    char Hoten[20];
    char NS[10];
    char Que[30];
};
class KYSU : public PERSON
{
    char Nganh[20];
    int NamTN;
public:
    void nhap();
    void xuat();
    friend void MaxTN(KYSU *a, int n);
};
void KYSU::nhap()
{
    cout<<"Ho ten : "; fflush(stdin); gets(Hoten);
    cout<<"Ngay sinh : "; fflush(stdin);gets(NS);
    cout<<"Que quan : "; fflush(stdin); gets(Que);
    cout<<"Nganh : "; fflush(stdin); gets(Nganh);
    cout<<"Nam tot nghiep : "; cin>>NamTN;
}
void KYSU::xuat()
{
     cout<<setw(20)<<left<<Hoten<<setw(15)<<NS<<
     setw(20)<<Que<<setw(10)<<Nganh<<setw(10)<<NamTN<<endl;
}
void MaxTN(KYSU *a, int n)
{
    int MAX = a[0].NamTN;
    for(int i = 0; i < n; i++)
        if(a[i].NamTN > MAX)
            MAX = a[i].NamTN;
    cout<<"Thong tin ky su tot nghiep gan day nhat: "<<endl<<endl;
    cout<<setw(20)<<left<<"Ho va ten"<<setw(15)<<"Ngay sinh"<<
    setw(20)<<"Que quan"<<setw(10)<<"Nganh hoc"<<setw(10)<<"Nam TN"<<endl;
    for(int i = 0; i < n; i++)
        if(a[i].NamTN == MAX)
            a[i].xuat();
}
int main()
{
    KYSU *a;
    int n;
    cout<<"Nhap so ky su : n = ";cin>>n;
    a=new KYSU[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    cout<<"Thong tin cac ky su vua nhap :"<<endl;
    cout<<setw(20)<<left<<"Ho va ten"<<setw(15)<<"Ngay sinh"<<
    setw(20)<<"Que quan"<<setw(10)<<"Nganh hoc"<<setw(10)<<"Nam TN"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    MaxTN(a,n);
    return 0;
}
