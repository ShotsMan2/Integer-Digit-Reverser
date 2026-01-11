# Integer Digit Reverser

This project implements a numerical algorithm in C designed to reverse the sequence of digits in any given integer. It handles sign preservation and reconstructs the number mathematically rather than using string manipulation.

## 🧮 Algorithm Logic

The algorithm avoids string conversion overhead by using pure arithmetic operations:

1.  **Sign Extraction:** Determines if the input $N$ is negative, stores the sign, and processes $|N|$.
2.  **Digit Extraction:** Uses the Modulo operator (`% 10`) to retrieve the last digit.
3.  **Reconstruction:** Appends the extracted digit to the new number by multiplying the current accumulator by 10.
    $$Rev_{new} = (Rev_{old} \times 10) + (N \pmod{10})$$
4.  **Iteration:** Performs integer division (`/ 10`) to process the next digit.
5.  **Restoration:** Reapplies the original sign to the result.

### Complexity
* **Time Complexity:** $O(D)$, where $D$ is the number of digits ($\log_{10} N$).
* **Space Complexity:** $O(1)$ (In-place calculation).

## 🚀 Usage Example

```text
Input:  1453
Process: 3 -> 35 -> 354 -> 3541
Output: 3541

Input:  -12345
Process: (Sign: -) 5 -> 54 -> 543 -> 5432 -> 54321
Output: -54321
