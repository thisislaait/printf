# Printf Project

## Introduction

This project is a part of the ALX Software Engineering track and is the first project undertaken by [Ugo Ogadi](https://github.com/thisislaait) and [Ntokozo Vilakazi].

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Project Structure](#project-structure)
- [Contributors](#contributors)

## Features

- Basic support for standard conversion specifiers (`c`, `s`, `%`).
- Handling of integer conversion specifiers (`d`, `i`).
- Implementation of unsigned integer conversion specifiers (`u`, `o`, `x`, `X`).
- Custom conversion specifiers:
  - `S` for printing strings with non-printable characters.
  - `r` for printing reversed strings.
  - `R` for printing ROT13'ed strings.
- Additional formatting options:
  - `-` for left-justifying output.
  - `+`, `space`, `#`, and `0` for various formatting options.

## Project Structure

The project is organized into the following files:

- `main.h`: Header file containing function prototypes.
- `_printf.c`: Main implementation of the printf function.
- `_putchar.c`: Implementation of the _putchar function.
- `print_char.c`, `print_str.c`, ...: Files containing the implementation of various print functions.
- `buffer_handling.c`: File handling buffer operations.
- `main.c`: Main file for testing the printf function.

## Contributors

- [Ugo Ogadi](https://github.com/thisislaait)
- [Ntokozo Vilakazi]
