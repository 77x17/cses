#include <bits/stdc++.h>

using namespace std;


string arr[8];

void Input() {
    for (int i = 0; i < 8; i++) cin >> arr[i];
}

int result = 0;
bool cols[8], topLeft[15], topRight[15];

void Backtrack(int k) {
    if (k == 8) {result++;  return;}

    for (int i = 0; i < 8; i++) {
        if (cols[i] == 0 && topLeft[i + k] == 0 && topRight[i - k + 7] == 0 && arr[i][k] == '.') {
            cols[i] = 1,  topLeft[i + k] = 1,  topRight[i - k + 7] = 1;

            Backtrack(k + 1);

            cols[i] = 0,  topLeft[i + k] = 0,  topRight[i - k + 7] = 0;
        }
    }
}

void Process() {
    memset(cols, 0, sizeof cols);  memset(topLeft, 0, sizeof topLeft);  memset(topRight, 0, sizeof topRight);

    Backtrack(0);

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
