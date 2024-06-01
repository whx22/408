void quick_sort(int q[], int l, int r) {
  if (l >= r) return;
  int i = l - 1, j = r + 1, x = q[l + r >> 1];
  while(i < j) {
    do i++; while (q[i] < x);
    do j--; while (q[j] > x);
  }
}