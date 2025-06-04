# push_swap

> Sorting a stack with minimum movements.

## 📝 Overview

**push_swap** is a project written in C that challenges you to sort a stack of integers with the smallest number of operations possible.  
It is a common algorithmic exercise in the 42 school curriculum, focusing on sorting algorithms, data structure manipulation, and code optimization.

## 🚀 How It Works

- The program receives a list of integers as arguments.
- It outputs a sequence of stack operations that will sort the given numbers in ascending order with the fewest possible moves.
- Two stacks (**A** and **B**) are used, and only specific operations are allowed (see below).

## 🧩 Allowed Operations

| Command | Description                       |
|---------|-----------------------------------|
| sa      | Swap top 2 elements of stack A    |
| sb      | Swap top 2 elements of stack B    |
| ss      | sa and sb at the same time        |
| pa      | Push top of B onto A              |
| pb      | Push top of A onto B              |
| ra      | Rotate all elements of A up by 1  |
| rb      | Rotate all elements of B up by 1  |
| rr      | ra and rb at the same time        |
| rra     | Reverse rotate A down by 1        |
| rrb     | Reverse rotate B down by 1        |
| rrr     | rra and rrb at the same time      |

## 🛠️ Build & Run

### Prerequisites

- GCC or Clang (C compiler)
- Make
- Unix-like OS (Linux, macOS, WSL)

### Build

```sh
make
```

### Usage

```sh
./push_swap [list of integers]
```

**Example:**
```sh
./push_swap 3 2 1 6 5 8
```
_Output:_
```
pb
sa
ra
pa
...
```

## 📚 Project Structure

- `src/` - Source files
- `include/` - Header files
- `Makefile` - Build instructions

## 💡 Key Concepts

- Efficient sorting algorithms (radix sort, quicksort-inspired approaches)
- Stack manipulation (push, pop, swap, rotate)
- Algorithm optimization for minimal move count
- Error checking for invalid input

## 🖥️ Bonus

- Visualization tools can be created to display the sorting process.
- Checker program to verify the validity of the output sequence.

## 👤 Author

- [oait-h-m](https://github.com/oait-h-m)

## 📜 License

This project is for educational purposes within the 42 school curriculum.

---
Happy Sorting! 🌀
