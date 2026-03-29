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
