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
## 🧩 Problem 03 — Sum of Array

### Problem

Find the sum of all elements present in an array.

### Example

Array: `10, 45, 23, 89, 12`

Calculation:

`10 + 45 + 23 + 89 + 12 = 179`

Output:

`Sum = 179`

### Approach

1. Create a variable `sum` and initialize it to `0`.
2. Traverse the array from index `0` to `n - 1`.
3. Add each element to `sum`.
4. After the loop finishes, `sum` contains the total.

### C++ Logic

```cpp
int sum = 0;

for (int i = 0; i < n; i++) {
    sum = sum + arr[i];
}
## 🧩 Problem 04 — Find Average of Array

### Problem

Find the average of all elements present in an array.

### Example

Array: `10, 45, 23, 89, 12`

First calculate the sum:

`10 + 45 + 23 + 89 + 12 = 179`

Number of elements:

`5`

Average:

`179 / 5 = 35.8`

### Output

`Average = 35.8`

### Approach

1. Calculate the sum of all elements.
2. Count the number of elements.
3. Divide the sum by the number of elements.
4. Store the result in a `double` to preserve decimal values.

### C++ Logic

```cpp
int sum = 0;

for (int i = 0; i < n; i++) {
    sum = sum + arr[i];
}

double average = (double)sum / n;
## 🧩 Problem 05 — Reverse an Array

### Problem

Reverse the elements of an array without using another array.

### Example

Original Array:

`10 45 23 89 12`

Reversed Array:

`12 89 23 45 10`

### Approach

We use the **Two Pointer Technique**.

1. Set `left` to the first index.
2. Set `right` to the last index.
3. Swap the elements at `left` and `right`.
4. Move `left` one position forward.
5. Move `right` one position backward.
6. Continue until `left` is no longer less than `right`.

### C++ Logic

```cpp
int left = 0;
int right = n - 1;

while (left < right) {

    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    left++;
    right--;
}


