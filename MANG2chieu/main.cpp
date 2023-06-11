#include<bits/stdc++.h>
using namespace std;
template <class T> class matrix;
template <class T> istream& operator>> (istream& x, matrix <T> &y);
template <class T> ostream& operator<< (ostream& x, matrix <T> y);
template <class T> class matrix
{
    T **a;
    int n,m;
public:
    T operator!();
    friend istream& operator>> <>(istream& x, matrix <T> &y);
    friend ostream& operator<< <>(ostream& x, matrix <T> y);
};
template <class T>ostream& operator<<(ostream& x, matrix<T> y)
{
    for(int i=0; i<y.n; i++)
    {
        for(int j=0; j<y.m; j++)
            x<<setw(5)<<y.a[i][j];
        x<<endl;
    }
    return x;
}

template <class T>istream& operator>>(istream& x, matrix<T> &y)
{
    x>>y.n; x>>y.m;
    y.a = new T*[y.n];
    for(int i = 0; i<y.n; i++)
        y.a[i] = new T[y.m];
    for(int i=0; i<y.n; i++)
    for(int j=0; j<y.m; j++)
    {
        cout<<i<<","<<j<<": ";
        x>>y.a[i][j];
    }
    return x;
}
template <class T> T matrix<T>::operator!()
{
    T M = a[0][0];
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
        if(a[i][j]>M) M=a[i][j];
    return M;
}
int main()
{
    matrix<double> 	A;
    matrix<int> 	B;
   cout<<"Nhap ma tran so thuc A: "<<endl;
		cin>>A;
    cout<<"\nNhap ma tran so nguyen B:"<<endl;
		cin>>B;

    //Xuat du lieu ra man hinh
	cout<<"Ma tran A: "<<endl<<A;
	cout<<"Ma tran B: "<<endl<<B<<endl;
	cout<<"MAX cua A: "<<!A<<endl;
	cout<<"MAX cua B: "<<!B<<endl;

	//Xuat du lieu vao tep
	ofstream f("D:/MATTRIX.txt",ios::app);
	f<<"Ma tran A: "<<endl<<A;
	f<<"Ma tran B: "<<endl<<B<<endl;
	f<<"MAX cua A: "<<!A<<endl;
	f<<"MAX cua B: "<<!B<<endl;
    f.close();
    return 0;
}
