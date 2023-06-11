#include <iostream>

using namespace std;

class mang1chieu{
 private:
     int *a;
     int n;
 public:
    mang1chieu(int n);
    ~mang1chieu();
    void xuat();
    void nhap();
};

mang1chieu::mang1chieu(int n){
    this->n=n;
    a= new int[n];
}
mang1chieu::~mang1chieu(){
    delete []a;
    a=NULL;

}
void mang1chieu::nhap(){
	if(n==0){
		cout<<"Nhap n = "; cin>>n;
		a = new int[n];
		for(int i=0;i<n;i++){
			cout<<"\ta["<<i<<"]= ";
			cin>>a[i];
		}
	}
	else{
		for(int i=0;i<n;i++){
			cout<<"\ta["<<i<<"]= ";
			cin>>a[i];
		}
	}
}
void mang1chieu::xuat(){
    for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<endl;
}
int main()
{
    mang1chieu m(5);
    m.nhap();
    m.xuat();
    return 0;
}
