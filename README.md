# ft_printf - 42 Barcelona

**ft_printf** is a project at 42 where you recreate the `printf` function from the C standard library. The goal is to understand variadic functions, format specifiers, and string formatting while implementing a lightweight version of `printf`.

---

## Table of Contents
1. [Introduction](#introduction)
2. [Project Overview](#project-overview)
3. [Supported Format Specifiers](#supported-format-specifiers)
4. [Installation](#installation)
5. [Usage](#usage)
6. [License](#license)

---

## Introduction

The **ft_printf** project challenges you to recreate the `printf` function, which formats and prints data to the standard output. This project helps you understand variadic functions, string manipulation, and the intricacies of format specifiers.

---

## Project Overview

The goal of this project is to implement a function called `ft_printf` that mimics the behavior of the standard `printf` function. Your implementation should handle various format specifiers, manage memory efficiently, and handle edge cases gracefully.

---

## Supported Format Specifiers

The following format specifiers are supported:

- **`%c`**: Print a single character.
- **`%s`**: Print a string.
- **`%p`**: Print a pointer address in hexadecimal format.
- **`%d`**: Print a signed decimal integer.
- **`%i`**: Print a signed decimal integer.
- **`%u`**: Print an unsigned decimal integer.
- **`%x`**: Print an unsigned hexadecimal integer (lowercase).
- **`%X`**: Print an unsigned hexadecimal integer (uppercase).
- **`%%`**: Print a percent sign.

---

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/nkaryoli/ft_printf.git

2. Navigate to the project directory:
   ```bash
   cd ft_printf

3. Compile the library:
   ```bash
   make

4. The static library libftprintf.a will be created in the root directory.

## Usage
To use the ft_printf in your project:

1. Include the ft_printf.h header file in your source code:
   ```bash
   #include "ft_printf.h"

2. Compile your program with the libft.a library:
   ```bash
   gcc -Wall -Wextra -Werror your_program.c -L. -lftprintf -o your_program

2. Example usage:
   ```bash
   int main(void)
   {
      ft_printf("Hello, %s!\n", "world");
      ft_printf("The answer is %d.\n", 42);
      ft_printf("Pointer: %p\n", &main);
      return (0);
   }
   
## License
This project is part of the 42 curriculum and is licensed under the 42 License. See the LICENSE file for details.

Good luck with your journey at 42 Barcelona! 🚀
