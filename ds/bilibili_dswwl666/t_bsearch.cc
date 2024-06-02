/**
 * @brief 检查x是否满足某种性质
 * 
 * @param x 
 * @return true 
 * @return false 
 */
bool check(int x) {
  // check code
}

/**
 * @brief 区间[l, r]被划分成[l, mid]和[mid + 1, r]时使用 
 * 
 * @param l 
 * @param r 
 * @return int 
 */
int bsearch_1(int l, int r) {
  while (l < r) {
    int mid = (l + r) >> 1;
    if (check(mid)) r = mid;
    else l = mid + 1;
  }
  return l;
}

/**
 * @brief 区间[l, r]被划分为[l, mid - 1]和[mid, r]时使用
 * 
 * @param l 
 * @param r 
 * @return int 
 */
int bsearch_2(int l, int r) {
  while (l < r) {
    int mid = (l + r + 1) >> 1;
    if (check(mid)) l = mid;
    else r = mid - 1;
  }
  return l;
}