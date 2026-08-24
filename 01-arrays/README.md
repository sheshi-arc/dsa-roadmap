# 📦 Arrays

Arrays are one of the fundamental data structures in programming.

This section contains my notes, implementations, problem-solving practice, and complexity analysis while learning arrays.

---

## 🎯 Learning Goals

- Understand what arrays are
- Understand indexing and memory representation
- Perform basic array operations
- Analyze time and space complexity
- Solve common array problems
- Build problem-solving patterns

---

## 📚 Topics

- [ ] Array basics
- [ ] Traversal
- [ ] Insertion
- [ ] Deletion
- [ ] Searching
- [ ] Updating elements
- [ ] Finding maximum & minimum
- [ ] Reversing an array
- [ ] Prefix sums
- [ ] Two-pointer technique
- [ ] Sliding window
- [ ] Common interview/GATE problems

---

## 💻 Implementations

Implementations will be added as I learn each concept.

| Topic | Status |
|---|---|
| Array traversal | ⏳ |
| Insertion | ⏳ |
| Deletion | ⏳ |
| Linear search | ⏳ |
| Binary search | ⏳ |
| Reverse array | ⏳ |
| Prefix sum | ⏳ |
| Two pointers | ⏳ |
| Sliding window | ⏳ |

---

## ⏱️ Complexity

I will document the time and space complexity of every implementation and problem.

Example:

```text
}
---

## 🧩 Problem 01 — Find Maximum Element

### Problem

Find the largest element in an array.

### Example

Array: `10, 45, 23, 89, 12`

Output: `89`

### Approach

1. Take the first element as the maximum.
2. Start checking from the second element.
3. Compare each element with the current maximum.
4. If the current element is greater, update the maximum.
5. After traversing the array, the maximum is the answer.

### C++ Logic

```cpp
int maximum = arr[0];

for (int i = 1; i < n; i++) {
    if (arr[i] > maximum) {
        maximum = arr[i];
    }
}
## 🧩 Problem 02 — Find Minimum Element

### Problem

Find the smallest element in an array.

### Example

Array: `10, 45, 23, 89, 12`

Output: `Minimum = 10`

### Approach

1. Assume the first element is the minimum.
2. Start checking from the second element.
3. Compare each element with the current minimum.
4. If the current element is smaller, update the minimum.
5. After traversing the array, the minimum is the answer.

### Complexity

- Time Complexity: `O(n)`
- Space Complexity: `O(1)`

### Status

- [x] Concept understood
- [x] Code written
- [x] Tested
- [x] Notes added
- [x] Uploaded to GitHub
