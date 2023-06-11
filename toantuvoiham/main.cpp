#include <bits/stdc++.h>

using namespace std;
class VECTOR
{
    int *a;
    int n;
public:
    friend istream& operator>>(istream& x, VECTOR &y);
    friend ostream& operator<<(ostream&x, VECTOR y);
};
istream& operator>>(istream& x, VECTOR &y)
{
     x>>y.n;
    y.a=new int[y.n];
    for(int i=0;i<y.n;i++)
        x>>y.a[i];
    return x;
}
ostream& operator<<(ostream&x, VECTOR y)
{
    x<<y.n<<endl;
    for(int i=0;i<y.n;i++)
        x<<y.a[i]<<" ";
    return x;
}
int main()
{
    VECTOR a;
    VECTOR b;
    //nhap du lieu tu ban phim va luu vao file
    /* cin>>a;
    cin>>b;
    ofstream f;
    f.open("C:/OOP/TEP/Vector.txt", ios::out);
    f<<a<<endl;
    f<<b;
    f.close(); */
    //doc du lieu tu tep
    fstream f("C:/OOP/TEP/Vector.txt", ios:: in);
    f>>a;
    f>>b;
    f.close();
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
