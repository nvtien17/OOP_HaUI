#include <iostream>

using namespace std;
class HCN
{
    float d,r;
public:
    void nhap();
    void ve();
    float Dientich();
    float Chuvi();
};
void HCN::nhap()
{
    do{
            cout<<" chieu dai d = ";cin>>d;
            cout<<" chieu rong r = ";cin>>r;
    }while(d<r);
}
void HCN::ve()
{
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<r;j++)
            cout<<"*";
        cout<<endl;
    }
}
float HCN::Dientich()
{
    return d*r;
}
float HCN::Chuvi()
{
    return (d+r)*2;
}
int main()
{   HCN a;
    a.nhap();
    cout<<"Hinh ve : "<<endl;
    a.ve();
    cout<<"Dien tich hinh chu nhat la : "<<a.Dientich()<<endl;
    cout<<"Chu vi hinh chu nhat la : "<<a.Chuvi()<<endl;
    return 0;
}
