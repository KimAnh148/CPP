#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> freq; // S? l?n xu?t hi?n c?a t?ng ph?n t? trong m?ng

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i] % 28]++;
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int complement = (28 - a[i] % 28) % 28; // T?m s? c?n thi?t ð? t?ng chia h?t cho 28
        cnt += freq[complement];
        if (complement == a[i] % 28) {
            // N?u c?n thêm m?t l?n n?a n?u ph?n t? hi?n t?i chia h?t cho 28
            cnt--;
        }
    }

    cout << cnt / 2 << endl; // M?i c?p ðý?c ð?m hai l?n, nên chia cho 2

    return 0;
}

