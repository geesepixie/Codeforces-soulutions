## Problems

### 1. **A_Division**
   
**Description:**  
Given a rating, determine which Codeforces division it belongs to:
   - Division 1: rating ≥ 1900
   - Division 2: 1600 ≤ rating ≤ 1899
   - Division 3: 1400 ≤ rating ≤ 1599
   - Division 4: rating ≤ 1399

**Approach:**  
Check the rating against the division thresholds from highest to lowest. Output the corresponding division. This can be implemented with simple conditional statements (`if-else`).

**Complexity:**  
O(1) per test case.

------------------------------------

### 2. **B_Triple**

**Description:**   
Given an array a of n elements, print any value that appears at least three times or print -1 if no such value exists.

**Approach:**   
For each test case, count the occurrences of each element.
Since 1 ≤ a[i] ≤ n, a frequency array of size n+1 can be used.
Iterate over the frequency array to find any element with count ≥ 3.
Print that element if found, otherwise print -1.

**Complexity:**   
O(n) per test case for counting occurrences.

---
