# 42 CPP Modules 00–09

> My journey through the 42 Network’s classic C++ piscine  
> **by saidechlahbi 🎓**

This repository contains my solutions and learning outcomes for **Modules 00 to 09** of the 42 C++ pool. Each module tackles a unique aspect of modern C++ (98), leading to mastery of classic OOP, memory, containers, algorithms, and project management.

## ✅ Table of Contents

- [Module 00: Basic C++](#module-00-basic-c)
- [Module 01: Memory, References & Pointers](#module-01-memory-references--pointers)
- [Module 02: Ad-hoc Polymorphism & Operator Overloading](#module-02-ad-hoc-polymorphism--operator-overloading)
- [Module 03: Inheritance](#module-03-inheritance)
- [Module 04: Subtype Polymorphism](#module-04-subtype-polymorphism)
- [Module 05: Exceptions](#module-05-exceptions)
- [Module 06: Casts, std::string & Misc](#module-06-casts-stdstring--misc)
- [Module 07: Templates](#module-07-templates)
- [Module 08: The Standard Template Library (STL)](#module-08-the-standard-template-library-stl)
- [Module 09: Containers, Algorithms & Real-World Sorting](#module-09-containers-algorithms--real-world-sorting)

---

## Module 00: Basic C++

- **Subjects:**  
  - Classes, member functions, accessors, static members, namespaces
- **What I learned:**  
  - Syntax and structure of C++ classes
  - The first project to write, compile, run, and debug a complete C++ program

---

## Module 01: Memory, References & Pointers

- **Subjects:**  
  - Stack vs heap, pointers, references, new/delete, static/global/local objects
- **What I learned:**  
  - Manual memory management
  - Creating and destroying objects
  - Avoiding leaks and understanding lifetimes

---

## Module 02: Ad-hoc Polymorphism & Operator Overloading

- **Subjects:**  
  - Canonical form (OCF), operator overloading, orthodoxy in class design
- **What I learned:**  
  - How to safely write copy constructors, assignment operators, destructors
  - When and how to overload operators like `<<`, `=`, `+` etc.

---

## Module 03: Inheritance

- **Subjects:**  
  - Single inheritance, protected/private, polymorphism basics
- **What I learned:**  
  - Build class hierarchies using inheritance
  - Importance and danger of protected members

---

## Module 04: Subtype Polymorphism

- **Subjects:**  
  - Virtual functions, override, abstract base classes, up/down-casting
- **What I learned:**  
  - Achieving runtime polymorphism via vtables
  - Safely design and implement abstract interfaces

---

## Module 05: Exceptions

- **Subjects:**  
  - Exception handling, try/catch, throw, custom exception classes
- **What I learned:**  
  - Handling fatal/unexpected errors gracefully
  - Writing robust C++ code

---

## Module 06: Casts, std::string & Misc

- **Subjects:**  
  - Static/dynamic/reinterpret casts, std::string, specialization cases
- **What I learned:**  
  - Type conversions and when they are safe/dangerous
  - Deep familiarity with std::string and basic string parsing

---

## Module 07: Templates

- **Subjects:**  
  - Function and class templates, specialization, SFINAE basics
- **What I learned:**  
  - Write generic C++ code
  - Understand template instantiation and pitfalls

---

## Module 08: The Standard Template Library (STL)

- **Subjects:**  
  - STL containers (`vector`, `map`, `set`, `stack`, etc), iterators, algorithms (find, sort, etc)
- **What I learned:**  
  - Practical use of STL containers and algorithms
  - Writing efficient, idiomatic, and modern C++

---

## Module 09: Containers, Algorithms & Real-World Sorting

- **Subjects:**  
  - Advanced use of STL (timing/vector/deque), implementation of the Ford-Johnson (merge-insert) algorithm, container benchmarking
- **What I learned:**  
  - Implement classical algorithms with minimal comparisons
  - Compare performance between containers
  - Deep understanding of algorithmic complexity and real-world benchmark techniques

---

## 🌟 How to build and test

Each module is self-contained; see the README or Makefile inside each module for instructions.

Typical commands:
```sh
cd ModuleXX/exYY/
make
./program_name [args...]
```

42 evaluation commands for stress testing are in module 09’s README.

---

## 💡 License & Credit

- Solutions are my own work, respecting the 42 academic policies.
- Special thanks to my fellow students and mentors for their support.
- For learning only — please do not copy code directly without understanding.

---

Happy coding!  
— *saidechlahbi*
