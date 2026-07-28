# Penalty Shootout Game (C)

A simple terminal-based penalty shootout game written in C.

## About

This project simulates a football penalty shootout where the player takes five penalties against a randomly diving goalkeeper.

The program demonstrates the use of:
- Loops (`for`, `do-while`)
- Conditional statements (`if-else`)
- Random number generation (`rand()`, `srand()`)
- Input validation using `scanf()`
- Buffer clearing using `getchar()`
- Basic game logic

## How It Works

- The player gets **5 penalties**.
- For each penalty, choose a corner between **1 and 4**.
- The goalkeeper randomly dives to one of the four corners.
- If both choose the same corner, the shot is saved.
- Otherwise, it's a goal.
- Scoring **3 or more goals** wins the match.

## Features

- Random goalkeeper decisions
- Input validation
- Handles invalid inputs (letters, symbols, numbers outside 1–4)
- Displays the final score
- Declares win or loss

## Concepts Practiced

- Variables
- User input
- Loops
- Functions from the C Standard Library
- Random number generation
- Input validation
- Problem solving

## Compilation

Using GCC:

```bash
gcc penalty_shootout.c -o penalty_shootout
```

Run:

```bash
./penalty_shootout
```

### On Windows (Command Prompt)

```bash
penalty_shootout.exe
```

## Example

```
===== PENALTY SHOOTOUT =====

Penalty 1

Choose a corner (1-4): 2

You shot at corner 2
Keeper dived at corner 4

GOAL!!
```

## Future Improvements

- Difficulty levels
- Goalkeeper AI with different save probabilities
- Multiplayer mode
- Penalty shootout tie-breaker
- Match statistics
- Scoreboard
