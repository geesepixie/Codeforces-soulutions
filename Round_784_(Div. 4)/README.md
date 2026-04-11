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

**Problem tags:**
`implementation`, `*800`

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

### 3. **C_OddEven_Increments**

**Description:**   
Given an array, you can repeatedly add +1 to all elements at odd indices or all elements at even indices. Determine if it’s possible to make all elements have the same parity.

**Approach:**   
Observe that elements at odd indices always change together, and elements at even indices always change together.
So, parity within each group must already be consistent.
Check:   
- all odd-index elements have the same parity   
- all even-index elements have the same parity

If both hold → `YES`, else → `NO`.

**Complexity:**   
O(n) per test case.

---

### **4. D_Colorful_Stamp**

**Description:**   
You are given a row of cells colored W, R, or B. Initially, all cells were white. You can use a stamp that colors two adjacent cells, making one R and the other B (in any order). Determine whether the final configuration can be obtained.

**Approach:**   
Split the string into segments separated by W. For each segment, check if it has length at least 2 and contains both R and B. If any segment fails this condition, print `NO`. Otherwise, print `YES`.

**Complexity:**
O(n) per test case.

---
