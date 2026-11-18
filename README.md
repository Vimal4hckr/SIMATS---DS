# 🎓 SIMATS – Data Structures Lab

A comprehensive collection of **Data Structures Laboratory programs implemented using C** for students of SIMATS.

This repository contains practical implementations, problem-solving exercises, and algorithm-based programs covering fundamental data structures such as Arrays, Linked Lists, Stacks, and Queues, along with Searching techniques and Recursion.

The programs are organized topic-wise to make learning, practising, compiling, and executing C programs easier.

---

## 📚 Repository Overview

| S.No | Topic | Programs |
|---|---|---:|
| 01 | Arrays and Recursion | 4 |
| 02 | Linked Lists | 5 |
| 03 | Searching | 5 |
| 04 | Stack | 5 |
| 05 | Queue | 5 |
| | **Total** | **24** |

---

## 📂 Repository Structure

```text
SIMATS---DS/
│
├── Arrays and Recursion/
│   ├── 1/
│   │   └── 1.c
│   ├── 2/
│   │   └── 2.c
│   ├── 3/
│   │   └── 3.c
│   └── 4/
│       └── 4.c
│
├── Linked_list/
│   ├── 1.c
│   ├── 2.c
│   ├── 3.c
│   ├── 4.c
│   └── 5.c
│
├── Searching/
│   ├── 1/
│   │   └── 1.c
│   ├── 2/
│   │   └── 2.c
│   ├── 3/
│   │   └── 3.c
│   ├── 4/
│   │   └── 4.c
│   └── 5/
│       └── 5.c
│
├── stack/
│   ├── 1.c
│   ├── 2.c
│   ├── 3.c
│   ├── 4.c
│   └── 5.c
│
├── queue/
│   ├── 1.c
│   ├── 2.c
│   ├── 3.c
│   ├── 4.c
│   └── 5.c
│
├── .vscode/
│   └── tasks.json
│
└── README.md
```

---

# 🧪 PROGRAMS AND EXPERIMENTS

## 1. Arrays and Recursion

This section covers array manipulation, pointers, recursive functions, array rotation, and sparse matrix operations.

| Program | Description | Concepts |
|---|---|---|
| 1 | Array traversal using indexing and pointer notation | Arrays, Pointers, Memory Addresses |
| 2 | Factorial of a number using recursion | Recursion, Base Condition |
| 3 | Array rotation in left and right directions | Array Manipulation, Reversal Technique |
| 4 | Addition of two sparse matrices | Sparse Matrix, Triplet Representation |

### Concepts Covered
- One-dimensional arrays
- Array indexing
- Pointer arithmetic
- Memory address calculation
- Recursive function calls
- Factorial calculation
- Left and right array rotation
- Sparse matrix representation
- Matrix addition

---

## 2. Linked Lists

This section demonstrates dynamic memory allocation and linked list operations using structures and pointers.

| Program | Description | Concepts |
|---|---|---|
| 1 | Insert nodes at beginning, end, and specified position | Insertion Operations |
| 2 | Delete nodes from beginning, end, and specified position | Deletion Operations |
| 3 | Search an element in a linked list | Searching, Traversal |
| 4 | Reverse a singly linked list | Pointer Manipulation, Reversal |
| 5 | Count the total number of nodes | Traversal, Node Counting |

### Concepts Covered
- Structure definition
- Self-referential structures
- Node creation
- Dynamic memory allocation using `malloc()`
- Memory deallocation using `free()`
- Head pointer
- Next pointer
- Insertion and deletion
- Linked list traversal
- Searching
- Reversing a linked list
- Counting nodes

---

## 3. Searching Algorithms

This section contains searching-based programming problems involving arrays, sorting, comparison counting, performance measurement, and string matching.

| Program | Description | Concepts |
|---|---|---|
| 1 | Linear search with manual or random array generation | Linear Search, Comparisons, Execution Time |
| 2 | Sort 15 numbers and perform binary search | Bubble Sort, Binary Search |
| 3 | Find temperature values using threshold-based binary searches | Sorting, Binary Search, Boundary Conditions |
| 4 | Analyse book page counts using sorted data | Bubble Sort, Threshold Searching |
| 5 | Find anagrams of a target string | String Processing, Character Frequency |

### Concepts Covered
- Linear Search
- Binary Search
- Bubble Sort
- Comparison counting
- Execution time measurement
- Random number generation
- Searching in sorted arrays
- First and last matching positions
- String comparison
- Anagram checking
- Character frequency counting

---

## 4. Stack

Stack is a linear data structure that follows the **LIFO (Last In, First Out)** principle.

This section covers stack implementation using arrays and linked lists, along with expression processing and bracket validation.

| Program | Description | Concepts |
|---|---|---|
| 1 | Implement stack using arrays | Push, Pop, Peek, Display |
| 2 | Implement stack using linked lists | Dynamic Stack, Push, Pop, Display |
| 3 | Evaluate a postfix expression | Postfix Evaluation, Arithmetic Operations |
| 4 | Convert infix expression into postfix expression | Operator Precedence, Expression Conversion |
| 5 | Check balanced parentheses in an expression | Parentheses Matching, Stack |

### Concepts Covered
- LIFO principle
- Stack ADT
- Array implementation
- Linked list implementation
- Push operation
- Pop operation
- Peek operation
- Display operation
- Stack Overflow
- Stack Underflow
- Postfix expression evaluation
- Infix to Postfix conversion
- Operator precedence
- Balanced parentheses

---

## 5. Queue

Queue is a linear data structure that follows the **FIFO (First In, First Out)** principle.

This section covers different queue implementations and their real-world applications.

| Program | Description | Concepts |
|---|---|---|
| 1 | Implement queue using arrays | Enqueue, Dequeue, Peek, Display |
| 2 | Implement queue using linked lists | Dynamic Queue, Enqueue, Dequeue |
| 3 | Implement double-ended queue | Deque, Insert Front, Insert Rear, Delete Front, Delete Rear |
| 4 | Implement priority queue | Priority-Based Insertion and Deletion |
| 5 | Railway reservation waiting list | FIFO Processing, Passenger Management |

### Concepts Covered
- FIFO principle
- Queue ADT
- Array implementation
- Linked list implementation
- Enqueue operation
- Dequeue operation
- Front and Rear pointers
- Peek operation
- Queue Overflow
- Queue Underflow
- Double Ended Queue (Deque)
- Priority Queue
- Waiting list management

---

# 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C Programming | Program implementation |
| GCC Compiler | Compiling C programs |
| Visual Studio Code | Code editing and execution |
| Git | Version control |
| GitHub | Source code hosting and collaboration |

---

# 🚀 Getting Started

Follow these steps to download and execute the programs on your computer.

## Step 1: Install Required Software

Install the following tools:

- Visual Studio Code
- GCC C Compiler
- Git

Check whether GCC is installed:

```bash
gcc --version
```

Check Git installation:

```bash
git --version
```

## Step 2: Clone the Repository

Open your terminal or VS Code terminal.

```bash
git clone https://github.com/Vimal4hckr/SIMATS---DS.git
```

## Step 3: Open the Project

```bash
cd SIMATS---DS
```

Open the project in Visual Studio Code:

```bash
code .
```

## Step 4: Navigate to a Program

Example – Stack:

```bash
cd stack
```

Example – Queue:

```bash
cd queue
```

Example – Linked List:

```bash
cd Linked_list
```

## Step 5: Compile a C Program

Example:

```bash
gcc 1.c -o program
```

For nested folders, compile using the relative path from the repository root:

```bash
gcc "Arrays and Recursion/1/1.c" -o program
```

## Step 6: Execute the Program

Windows:

```bash
.\program.exe
```

Linux / macOS:

```bash
./program
```

---

# 📖 Learning Objectives

By practising the programs in this repository, students will be able to:

1. Understand the fundamental concepts of data structures and abstract data types.
2. Implement linear data structures using arrays and linked lists.
3. Perform insertion, deletion, traversal, and searching operations.
4. Apply stack operations to solve expression evaluation problems.
5. Implement queue variations and understand their applications.
6. Analyse searching techniques and their performance.
7. Understand recursion and pointer manipulation in C.
8. Develop logical thinking and problem-solving skills.
9. Compile, execute, test, and debug C programs.

---

# 💡 How to Practise

For each program:

1. Understand the problem statement.
2. Identify the required data structure.
3. Understand the algorithm before coding.
4. Write the C program.
5. Compile the program using GCC.
6. Execute the program with sample inputs.
7. Test boundary conditions and error cases.
8. Analyse the time and space complexity.

---

# 🤝 Contributions

Students and developers are welcome to contribute to this repository.

### Contribution Steps

1. Fork the repository.
2. Clone your fork.
3. Create a new branch.
4. Add or improve a C program.
5. Test the implementation.
6. Commit your changes.
7. Push your branch.
8. Submit a Pull Request.

---

# 🎯 Repository Purpose

This repository is maintained as a practical learning resource for **Data Structures Laboratory at SIMATS**.

It is intended to support students in:

- Data Structures laboratory preparation.
- Practical examination preparation.
- Understanding C programming implementations.
- Learning fundamental data structures.
- Improving algorithmic thinking.
- Practising problem-solving through real-world scenarios.

---

## 👨‍💻 Maintained By

**Vimal4hckr**

GitHub Profile: https://github.com/Vimal4hckr

Repository: https://github.com/Vimal4hckr/SIMATS---DS

---

⭐ If this repository helps you learn Data Structures, consider giving it a star!

**Happy Coding! 🚀**
