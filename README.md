# C Programming

![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)
![GCC](https://img.shields.io/badge/GCC-Compiler-orange?style=for-the-badge&logo=gnu&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)
![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge)

> A hands-on study archive for mastering the fundamentals of C: logic first, abstractions later.

---

## About This Repository

This is a personal learning repository built entirely in C. It is a practice space for understanding the building blocks of programming through direct implementation: writing the code, breaking it, debugging it, and understanding why it works.

The goal is not just to learn syntax. It is to build strong logical thinking, problem-solving ability, and algorithmic reasoning, the foundation needed before moving into AI/ML, software engineering, data structures, algorithms, and systems-level programming.

## Why C?

C removes the layers between you and the machine. There is no garbage collector, no hidden magic, and no large standard toolkit to lean on. Working in C means learning:

- How data is actually stored in memory
- How pointers and addresses connect variables to hardware
- How the cost of an algorithm shows up in real code
- How to debug without a safety net

This manual-first approach builds the mental model that makes higher-level languages like Python, and the libraries built on them, much easier to understand rather than just use.

## Topics Covered

| Topic | What it builds |
|---|---|
| Variables and Data Types | How values are stored, sized, and converted |
| Conditional Statements | Decision-making and branching logic |
| Loops | Iteration patterns, pattern printing, number problems |
| Functions | Modular design, parameter passing, reusability |
| Arrays | Sequential data handling, searching, sorting |
| Pointers | Memory addresses, indirection, pointer arithmetic |
| Memory Management | Dynamic allocation with `malloc`, `calloc`, `free` |
| Structures | Grouping related data into custom types |
| Recursion | Breaking problems into self-similar subproblems |
| File Handling | Reading from and writing to files |

## Repository Structure

Programs are grouped by topic so each concept can be revisited on its own.

```
C-Programming/
├── Loops/
├── Arrays/
├── Functions/
├── Pointers/
├── ...
└── README.md
```

Each folder contains small, focused programs that demonstrate one idea at a time.

## Getting Started

**Prerequisites:** a C compiler such as GCC.

```bash
# Clone the repository
git clone https://github.com/<your-username>/C-Programming.git
cd C-Programming

# Compile a program
gcc path/to/program.c -o program

# Run it
./program
```

On Windows with MinGW, run `program.exe` instead of `./program`.

Tip: compile with warnings enabled to catch mistakes early.

```bash
gcc -Wall -Wextra -std=c11 program.c -o program
```

## Learning Approach

- **Manual first:** implement the logic by hand before reaching for libraries
- **Concept before code:** understand what a program should do before writing it
- **Debug deliberately:** treat every bug as a lesson in how the machine behaves
- **Practice consistently:** small, regular progress over occasional bursts
- **Write clean code:** clear naming, consistent formatting, meaningful comments

## Who This Is For

- Beginners starting their programming journey
- Students building a fundamentals base
- Anyone preparing for technical interviews or advanced computer science studies
- Learners planning a path toward AI/ML and systems-level work

## Roadmap

- [x] Core fundamentals: variables, conditionals, loops
- [x] Functions and arrays
- [x] Pointers
- [x] Dynamic memory management
- [x] Structures and recursion
- [x] File handling

## The Bigger Picture

This repository is the first step in a longer path toward becoming an AI/ML engineer. Strong fundamentals in C make it easier to reason about performance, memory, and what libraries are doing under the hood. The next stage of that journey continues in Python, where this low-level understanding becomes a real advantage.

## Contributing

This is a personal learning project, but suggestions, corrections, and better approaches are welcome. Feel free to open an issue or submit a pull request
