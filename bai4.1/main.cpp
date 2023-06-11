#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char Masv[20];
    char Hoten[30];
    float Diemtoan;
    float Diemly;
    float Diemhoa;
public:
    void nhap();
    void xuat();
    friend void sapxep(SINHVIEN *a, int n);
    void chen(SINHVIEN *a , int n);
};
void SINHVIEN::nhap()
{
    cout<<"Ma sv : ";fflush(stdin);gets(Masv);
    cout<<"Ho ten sv : ";fflush(stdin);gets(Hoten);
    cout<<"Diem toan : ";cin>>Diemtoan;
    cout<<"Diem ly : ";cin>>Diemly;
    cout<<"Diem hoa : ";cin>>Diemhoa;
}

void SINHVIEN::xuat()
{
    cout<<setw(10)<<Masv<<setw(20)<<Hoten<<setw(10)
    <<Diemtoan<<setw(10)<<Diemly<<setw(10)<<
    Diemhoa<<setw(10)<<Diemtoan+Diemly+Diemhoa<<endl;
}
void sapxep(SINHVIEN *a, int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i].Diemtoan+a[i].Diemly+a[i].Diemhoa
           >a[j].Diemtoan+a[j].Diemly+a[j].Diemhoa)
            swap(a[i],a[j]);
    }
}
void chen(SINHVIEN *a , int &n, int c){
	cout<<"Nhap vi can chen c = "; cin>>c;
    cout<<"Nhap thong tin sinh vien can chen: "<<endl;
    SINHVIEN sv;
	sv.nhap();
	n++;
	a = (SINHVIEN*) realloc(a, (n+1)*sizeof(int));
    for(int i = n - 1; i > c-1; i--)
        a[i] = a[i-1];
    a[c-1] = sv;
}

int main()
{
    SINHVIEN *a;
    int n;
    int c;
    cout<<"Nhap so sinh vien : ";cin>>n;
    a= new SINHVIEN[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap thong tin sinh vien thu "<<i+1<<": "<<endl;
        a[i].nhap();
    }
    sapxep(a, n);
    cout<<setw(10)<<"Ma SV"<<setw(20)<<"Ho ten"<<setw(10)<<"Diem Toan"<<setw(10)
    <<"Diem Ly"<<setw(10)<<"Diem Hoa"<<setw(10)<<"Tong diem"<<endl;
     for(int i = 0; i < n; i++)
        a[i].xuat();
    chen(a,n,c);
    cout<<setw(10)<<"Ma SV"<<setw(20)<<"Ho ten"<<setw(10)<<"Diem Toan"<<setw(10)
    <<"Diem Ly"<<setw(10)<<"Diem Hoa"<<setw(10)<<"Tong diem"<<endl;
     for(int i = 0; i < n; i++)
        a[i].xuat();
    return 0;
}
