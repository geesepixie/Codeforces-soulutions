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

**Problem tags:**
`implementation`, `math`, `*800`

------------------------------------
### 2. B_Same_Parity_Summands
**Description:**  
Represent `n` as a sum of `k` positive integers all of the same *parity* (all odd or all even).

**Approach:**  
A sum of `k` numbers can all be odd if `n` is at least `k` *and* has the same parity as `k`. In that case, take `k-1` ones and the remaining value as the last number. A sum can be all even if `n` is at least `2*k` *and* even; then take `k-1` twos and the remainder as the last number. If neither works, no solution exists.

**Complexity:**  
O(k) per test case.

**Problem tags:**
`constructive algorithms`, `math`, `*1200`

------------------------------------
### 3. C_K_th_Not_Divisible_by_n
**Description:**
Given two positive integers `n` and `k`, find the k-th positive integer that is not divisible by `n`.

**Approach:**
In every block of n consecutive integers, exactly one number is divisible by `n`, and the remaining `n - 1` numbers are valid.
That means every group of `n - 1` valid numbers corresponds to a full block of size `n`.
Before reaching the k-th valid number, we skip some multiples of `n`.
The number of skipped multiples is: `(k - 1) / (n - 1)` (integer division)
So the final answer is: `answer = k + (k - 1) / (n - 1)`
This lets us jump directly to the result without generating the sequence.

**Complexity:**  
O(1) per test case.
