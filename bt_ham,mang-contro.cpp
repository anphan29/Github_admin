#include<iostream>
#include<math.h>
#include <string>
using namespace std;
//Viết hàm tìm xn
double Pow(double x, int n) {
	double s = 1;
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		for (int i = 0; i < abs(n); i++) {
			s = s * 1 / x;
		}
		return  s;
	}
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			s = s * x;
		}
		return s;
	}
}
//Viết hàm tìm N!
double GiaiThua(int n) {
	int s = 1;
	while (n > 1) s *= n--;
	return s;
}
//Viết hàm tìm số Fibonacci tại t
int Finbonacci(int t) {
	if (t < 2) {
		switch (t) {
		case 0: return 0;
		case 1: return 1;
		}
	}
	else {
		int a = 0;
		int b = 1;
		int temp;
		int dem = 2;
		do {
			temp = a + b;
			a = b;
			b = temp;
			dem++;
		} while (!(dem == t));
		return temp;
	}
}
//Viết hàm tìm số nghiệm và giá trị các nghiệm của phương trình bậc 2
int FindRoot(double a, double b, double c, double* x1, double* x2) {
	double d = b * b - 4 * a * c;
	if (d < 0) {
		return 0;
	}
	a *= 2;
	if (d == 0) {
		*x1 = *x2 = -b / a;
		return 1;
	}
	d = sqrt(d);
	*x1 = (-b + d) / a;
	*x2 = (-b - d) / a;
	return 2;
}
//Viết hàm tính oK và oF từ oC
void Tempurature(double C, double* K, double* F) {
	*K = C + 273.5;
	*F = C * 1.8 + 32;
}
//Viết hàm in mảng số nguyên có n phần tử
template <class T>
void Print(T* A, int n) {
	for (T* p = A; p - A < n; p++) {
		cout << *p << "\n";
	}
	cout << endl;
}
//Viết hàm tính tổng của mảng các số nguyên có n phần tử
int sum(int* A, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += *A++;
	}
	return s;
}
//Viết hàm tính trung bình cộng của mảng các số nguyên có n phần tử
double Average(int* A, int n) {
	return (double)sum(A, n) / n;
}
//Viết hàm tìm giá trị của đa thức bậc n tại x (hệ số của đa thức là một mảng số thực)
double Calc(double* A, int n, double x) {
	double* p = A + n;
	double f = *p;
	while (p != A) {
		f = f * x + *(--p);
	}
	return f;
}
//Viết hàm đổi xâu ký tự sang số
double ToNumber(char* s) {
	long long a = 0, b = 0;
	for (int i = 0; char c = s[i]; i++) {
		if (c == '.') {
			b = 1; continue; // skip
		}
		if (b) b *= 10;
		a = a * 10 + (c - '0');
	}
	return (b > 1 ? (double)a / b : a);
}
//Viết hàm chuẩn hóa họ tên tiếng Việt
char* CorrectVietName(char* s) {
	char spev = ' ';
	int k = 0;
	char* q = s;
	for (char* p = s; char c = *p; p++) {
		if (spev == ' ') {
			if (c == ' ') continue;
			else {
				if (('a' <= c) && (c <= 'z')) c -= 32;
			}
		}
		else {
			if (('A' <= c) && (c <= 'Z')) { c += 32; }
		}
		*q++ = spev = c;
	}
	if (spev == ' ') --q;
	*q = 0;
	return s;
}
//Viết hàm tạo mảng n phần tử từ mảng số nguyên
template <class T>
T* CreateArray(int n, const T* src) {
	T* v = new T[n];
	for (int i = 0; i < n; i++) v[i] = src[i];
	return v;
}
//Viết hàm cho dãy n số Fibonacci đầu tiên
int* Fibonecci(int f) {
	int* j = new int[f];
	j[0] = 1;
	j[1] = 2;
	for (int i = 2; i < f; i++) {
		j[i] = j[i - 1] + j[i - 2];
	}
	return j;
}
//Viết hàm tạo xâu mới chuyển các chữ cái thường thành chữ cái viết hoa từ xâu đầu vào
char* ToUpper(const char* s) {
	int n = strlen(s);
	char* V = new char[n + 1];
	for (int i = 0; char c = s[i]; i++) {
		if ((c >= 'a') && (c <= 'z')) {
			c -= 32;
		}
		V[i] = c;
	}
	V[n] = 0;
	return V;
}
//Viết hàm chuyển đổi số nguyên thành xâu ký tự nhị phân
char* Dec2Bin(int x) {
	char* v = new char[sizeof(int) * 8];
	int i = 0;
	do {
		v[i++] = (x & 1) | 0x30;
		x >>= 1;
	} while (x);
	char* s = new char[i + 1];
	char* p = s;
	while (i) {
		*p++ = v[--i];
	};
	*p = 0;
	delete[]v;
	return s;
}
//Viết hàm tìm tần suất của các ký tự trong xâu
void count(char* s) {
	int t[125] = { 0 };
	for (int i = 0; char c = s[i]; i++) {
		t[(int)c]++;
	}
	for (int a = 65; a <= 90; a++) {
		cout << (char)a<<" " << t[a] << "\t";
	}
	cout << endl;
	for (int b = 97; b <= 122; b++) {
		cout << (char)b << " " << t[b] << "\t";
	}
}
//nhapmang
void nhapmang(int* A, int n) {
	for (int i = 0; i < n; i++) {
		cin >> *A++;
	}
}
int main() {
	int chon;
	cout << "chon bai muon xem:";
	cin >> chon;
	switch (chon) {
	case 1:
	{
		cout << "nhap co so x:";
		double  x;
		cin >> x;
		cout << "\nnhap so mu n:";
		int n;
		cin >> n;
		cout << "\n" << Pow(x, n);
		break;
	}
	case 2:
	{
		cout << "nhap n:";
		int i;
		cin >> i;
		cout << "N! = ";
		cout << GiaiThua(i);
		break;
	}
	case 3:
	{
		cout << "nhap t:";
		int t;
		cin >> t;
		cout << "so finbonacci tai " << t << " la: " << Finbonacci(t);
		break;
	}
	case 4:
	{
		double x1, x2;
		double a, b, c;
		cout << "he so a,b,c lan luot la:";
		cin >> a>> b>> c;
		int so_nghiem = FindRoot(a,b,c, &x1, &x2);
		switch (so_nghiem) {
		case 1: cout <<"so nghiem:"<<so_nghiem <<"\nco gia tri la:" << x1 << endl; break;
		case 2: cout << "so nghiem:" << so_nghiem << "\nco gia tri la:" <<"X1 =" << x1 <<"\tX2 =" << x2 << endl; break;
		default:
			cout << "vo nghiem "; break;
		};
		break;
	}
	case 5: 
	{
		double K, F;
		double C;
		cout << "Nhap nhiet do C: ";
		cin >> C;
		Tempurature(C, &K, &F);
		cout << "= " << K << " oK = " << F << " oF";
		break;
	}
	case 6:
	{
		int n;
		cout << "nhap so phan tu:";
		cin >> n;
		cout << "nhap:";
		double* a = new double[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		};
		cout << "in";
		Print(a, n);
		delete a;
		break;
	}
	case 7:
	{
		int n;
		cout << "nhap n:";
		cin >> n;
		int* A = new int[n];
		cout << "nhap mang:";
		nhapmang(A, n);
		Print(A, n);
		cout << '\n' << sum(A, n) << endl;

	}
		break;
	case 8:
	{
		int n;
		cout << "nhap n:";
		cin >> n;
		int* A = new int[n];
		cout << "nhap mang:";
		nhapmang(A, n);
		cout << Average(A, n);
	}
		break;
	case 9:
	{
		cout << "nhap bac cua da thuc: ";
		int N;
		cin >> N;
		cout << "nhap he so cua da thuc: ";
		double* p = new double[N + 1];
		for (int i = 0; i <= N; i++) {
			cin >> p[i];
		}
		cout << "nhap x:";
		int x;
		cin >> x;
		cout << "gia tri cua da thuc tai " << x << " la : " << Calc(p, N, x);
		break;
	}
	case 10:
	{
		int  n;
		cout << "nhap n: ";
		cin >> n;
		cout << "nhap xau: ";
		char* x = new char[n];
		cin >> x;
		cout << "in so:" << endl << ToNumber(x)<< endl;
	}
		break;
	case 11:
	{
		cout << "nhap ten";
		char s[50];
		for (int i = 1; i < 100; i++) {
			cin >> s[i];
		}
		cout << "|" << CorrectVietName(s) << "|";
		break;
	}
	case 13:
	{
		cout << "nhap n:";
		int  f;
		cin >> f;
		cout << "day n so finbonacci dau tien :";
		int* j = Fibonecci(f);
		Print(j, f);
		delete[] j;
		break;
	}
	case 14:
	{
		int  n;
		cout << "nhap n: ";
		cin >> n;
		cout << "nhap mang: ";
		int* v = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		};
		cout << "in mang:" << endl;
		Print(v, n);
		delete[] v;
		break;
	}
	case 15:
	{
		int  n;
		cout << "nhap n: ";
		cin >> n;
		cout << "nhap mang: ";
		char* x = new char[n];
		cin >> x;
		cout << "in mang:" << endl << ToUpper(x) << endl;
		break;
	}
	case 16:
	{
		int x;
		cout << "nhap x:";
		cin >> x;
		cout << "so he thap phan sang xau nhi phan la:";
		cout << Dec2Bin(x) << "\n";
	}
	break;
	case 17:
	{
		cout << "nhap so phan tu cua mang: ";
		int n;
		cin >> n;
		char* s = new char[n];
		cout << "nhap mang: ";
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		count(s);
		delete[] s;
	}
	break;
	}

}
	