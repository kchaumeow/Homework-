


// �� 1 ����� 2
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


//�� 1 ����� 3
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

//�� 1 ����� 4
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

// �� 1 ����� 5
//int main() {
//	setlocale(0, "");
//	bool curt, lamp, day;
//	cout << "����� �����? (1,0)" << endl;
//	cin >> lamp;
//	cout << "����� �������? (1,0)" << endl;
//	cin >> curt;
//	cout << "���� ��� ����? (1,0)" << endl;
//	cin >> day;
//	if (lamp == 1){
//		cout << "� ������� ������" << endl;
//		return 0;
//	}
//	if ((curt == 1) && (day == 1)){
//		cout << "� ������� ������" << endl;
//		return 0;
//	}else{ cout << "� ������� �����" << endl; }
//		
//	return 0;
//}


//�� 2 ����� 1
//�����
//int main() {
//	setlocale(0, "");
//	int R, r,h,l;
//	cout << "������� ���. ������:" << endl;
//	cin >> R;
//	cout << "������� ���. ������:" << endl;
//	cin >> r;
//	cout << "������� ������:" << endl;
//	cin >> h;
//	cout << "������� ����������:" << endl;
//	cin >> l;
//	cout << "V = " << (1 / 3 * M_PI * h * (R * R + R * r + r * r)) << endl;
//	cout << "S = " << (M_PI * (R * R + (R + r) * l + r * r)) << endl;
//}

//�� 2 ����� 2
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

//�� 2 ����� 3
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

//�� 2 ����� 4
//void main() {
//	setlocale(0, "");
//	int N,i;
//	cout << "������� N:" << endl;
//	cin >> N;
//	for (i = N; i <= N+9; i++) {
//		cout << i << endl;
//	}
//}

//�� 2 ����� 5
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

//�� 3 ����� 1
// ��� 34 2 5 ����� �������� 0.601116 
//void main() {
//	setlocale(0, "");
//	float s, p, n, r;
//	cout << "������� s, p, n:" << endl;
//	cin >> s >> p >> n;
//	r = p / 100;
//	if (12 * (pow(1 + r, n) - 1) != 0){
//		cout << "m = " << (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) << endl;
//	}else{ 
//		cout << "error" << endl; 
//	}
//	
//}

//�� 3 ����� 2
