# Compiler Design Labs — CSC3216

Solutions for Lab Tasks 02 and 03, submitted for the **Compiler Design (CSC3216)** course at American International University-Bangladesh (AIUB).

**Author:** Safayet Gazi Sopan
**Student ID:** 24-58125-2
**Section:** X
**Semester:** Summer 2025–26

## Repo structure

```
compiler-design-labs/
├── string-processing/
│   ├── 1_1_char_count.cpp
│   ├── 1_2_count_spaces.cpp
│   ├── 1_3_vowels_consonants_digits.cpp
│   ├── 1_4_line_counting.cpp
│   ├── 1_5_remove_special_chars.cpp
│   ├── 1_6_remove_whitespace.cpp
│   ├── 1_7_caesar_cipher.cpp
│   ├── 1_8_show_initials.cpp
│   └── 1_9_merge_strings.cpp
├── compiler-phases/
│   ├── exp1_tokenization.cpp
│   ├── exp2_valid_identifier.cpp
│   ├── exp3_syntax_checking.cpp
│   └── exp4_datatype_compatibility.cpp
└── README.md
```

## Lab Task 2: String Processing

Nine small C++ programs, each demonstrating a basic string-manipulation technique using manual character range checks (no `<cctype>` functions like `isalpha`/`isdigit`/`toupper`, except where noted).

| File | Description |
|---|---|
| `1_1_char_count.cpp` | Counts all characters in a string excluding spaces |
| `1_2_count_spaces.cpp` | Counts the number of spaces in a string |
| `1_3_vowels_consonants_digits.cpp` | Classifies each character as a vowel, consonant, or digit |
| `1_4_line_counting.cpp` | Reads multiple lines until a terminating `` ` `` and counts total lines |
| `1_5_remove_special_chars.cpp` | Strips all non-alphanumeric characters from a string |
| `1_6_remove_whitespace.cpp` | Removes all spaces from a string |
| `1_7_caesar_cipher.cpp` | Shifts each letter by 3 positions (Caesar cipher), wrapping `x→a`, `y→b`, `z→c` |
| `1_8_show_initials.cpp` | Extracts the first letter of every word and capitalizes it |
| `1_9_merge_strings.cpp` | Reads space/line-separated words and joins them into a single string |

## Lab Task 3: Phases of a Compiler

Four experiments modeling the first three phases of a compiler — lexical analysis, syntax analysis, and semantic analysis.

| File | Phase | Description |
|---|---|---|
| `exp1_tokenization.cpp` | Lexical analysis | Scans a statement and classifies each lexeme (identifier, integer literal, operator, parenthesis, semicolon) |
| `exp2_valid_identifier.cpp` | Lexical analysis | Validates whether a given name is a legal variable identifier (not a reserved keyword, valid starting character, etc.) |
| `exp3_syntax_checking.cpp` | Syntax analysis | Checks whether a 6-token assignment statement (`id = operand op operand ;`) follows valid grammar |
| `exp4_datatype_compatibility.cpp` | Semantic analysis | Checks type compatibility of an assignment expression against a fixed symbol table (`count:int`, `price:float`, `total:float`, `active:bool`) |

## How to compile and run

Each file is a standalone program. From inside the relevant folder:

```bash
g++ filename.cpp -o out
./out
```

On Windows, run `out.exe` instead of `./out` if needed.

**Notes on input:**
- Programs using `getline(cin, ...)` (Lab 2, Experiments 2–3) expect a single line typed and confirmed with Enter.
- `1_4_line_counting.cpp` expects multiple lines, terminated by typing a single backtick `` ` `` on its own line.
- `1_9_merge_strings.cpp` reads words until end-of-input — press `Ctrl+D` (Mac/Linux) or `Ctrl+Z` then Enter (Windows) to stop.
- `exp3_syntax_checking.cpp` expects exactly 6 space-separated tokens on one line (e.g. `a = b + 10 ;`).
- `exp4_datatype_compatibility.cpp` expects 4 space-separated words on one line (e.g. `total price + count`).

## Known issue

`1_1_char_count.cpp` and `1_2_count_spaces.cpp` are missing an explicit `#include <string>`. They compiled successfully on the original submission because `<iostream>` transitively pulled in `<string>` on that system/compiler, but this isn't guaranteed on every setup. Add `#include <string>` at the top of both files if you hit a compile error elsewhere.