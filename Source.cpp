


// ÄÇ 1 íîìåð 2
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string.h>
using namespace std;

//int main() {
//    int a = 0;
//    int b = 0;
//    cout << "Enter numbers: " << endl;
//    cin >> a >> b;
//    cout << "Sum:" << a + b << endl;
//    cout << "Dif:" << a - b << << b - a << endl;
//    cout << "Multiply:" << a * b << endl;
//    cout << "Del:" << endl;
//    if (a != 0) {
//        cout << b / a << endl;
//    }
//    else {
//        if (b != 0) {
//            cout << a / b << endl;
//        }
//        else {
//            cout << "Error" << endl;
//        }
//
//    }
//    return 0;
//}


//äç 1 íîìåð 3
//int main() {
//	int b = 0;
//	int c = 0;
//	cout << "Numbers:" << endl;
//	cin >> b;
//	cin >> c;
//	if (b != 0) {
//		cout << float(-c) / b << endl;
//	}
//	else {
//		if (c != 0) {
//			cout << "Error!" << endl;
//		}
//		else cout << 0 << endl;
//	}
//	return 0;
//}

//äç 1 íîìåð 4
//int main() {
//	int a, b, c, d;
//	cout << "Numbers:" << endl;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	d = sqrt(b * b - 4 * a * c);
//	cout << "Roots:" << endl;
//	if (a != 0){
//		cout << float(-b + d)/(2*a) << endl; 
//		cout << float(-b - d) / (2 * a) << endl;
//	}
//	else {
//		if (b != 0) {
//			cout << float(-c) / b << endl;
//		}
//		else {
//			if (c != 0){
//				cout << "Error!" << endl;
//			}
//
//		}
//	}
//	
//}

// äç 1 íîìåð 5
//int main() {
//	setlocale(0, "");
//	bool curt, lamp, day;
//	cout << "Ëàìïà ãîðèò? (1,0)" << endl;
//	cin >> lamp;
//	cout << "Øòîðû îòêðûòû? (1,0)" << endl;
//	cin >> curt;
//	cout << "Äåíü èëè Íî÷ü? (1,0)" << endl;
//	cin >> day;
//	if (lamp == 1){
//		cout << "Â êîìíàòå ñâåòëî" << endl;
//		return 0;
//	}
//	if ((curt == 1) && (day == 1)){
//		cout << "Â êîìíàòå ñâåòëî" << endl;
//		return 0;
//	}else{ cout << "Â êîìíàòå òåìíî" << endl; }
//		
//	return 0;
//}


//äç 2 íîìåð 1
//Êîíóñ
//int main() {
//	setlocale(0, "");
//	int R, r,h,l;
//	cout << "Ââåäèòå áîë. ðàäèóñ:" << endl;
//	cin >> R;
//	cout << "Ââåäèòå ìàë. ðàäèóñ:" << endl;
//	cin >> r;
//	cout << "Ââåäèòå âûñîòó:" << endl;
//	cin >> h;
//	cout << "Ââåäèòå îáðàçóþùóþ:" << endl;
//	cin >> l;
//	cout << "V = " << (1 / 3 * M_PI * h * (R * R + R * r + r * r)) << endl;
//	cout << "S = " << (M_PI * (R * R + (R + r) * l + r * r)) << endl;
//}

//äç 2 íîìåð 2
//int main() {
//	double a = 10, x = 0.2;
//	if ((abs(x) < 1) && (abs(x) != 0)) {
//		cout << a * log(abs(x)) << endl;
//		return 1;
//	}
//	if ((a - pow(x, 2) >= 0) && (abs(x) >= 1)) {
//		cout << sqrt(a - pow(x, 2)) << endl;
//		return 2;
//	}
//	return 0;
//}

//äç 2 íîìåð 3
//void f(double b, double y, double x) {
//	if ((b - y > 0) && (b - x >= 0)) {
//		cout << log(b - y) * sqrt(b - x) << endl;
//	}
//	else {
//		cout << "Error" << endl;
//	}
//}
//int main() {
//	float b, y, x;
//	cout << "Enter b, y, x:" << endl;
//	cin >> b >> y >> x;
//	f(b, y, x);
//	return 0;
//}

//äç 2 íîìåð 4
//void main() {
//	setlocale(0, "");
//	int N,i;
//	cout << "Ââåäèòå N:" << endl;
//	cin >> N;
//	for (i = N; i <= N+9; i++) {
//		cout << i << endl;
//	}
//}

//äç 2 íîìåð 5
//void main() {
//	setlocale(0, "");
//	int x = -4;
//	float i;
//	for (i = x; i <= 4; i += 0.5) {
//		if (i != 1){ 
//			cout << (pow(i, 2) - 2*i + 2) / (i - 1) << endl; 
//		}
//	}
//}

//äç 3 íîìåð 1
// äëÿ 34 2 5 îòâåò ïðèìåðíî 0.601116 
//void main() {
//	setlocale(0, "");
//	float s, p, n, r;
//	cout << "ââåäèòå s, p, n:" << endl;
//	cin >> s >> p >> n;
//	r = p / 100;
//	if (12 * (pow(1 + r, n) - 1) != 0){
//		cout << "m = " << (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) << endl;
//	}else{ 
//		cout << "error" << endl; 
//	}
//	
//}

//äç 3 íîìåð 2

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


HW 4 № 1
#include <fstream>
int main() {
	string a;
	ofstream f("gg.txt");
	for (int i = 0; i < 10; i++) {
		cin >> a;
		f << a << " ";

	}
	f.close();
	ifstream g("gg.txt");
	char t;
	double s = 0;
	string m = "";
	string p = "";
	bool flag = 0;
	if (g.is_open()) {
		while (g.get(t)) {
			if (isdigit(t) or (t == '-') or (t == '+') or (t == '.')) {
				p += t;
			}
			else {
				m += p;
				m += " ";
				if (p.find('-') == 0){
					flag = 1;
					p.erase(p.find('-'), 1);
					
				}
				while (p.find('+') == 0) {
					p.erase(p.find( '+'), 1);
				}
				if (flag) {
					s -= stod(p);
					flag = 0;
					p = "";
				}
				else {
					s += stod(p);
					flag = 0;
					p = "";
				}
			}
			}
		}
	cout << m << endl;
	cout << s;
	return 0;
}



 HW 4 № 2
int f(int a) {
	if (a < 0) {
		return -1;
	}
	if (a == 0) {
		return 0;
	}
	return 1;

}
int main() {
	int a;
	setlocale(0, "");
	cout << "Введите число: " << endl;
	cin >> a;
	cout << f(a);
}


 HW 4 № 3
 
int kr(double a) {
	double s;
	s = pow(a, 2) * 3.14;
	return s;
}
int pr(double a, double b) {
	double s;
	s = a * b;
	return s;
}
int tri(double a, double b, double c) {
	double s, p;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}

int main() {
	setlocale(0, "");
	int figure;
	cout << "Какая фигура дана? \n\n[1]треугольник\n\n[2]круг\n\n[3]прямоугольник\n" << endl;
	cin >> figure;
	switch (figure) {
	case 1:
		double a, b, c;
		cout << "Введите стороны треугольника: " << endl;
		cin >> a >> b >> c;
		cout << "Площадь треугольника = " << tri(a, b, c) << endl;
		break;
	case 2:
		double r;
		cout << "Введите радиус круга: " << endl;
		cin >> r;
		cout << "Площадь круга = " << kr(r) << endl;
		break;
	case 3:
		double m, n;
		cout << "Введите стороны прямоугольника: " << endl;
		cin >> m >> n;
		cout << "Площадь прямоугольника = " << pr(m, n) << endl;
		break;
	}
	return 0;
}

3.1

int main() {
	setlocale(0, "");
	double m, s, r, p, n;
	cin >> s >> p >> n;
	r = p / 100;
	if ((n <= 0) or (s <= 0) or ((1 + r) < 0)) {
		cout << "Некорректные значения!";
		return 2;
	}
	if (r == 0) {
		m = s / (12 * n);
		cout << m;
		return 0;
	}
	if ((pow((1 + r), n)) != 0){
		m = (s * r * pow((1 + r), n)) / (12 * (pow(1 + r, n) - 1));
		cout << m;
		return -1;
	
	}
	return 3;
}

// SINUSOIDA
#include <cmath>
#include <Windows.h>
int main()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        GetConsoleScreenBufferInfo(handle, &consoleInfo);
        int height = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
        int width = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;

        auto GetX = [&](double x) { return int(x / 7 * width); };
        auto GetY = [&](double y) { return int((-y / 1 + 1) * (height / 2)); };

        _COORD c;
        for (double i = 0; i < 7; i += 0.02)
        {
            c.X = GetX(i);
            c.Y = GetY(sin(i));
            SetConsoleCursorPosition(handle, c);
            cout << '*';
        }

        cin.get();
        CloseHandle(handle);

        return 0;
    }
