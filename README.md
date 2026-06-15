# C++ Programming Exercises: Operators & Logic

A comprehensive collection of 19 C++ programs designed to demonstrate fundamental programming concepts, logical conditions, and advanced bitwise operations. This repository serves as a practical portfolio of core programming foundations and hardware-level logic manipulation.

## 🚀 Key Topics Covered

### 1. Basic Operators & Logic
* **Arithmetic Operations:** Basic math calculations with boundary checks (e.g., preventing division by zero).
* **Conditional Structures:** Implementing standard `if-else` flows and shorthand **Ternary (Conditional) Operators** (`? :`).
* **String Manipulation:** Using idiomatic C++ standard string methods to find characters and evaluate matching patterns.

### 2. Advanced Bitwise & Hardware Optimization
* **Bitwise Operations:** Deep dive into `AND` (`&`), `OR` (`|`), `XOR` (`^`), and bitwise `NOT` (`~`).
* **Variable Swapping:** Efficiently swapping variables in memory without using temporary storage utilizing the **Bitwise XOR Swap** technique.
* **Bit Shifting:** Utilizing Left Shift (`<<`) and Right Shift (`>>`) operations for fast hardware-level multiplication and division.
* **Math Efficiency:** Determining if an integer is a perfect power of two using rapid bit-masking algorithms (`num & (num - 1)`).

### 3. Numerical Base Conversion Calculators
* Algorithmic manual calculations to parse raw binary entries into base-10 decimals.
* Advanced Multi-Base conversion streams using standard formatting utilities (`std::hex`, `std::oct`, `std::dec`) to quickly transform Binary into Hexadecimal, Octal, and Decimal formats.

---

## 🛠️ Getting Started

### Prerequisites
To compile and run these source files locally, you need a C++ compiler installed on your system (such as `GCC / G++` via MinGW on Windows, Clang on macOS, or your choice of a modern IDE like Dev-C++ or Visual Studio).

### Compilation
Open your terminal (e.g., Git Bash) inside the project directory and run the standard compilation command for any file:

```bash
g++ "Bitwise XOR Swap.cpp" -o "BitwiseXORSwap"
./BitwiseXORSwap
