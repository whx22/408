#include <stdlib.h>
// brute force algorithm
// time complexity:   O(n^2)
// space complexity:  O(n)
int solution1(int A[], int n, int k) {
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (abs(A[i] - A[j]) == k) {
        ++cnt;
      }
    }
  }
  return cnt;
}

// traveral method 1
// time complexity:   O(n)
// space complexity:  O(n)
int solution2(int A[], int n, int k) {
  int *count = new int[2 * n];
  for (int i = 0; i < 2 * n; ++i) {
    count[i] = 0;
  }
  for (int i = 0; i < n; ++i) {
    ++count[A[i]];
  }
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (A[i] < 2 * n - k) {
      cnt += count[A[i] + k];
    }
    if (k != 0 && A[i] >= k) {
      cnt += count[A[i] - k];
    }
  }
  delete[] count;
  return cnt;
}

// traveral method 2
// time complexity:   O(n)
// space complexity:  O(n)
int solution3(int A[], int n, int k) {
  int *count = new int[2 * n];
  for (int i = 0; i < 2 * n; ++i) {
    count[i] = 0;
  }
  for (int i = 0; i < n; ++i) {
    ++count[A[i]];
  }
  int cnt = 0;
  for (int i = 0; i < 2 * n - k; ++i) {
    cnt += count[A[i]] * count[A[i] + k];
    if (k != 0) {
      cnt *= 2;
    }
  }
  delete[] count;
  return cnt;
}
