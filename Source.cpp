


// ДЗ 1 номер 2
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


//дз 1 номер 3
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

//дз 1 номер 4
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

// дз 1 номер 5
//int main() {
//	setlocale(0, "");
//	bool curt, lamp, day;
//	cout << "Лампа горит? (1,0)" << endl;
//	cin >> lamp;
//	cout << "Шторы открыты? (1,0)" << endl;
//	cin >> curt;
//	cout << "День или Ночь? (1,0)" << endl;
//	cin >> day;
//	if (lamp == 1){
//		cout << "В комнате светло" << endl;
//		return 0;
//	}
//	if ((curt == 1) && (day == 1)){
//		cout << "В комнате светло" << endl;
//		return 0;
//	}else{ cout << "В комнате темно" << endl; }
//		
//	return 0;
//}


//дз 2 номер 1
//Конус
//int main() {
//	setlocale(0, "");
//	int R, r,h,l;
//	cout << "Введите бол. радиус:" << endl;
//	cin >> R;
//	cout << "Введите мал. радиус:" << endl;
//	cin >> r;
//	cout << "Введите высоту:" << endl;
//	cin >> h;
//	cout << "Введите образующую:" << endl;
//	cin >> l;
//	cout << "V = " << (1 / 3 * M_PI * h * (R * R + R * r + r * r)) << endl;
//	cout << "S = " << (M_PI * (R * R + (R + r) * l + r * r)) << endl;
//}

//дз 2 номер 2
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

//дз 2 номер 3
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

//дз 2 номер 4
//void main() {
//	setlocale(0, "");
//	int N,i;
//	cout << "Введите N:" << endl;
//	cin >> N;
//	for (i = N; i <= N+9; i++) {
//		cout << i << endl;
//	}
//}

//дз 2 номер 5
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

//дз 3 номер 1
// для 34 2 5 ответ примерно 0.601116 
//void main() {
//	setlocale(0, "");
//	float s, p, n, r;
//	cout << "введите s, p, n:" << endl;
//	cin >> s >> p >> n;
//	r = p / 100;
//	if (12 * (pow(1 + r, n) - 1) != 0){
//		cout << "m = " << (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) << endl;
//	}else{ 
//		cout << "error" << endl; 
//	}
//	
//}

//дз 3 номер 2
