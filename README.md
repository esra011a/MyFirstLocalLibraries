# 🔧 My C++ Utility Libraries

This repository contains a collection of **C++ header libraries** that make programming easier and cleaner.  
They include ready-to-use functions for input handling, number operations, random generation, arrays, and helper procedures.

---

## 📂 Libraries Overview

- **Readers.h** → Functions to read numbers/strings from the user.
- **Generators.h** → Functions to generate random numbers, characters, words, or operations.
- **Numbers.h** → Functions to check number properties (Prime, Odd/Even, Perfect, etc.).
- **Arrays.h** → Functions to work with arrays (Fill, Search, Copy, Print, Max, Min, Sum, Average…).
- **Procedures.h** → Helper functions (Swap, GameOverScreen, PrintDigits…).

---

## ✅ Features

- Clean and reusable C++ functions.  
- No need to rewrite common utilities.  
- Makes learning and building projects faster.  
- Suitable for beginner and intermediate C++ projects.  

---
## 👩‍💻 Author
Esraa Fahad Alharbi
📍 Al-Madina, Saudi Arabia
💻 Passionate about C++ programming, data analysis, and AI

[LinkedIn](https://www.linkedin.com/in/esra011a/)
[GitHub](https://github.com/esra011a/)

---

## 🚀 Example Usage

```cpp
#include <iostream>
#include "Readers.h"
#include "Generators.h"
#include "Numbers.h"
#include "Arrays.h"
#include "Procedures.h"

int main() {
    int num = Readers::ReadNumber();

    if (Numbers::CheckPrime(num) == Numbers::enPrimeNotPrime::Prime)
        std::cout << num << " is Prime\n";
    else
        std::cout << num << " is Not Prime\n";

    int randNum = Generators::RandomNumber(1, 50);
    std::cout << "Random number: " << randNum << std::endl;

    return 0;
}

