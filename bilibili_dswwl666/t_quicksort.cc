void quick_sort(int q[], int l, int r) {
  if (l >= r) return;
  int i = l - 1, j = r + 1, x = q[(l+r) >> 2];
  while (i < j) {
    do ++i; while (q[i] < x);
    do --j; while (q[j] > x);
    if (i < j) q[i] ^= q[j] ^= q[i] ^= q[j];
  }
  quick_sort(q, l, j); quick_sort(q, j + 1, r);
}