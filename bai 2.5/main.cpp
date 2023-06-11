#include <bits/stdc++.h>

using namespace std;
class OTO
{
    char Maoto[20];
    float Giamoi;
    int Namsd;
    float TLKH;
public:
    void nhap();
    void xuat();
};
void OTO::nhap()
{
    cout<<"Ma oto : ";fflush(stdin);cin.getline(Maoto,20);
    cout<<"Gia moi : ";cin>>Giamoi;
    cout<<"Nam su dung : ";cin>>Namsd;
    cout<<"Ti le khau hao / nam : "; cin>>TLKH;
}
void OTO::xuat()
{
    float gtht=Giamoi;
    for(int i=0; i<Namsd; i++)
        gtht=gtht-gtht*TLKH;

    cout<<setw(20)<<Maoto<<setw(20)<<Giamoi<<
    setw(10)<<Namsd<<setw(15)<<TLKH<<setw(15)<<gtht<<endl;
}
int main()
{
    OTO *a;
    int n;
    cout<<" n = ";cin>>n;
    a=new OTO[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    cout<<setw(20)<<"Ma oto"<<setw(20)<<"Gia moi"<<
    setw(10)<<"Nam su dung"<<setw(15)<<"TLKH/nam"<<setw(15)
    <<"Gia tri hien tai"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
    return 0;
}
