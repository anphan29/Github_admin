#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	/****bai1**** {
		int n ;
		cin >> n;
		int t = 1;
		for (int i = 2; i <=n; i++) {
			t = t * i;
		}
		cout << "gia tri N!" << t;
	}
	/****bai2****{
		double n ;
		double x ;
		cin >> x >> n;
		double y = 1 ;
		for (int i=0; i < n; i++) {
			y = y * x;
		}
		cout << y;

	}
	/****bai3**** {
		int n ;
		cin >> n;
		double s = 1;
		for (int i = 1; i <=n; i++) {
			s = s + 1.0/(2*i);
		}
		cout << s;
	}
	/****bai4**** {
		int x ;
		cin >> x;
		int n = 0;
		for (int i = 1; i < x; i++) {
			if (!(x % i)) { n++; }
		}
		cout << "x " << (n >> 1 ? "khong " : "") << "la so nguyen to";
	}
	/****bai5**** {
		int k ;
		cin >> k;
		int n ;
		cin >> n;
		double t = 1;
		int m1 = 1;
		int m2 = 1;
		for (int i = 2; i <= n; i++) {
			t = t * i;
			if (i <= k) {
				m1 = m1 * i;
			}
			if (i <= (n - k)) {
				m2 = m2 * i;
			}
		}
		double c = t / (m1 * m2);
		cout << c;
	}
	/****bai6**** {
		int a;
		cin >> a;
		int b = 8;
		int c = 1 << (b - 1);
		cout << a << "(he thap phan) = ";
			for (int i = 0; i < b; i++) {
				cout << ((a & c) ? "1" : "0");
				c = c >> 1;
		}
		cout << "(bit)";
	}
	/****bai7**** {
		int a; cin >> a;
		int min = a;
		int max = a;
		int i = -1;
		do {
			int b; cin >> b;
			if (b == 0) break;
			if (min > b) min = b;
			if (max < b) max = b;
		} while (1);
		cout << "so nho nhat " << min << endl;
		cout << "so lon nhat " << max;
	}
	/****bai8****{
		int b;
		int chan = 0;
		int le = 0;
		int tam = 0;
		while (1) {
			cin >> b;
			if (b == 0) break;
			if (b % 2 == 0) le++;
			else chan++;
			if (b % 8 == 0) tam++;
		}
		cout << "so le la\n" << le;
		cout << "\nso chan la\n" << chan;
		cout << "\nso chia het cho 8\n" << tam;
	}
	/****bai9**** {
		int n;    cin >> n;
		int a = 0; cout << a << " ";
		int b = 1; cout << b << " ";
		int c;
		do {
			c = a + b; cout << c << " ";
			a = b;
			b = c;
		} while (c < n);
	}
	/****bai10**** {
		int n;    cin >> n;
		int a = 0;
		int b = 1;
		int c;
		do {
			c = a + b;
			a = b;
			b = c;
		} while (c < n);
		cout << n << ((c == n) ? "" : " khong") << " nam trong day fibonacci";
		}
	/****bai11**** {
		int n ;
		cin >> n;
		double a ;
		double b ;
		b = n;
		do {
			a = b;
			b = (a + n / a) / 2;
		}
		while (!(b == a));
		cout << setprecision(8) << fixed << b;
		}
	/****bai12**** {
		 const int n = 4;
    		int a = 0;
    		for (int i = 0; i < n; i++) {
        		int d; cin >> d;
       			a = a * 10 + d;
        		(a << 1) + (a << 3);
    	}
		cout << "can bac 2 cua so nguyen tao boi 4 chu so la " << sqrt(a);
	}
	/****bai13****{
		int m; cin >> m;
		int n; cin >> n;
		int a = 1;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << a << " ";
				a++;
			}
			cout << "\n";
	}
	/****bai14**** {
		int a;
		int b;
		int c;
		cin >> a >> b >> c;
		int  can = ((a == b) + (b == c) + (c == a));
		bool vuong = ((a + b == c) || (b + c == a) || (c + a == b));
		cout << "tam giac nay co dang la tam giac";
		if (vuong) cout << " vuong";
		switch (can) {
			case (1): cout << " can"; break;
			case (3): cout << " deu"; break;
			case (0): cout << " thuong"; break;
		}
	}
	/****bai15****/ {
		cout << "ky tu" << "   ma ascii\n";
		for (char a = 'A'; a <= 'Z'; a++) {
				cout << a << "\t" << (int)a << "\n";
		}
		for (char b = 'a'; b <= 'z'; b++) {
				cout << b << "\t" << (int)b << "\n";
		}
		for (int c = 49; c <= 57; c++) {
				cout << (char)c << "\t" << c << "\n";
		}
}
}

