#include <bits/stdc++.h>

using namespace std;


int n;

void Input() {
    cin >> n;
}


vector<int> arr;

void Process() {
    arr.assign(n + 1, 0);  for (int i = 1; i <= n; i++) arr[i] = i;

    for (int i = 1; i < arr.size(); i++) {
        if (i % 2 == 1) arr.push_back(arr[i]);
        else cout << arr[i] << ' ';
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
