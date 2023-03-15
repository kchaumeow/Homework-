#include <iostream>
#include <cstdlib>
#include <cmath>
#include <Windows.h>
#include <string.h>
using namespace std;
HW 4 № 1
#include <fstream>
int parser() {
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

// SINUSOIDA

int sinusoida()
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
