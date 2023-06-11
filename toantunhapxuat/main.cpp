#include <bits/stdc++.h>

using namespace std;
class HANG
{
    char MaH[10];
    char TenH[20];
    float DonGia;
public:
    friend istream& operator>>(istream& x, HANG &y);
    friend ostream& operator<<(ostream& x, HANG y);
};
istream& operator>>(istream& x, HANG &y)
{
    fflush(stdin); x.getline(y.MaH, 10);
    fflush(stdin); x.getline(y.TenH,20);
    x>>y.DonGia; x.ignore();
    return x;
}
ostream& operator<<(ostream& x, HANG y)
{
    x<<y.MaH<<endl;
    x<<y.TenH<<endl;
    x<<y.DonGia<<endl;
    return x;
}
int main()
{
    HANG k;
    HANG q;
    cin>>k;
    cin>>q;
    ofstream f;
    f.open("C:/OOP/TEP/Xuatthu.txt", ios::out);
    f<<k;
    f<<q;
    f.close();
    cout<<k<<endl;
    cout<<q<<endl;
    return 0;
}
