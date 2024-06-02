
/**
 * @brief check if x is the answer
 * 
 * @param x 
 * @return true 
 * @return false 
 */
bool check(int x) {
  if (x == 0) return true;
  else return false;
}

/**
 * @brief 
 * 
 * @param l 
 * @param r 
 * @return int 
 */
int bsearch_1(int l, int r) {
  while (l < r) {
    int mid = l + r >> 1;
    if (check(mid)) r = mid;
    else l = mid + 1;
  }
  return l;
}

int bsearch_2(int l, int r) {
  while (l < r) {
    int mid = l + r + 1 >> 1;
    if (check(mid)) l = mid;
    else r = mid - 1;
  }
  return l;
}