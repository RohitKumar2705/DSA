#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& boards, int k, int mid) {
    int painters = 1;
    long long curr_sum = 0;

    for (int length : boards) {
        if (length > mid) return false;  // single board larger than mid
        if (curr_sum + length > mid) {
            painters++;
            curr_sum = length;
            if (painters > k) return false;
        } else {
            curr_sum += length;
        }
    }
    return true;
}

int paintersPartition(vector<int>& boards, int k) {
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(boards, k, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;
    cout << "Minimum time: " << paintersPartition(boards, k) << endl;
    return 0;
}
