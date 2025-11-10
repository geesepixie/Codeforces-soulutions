## Problems

### 1. A_Sum_of_Round_Numbers
**Description:**  
Represent a number `n` as the sum of the fewest *round numbers* — numbers like `4000`, `90`, or `6`, where only the leftmost digit is non-zero.  

**Approach:**  
Each non-zero digit of `n` becomes a round number by multiplying it with its place value (`1, 10, 100, ...`).  
For example: `9876 → 9000 + 800 + 70 + 6`
Each non-zero digit produces exactly one term, ensuring the minimal count.

**Complexity:**  
O(log n) per test case.

------------------------------------
### 2. B_Same_Parity_Summands
**Description:**  
Represent n as a sum of k positive integers all of the same *parity* (all odd or all even).

**Approach:**  
A sum of `k` numbers can all be odd if `n` is at least `k` *and* has the same parity as `k`. In that case, take `k-1` ones and the remaining value as the last number. A sum can be all even if `n` is at least `2*k` *and* even; then take `k-1` twos and the remainder as the last number. If neither works, no solution exists.

**Complexity:**  
O(k) per test case.
