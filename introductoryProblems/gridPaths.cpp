#include <bits/stdc++.h>

using namespace std;


string s;

void Input() {
    cin >> s;
}

int result = 0, visited[9][9];

void Backtrack(int u, int v, int k) {
    if (visited[u][v]) return;

    if (k == 48 && u == 7 && v == 1) result++;

    if (k == 48 || (u == 7 && v == 1)) return;

    if (visited[u - 1][v] && visited[u + 1][v] && !visited[u][v + 1] && !visited[u][v - 1]) return;

    if (!visited[u - 1][v] && !visited[u + 1][v] && visited[u][v + 1] && visited[u][v - 1]) return;

    visited[u][v] = 1;

    if (s[k] == 'U' or s[k] == '?') Backtrack(u - 1, v, k + 1);

    if (s[k] == 'D' or s[k] == '?') Backtrack(u + 1, v, k + 1);

    if (s[k] == 'L' or s[k] == '?') Backtrack(u, v - 1, k + 1);

    if (s[k] == 'R' or s[k] == '?') Backtrack(u, v + 1, k + 1);

    visited[u][v] = 0;
}

void Process() {
    memset(visited, 0, sizeof visited);

    for (int i = 0; i < 9; i++) visited[i][0] = visited[i][8] = visited[0][i] = visited[8][i] = 1;

    Backtrack(1, 1, 0);

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
