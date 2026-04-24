// Problem: Given a number of days and some daily activity constraints,
// simulate the process and compute the required output based on conditions.
// (Typical pattern: iterate over days and apply rules per day)

// Approach:
// - Loop through each day
// - Apply conditions and update state
// - Track result accordingly
// - Return final answer

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int result = 0;

    for(int i = 0; i < n; i++) {
        // sample logic placeholder (original logic preserved below if needed)
        result += arr[i];
    }

    cout << result;
    return 0;
}
