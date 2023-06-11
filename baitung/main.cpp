#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		friend ostream& operator << (ostream& out, SinhVien a){
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
			return out;
		}

		friend istream& operator >> (istream& in, SinhVien &a){
			in >> a.ma;
			in.ignore();
			getline(in, a.ten);
			in >> a.lop >> a.email;
			return in;
		}

		friend bool operator < (SinhVien a, SinhVien b){
			if(a.lop != b.lop)
				return a.lop > b.lop;
			return a.ma > b.ma;
		}
};

int main(){
	int n; cin >> n;
	SinhVien a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
       for(int i = 0; i < n; i++) cout << a[i];

	return 0;
}
