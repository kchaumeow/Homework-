#include <iostream>
using namespace std;
int county = 0;
//4
void stupidhorse(int N, int M, int x, int y){
    if (x == N && y == M){
        county++;
        return;
    }
    if (x > N || y > N) return;
    stupidhorse(N, M, x + 2, y + 1);
    stupidhorse(N, M, x + 1, y + 2);
}
int main(){
    int N, M;
    cin >> N >> M;
    stupidhorse(N, M, 1, 1);
    cout << county;
    return EXIT_SUCCESS;
}
//2
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    long long n, m, c, count = 0;
    cin >> n >> m;
    if (n > 0 && m > 0) {
        while (n != 0 && m != 0) {
            if (n > m) {
                count += n / m;
                n = n % m;
            }
            else {
                count += m / n;
                m = m % n;
            }
        }
        cout << count;
    }
    return EXIT_SUCCESS;
}
//3
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long* a = new long long[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    int x = -1, xn;
    bool cond = false;
    while (!cond){
        x++;
        xn = x;

        cond = true;
        for (int i = 0; i < n; i++){
            xn = xn * xn - a[i];
            if (xn < 0) cond = false;
        }
    }
    cout << x;
    return EXIT_SUCCESS;
}