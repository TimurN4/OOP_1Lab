#include <iostream>

using namespace std;
int f(int a, int b, int c){
    int height = 0;
    int cnt = 0;
    if(c < 1) {
        return -1;
    }
    if(a < b) {
        if(a < c) {
            return -1;
        }
        while(height + (a - b) > c) {
            cnt += 1;
            height += a - b;
        }
        return cnt + 1;
    } else {
        if(a > c) {
            return 0;
        }
        while(height + a < c) {
            cnt += 1;
            height += a - b;
        }
        return cnt + 1;
    }
}

int main() {
    cout << f(100, 10, 910) << endl;
}