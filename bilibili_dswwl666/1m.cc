#include <stdlib.h>

// brute force algorithm
void solution(int A[], int B[], int n, int &min, int &max) {
  int cur_min, cur_max, now;
  cur_min = cur_max = abs(A[0] - B[0]);
  now = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      now = abs(A[i] - B[i]);
      if (now < cur_min) {
        cur_min = now;
      }
      if (now > cur_max) {
        cur_max = now;
      }
    }
  }
  min = cur_min;
  max = cur_max;
}

// time complexity:   O(n^2)
// space complexity:  O(n)
