#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    random_device rd;          // Источник энтропии для начального зерна
    mt19937 gen(rd());        // Генератор псевдослучайных чисел
    uniform_int_distribution<int> dist(1, 9);

int n = 0;
cout << "Enter matrix value: ";
cin >> n;
int m = n;
vector<int> randnums;
 for (int i = 0; i < n*n; ++i) {
        cout << dist(gen) << ' ';
    }

vector<vector<int>> matrix(n, vector<int>(m, 0));
for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
return 0;
}