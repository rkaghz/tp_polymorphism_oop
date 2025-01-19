# README

## Rocio AGUIRRE-HERNANDEZ

## Polymorphism Project
This project demonstrates the concept of polymorphism in C++ through the implementation of a abstract base class `Character` and two derived classes: `Mario` and `Yoshi`. The project involves implementing constructors, destructors, member functions, pure virtual functions, and testing their behavior in a polymorphic context.

### File Structure

The project consists of the following files:

Header Files:

- **Character.h**: Declares the abstract base class `Character`.
- **Mario.h**: Declares the derived class `Mario`.
- **Yoshi.h**: Declares the derived class `Yoshi`.

Source Files:

- **Character.cpp**: Defines the member functions of `Character`.
- **Mario.cpp**: Defines the member functions of `Mario`.
- **Yoshi.cpp**: Defines the member functions of `Yoshi`.

Test File:

- **Character_tests.cpp**: Contains the `main()` function to test and demonstrate polymorphic behavior.

### Compilation Instructions

#### Prerequisites
- A C++11 compatible compiler (`g++`).
- All source files (`Character.h`, `Mario.h`, `Yoshi.cpp`, `Character.cpp`, `Mario.cpp`, `Yoshi.cpp`, and `Character_tests.cpp`) must be in the same directory.

#### Compilation Command
Open a terminal or command prompt, navigate to the directory containing the files, and run:

```bash
 g++ -Wall -Wextra -o CharacterTest  Character.cpp Mario.cpp Yoshi.cpp Character_tests.cpp
```

- `-o CharacterTest`: Creates an executable named `CharacterTest`.

#### Running the Program
After successful compilation, run the program:

- On Linux/Mac:
  ```bash
  ./CharacterTest
  ```
- On Windows:
  ```cmd
  CharacterTest.exe
  ```

### Expected Output
When running the program, you should see output similar to the following:

```
Character: Mario
Speed after three accelerations: 3
Character: 5 crested Yoshi
Speed after three accelerations: 6

```
