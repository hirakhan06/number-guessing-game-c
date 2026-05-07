# Number Guessing Game (C)

![C](https://img.shields.io/badge/Language-C-blue.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Build](https://img.shields.io/badge/Build-Passing-brightgreen.svg)

A lightweight, interactive command-line interface (CLI) game where the user attempts to guess a randomly generated number. This project demonstrates core C programming concepts including loops, conditional branching, and standard library integration.

## 🚀 Features

- **Dynamic Randomization:** Utilizes `time.h` to seed the random number generator, ensuring a unique experience every session.
- **Interactive Feedback:** Provides real-time "Higher" or "Lower" hints to guide the player.
- **Score Tracking:** Calculates and displays the total number of attempts upon completion.
- **Memory Efficient:** Minimal footprint with optimized control flow.

## 🛠️ Tech Stack

- **Language:** C
- **Compiler:** GCC / Clang
- **Libraries:** `stdio.h`, `stdlib.h`, `time.h`

## 📋 Prerequisites

Ensure you have a C compiler installed on your system:

- **Linux/macOS:** `gcc` or `clang`
- **Windows:** MinGW or WSL

## ⚙️ Installation & Running

### 1. Clone the repository

```bash
git clone https://github.com/your-username/number-guessing-game-c.git
cd number-guessing-game-c
```

### 2. Compile the source code

```bash
gcc main.c -o guessing_game
```

### 3. Execute the program

```bash
./guessing_game
```

## 🎮 How to Play

1. The program will generate a secret number between **1 and 100**.
2. Input your guess when prompted.
3. Use the feedback (`Higher` / `Lower`) to narrow down the range.
4. Try to find the number in the fewest attempts possible!

## 📜 License

This project is licensed under the MIT License — see the `LICENSE` file for details.

---

*Created as part of a foundational C programming journey.*
