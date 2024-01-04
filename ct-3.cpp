#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    set<int> uniqueNumbers;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            uniqueNumbers.insert(A[i][j]);
        }
    }

    if (uniqueNumbers.empty()) {
        cout << "NOT FOUND";
    } else {
        for (int number : uniqueNumbers) {
            cout << number << " ";
        }
    }

    return 0;
}

