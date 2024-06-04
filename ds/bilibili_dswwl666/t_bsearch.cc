/**
 * @brief 整数二分查找：查找划分区间的左右边界
 * 
 * 思想：确保每次迭代后，答案都在区间中，当区间长度为1时，即为答案
 *  
 * | 满足条件的区间 | | 不满足条件的区间 | 
 * 1. 查询满足调见的左边界：[l, r] -> [l, mid] 和 [mid + 1, r]
 *  mid = (l + r) / 2 
 *  if (check(mid))
 *    true: r = mid; (to [l, mid])
 *    false: l = mid + 1; (to [mid + 1, r])
 * 
 * 2. 查询满足条件的右边界：[l, r] -> [l, mid - 1] 和 [mid, r] 
 *  mid = (l + r + 1) / 2
 *  if (check(mid))
 *    true: l = mid; (to [mid, r])
 *    false: r = mid - 1; (to [l, mid - 1])
 */

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
