#include <iostream>

using namespace std;
class ARRAY
{
    int *VALUE;
    int n;
public:
    ARRAY();
    ARRAY(int x);
    ~ARRAY();
    void nhap();
    void xuat();
};
ARRAY::ARRAY()
{
    n = 0;
    VALUE = NULL;
}
ARRAY::ARRAY(int x)
{
    n=x;
    VALUE= new int[n];
    for(int i=0;i<n;i++)
        VALUE[i]=0;
}
ARRAY::~ARRAY()
{
    n=0;
    delete [] VALUE;
}
void ARRAY::nhap()
{
    cout<<"Nhap kich thuoc mang : n = "; cin>>n;
    VALUE = new int [n];
    for(int i = 0; i < n; i++)
    {
        cout<<"VALUE["<<i<<"] = "; cin>>VALUE[i];
    }
}

void ARRAY::xuat()
{
    for(int i = 0; i < n; i++)
        cout<<" "<<VALUE[i];
        cout<<endl;
}

int main()
{
    ARRAY a(3);
    cout<<"Mang vua tao : ";
    a.xuat();
    cout<<"Tao mang moi : ";
    a.nhap();
    cout<<"Mang vua tao moi : ";
    a.xuat();
}

