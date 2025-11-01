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
