#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> uniqueNumbers; // S? d?ng set ð? lýu tr? các giá tr? duy nh?t

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int num;
            cin >> num;
            uniqueNumbers.insert(num);
        }
    }

    if (!uniqueNumbers.empty()) {
        for (int num : uniqueNumbers) {
            cout << num << " ";
        }
    } else {
        cout << "NOT FOUND";
    }

    cout << endl;

    return 0;
}
