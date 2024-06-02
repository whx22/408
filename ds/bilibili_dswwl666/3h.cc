// brute force algorithm
// time complexity:   O(n^3)
// space complexity:  O(n)
int solution1(int A[], int B[], int C[], int n) {
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < n; ++k) {
        if (A[i] < B[j] && B[j] < C[k])
          ++cnt;
      }
    }
  }
  return cnt;
}

void quicksort(int q[], int l, int r);
int bsearch(int q[], int n, int v);

int solution2(int A[], int B[], int C[], int n) {
  int cnt = 0, p, q;
  quicksort(A, 0, n - 1);
  quicksort(B, 0, n - 1);
  quicksort(C, 0, n - 1);
  for (int i = 0; i < n; ++i) {
    p = bsearch(A, n, B[i]);
    q = bsearch(C, n, B[i]);
    cnt += p * q;
  }
  return cnt;
}
