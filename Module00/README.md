## C++ Academic Transition & Key Concepts

This README summarizes the main concepts covered in your transition from C to C++ for academic projects, focusing on C++98 compliance and best practices.

### 1. C++ Learning Path
- Progress in phases: Foundation (OOP basics, memory management), Intermediate (inheritance, casting, references), Advanced (templates, exception handling), Expert (design patterns, concurrency).
- Use C++98 features only; avoid C++11/Boost/STL containers until allowed.

### 2. Academic Coding Rules
- Compile with: `-Wall -Wextra -Werror -std=c++98`
- No C functions like `printf`, `malloc`, `free`.
- No `using namespace`, `friend`, STL containers/algorithms before allowed modules.
- Naming conventions: UpperCamelCase for files/classes, header guards (`#ifndef CLASS_HPP`).
- Follow Orthodox Canonical Form for classes (constructor, copy constructor, assignment operator, destructor).

### 3. C++ Casting
- Use C++-style casts: `static_cast`, `const_cast`, `reinterpret_cast`, `dynamic_cast`.
- Prefer `static_cast` for safe conversions (e.g., int to char).
- Avoid C-style casts (`(type)value`).

### 4. Header Guards vs. `#pragma once`
- Use header guards (`#ifndef ... #define ... #endif`) for portability and C++98 compliance.
- Do not use `#pragma once` in strict academic projects.

### 5. Constructor Initialization Lists
- Prefer initialization lists (`Class(): member(val) {}`) for efficiency and when initializing const/reference members.
- Assignment in body (`member = val;`) is less efficient and not always possible for some member types.

### 6. References and Copies
- Non-const references cannot bind to temporaries (rvalues); use `const &` or pass by value.
- Passing by value creates a copy (new object on stack).

### 7. Stack vs Heap Allocation
- Objects declared directly (e.g., `Contact contacts[8];`) are allocated on the stack and auto-destroyed at scope end.
- Heap allocation (`new Contact`) is manual and requires `delete`.

### 8. C++98 Standard Functions
- `atoi` and `isdigit` are allowed via `<cstdlib>` and `<cctype>`, but prefer C++ alternatives (`stringstream` for conversion, `std::isdigit`).

### 9. Static Variables
- Static variables in functions/classes retain value between calls.
- Example:
  ```cpp
  void foo() {
      static int counter = 0;
      counter++;
      std::cout << counter << std::endl;
  }
  ```
- In classes, static members are shared by all instances.

---
