<h1><img src="https://raw.githubusercontent.com/ayogun/42-project-badges/refs/heads/main/covers/cover-cpp-bonus.png"></h1> 

## Table of Contents  

- [Overview](#overview)  
- [Projects](#projects)  
  - [Exercise 00: Conversion of Scalar Types](#exercise-00-conversion-of-scalar-types)  
  - [Exercise 01: Serialization](#exercise-01-serialization)  
  - [Exercise 02: Identify Real Type](#exercise-02-identify-real-type)  
- [Requirements](#requirements)  
- [Usage](#usage)  

## Overview  

This module is designed to deepen understanding of C++ type conversion, serialization, and polymorphism through practical exercises.  

## Projects  

### Exercise 00: Conversion of Scalar Types  

- **Goal**: Implement a `ScalarConverter` class with a single static method, `convert`, to convert a string literal into multiple scalar types (`char`, `int`, `float`, `double`).  
- **Key Features**:  
  - Handle pseudo-literals (`nan`, `+inf`, `-inf`, etc.).  
  - Manage non-displayable and impossible conversions with clear error messages.  
  - The class should not be instantiable.  

### Exercise 01: Serialization  

- **Goal**: Implement a `Serializer` class with the following methods:  
  - `uintptr_t serialize(Data* ptr);`  
  - `Data* deserialize(uintptr_t raw);`  
- **Key Features**:  
  - Convert a pointer to an unsigned integer type and back.  
  - Ensure the deserialized pointer matches the original.  
  - Create a non-empty `Data` structure to test serialization.  

### Exercise 02: Identify Real Type  

- **Goal**: Create a base class and derive three classes (`A`, `B`, `C`) with type identification functionality.  
- **Key Features**:  
  - Implement `Base* generate(void)` to randomly instantiate and return one of the derived types.  
  - Use `void identify(Base* p)` and `void identify(Base& p)` to detect the actual type.  
  - Avoid using `std::typeinfo`.  

## Requirements  

- **Language**: C++98  
- **Compilation**:  
  - A `Makefile` is provided for compilation.  
  - Include the necessary headers for numeric limits and special values handling.  
- **Environment**: Linux-based systems or any compatible environment supporting C++98.  

## Usage  

1. Clone the repository:  
   ```bash
   git clone <repository-url>
   cd <repository-folder>
   ```
2. Build the project:
   ```bash
   make
   ```
3. Run the individual exercices:
   ```bash
   ./convert <literal>
   ./serialize
   ./identify
   ```
4. Clean up:
   ```bash
   make fclean
   ```
