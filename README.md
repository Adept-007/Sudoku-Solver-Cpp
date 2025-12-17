# Sudoku Solver(C++)
A Sudoku solver implemented in C++ using backtracking to fill a 9×9 Sudoku board while satisfying all constraints.
---

## Features
- Solves standard 9×9 Sudoku boards
- Validates row, column, and 3×3 subgrid constraints
- Uses recursive backtracking to explore valid configurations
- Detects and reports unsolvable boards

---

## Algorithm
1. Find the first empty cell in the board
2. Try placing digits from 1 to 9
3. Check whether the digit is valid in the current row, column, and 3×3 subgrid
4. Recursively continue with the next empty cell
5. If no valid digit leads to a solution, backtrack and try the next possibility

---
## Complexity
- **Time Complexity:** O(9^E), where E(<=81) is the number of empty cells.
- **Space Complexity:** O(E), due to the recursion stack.
---
## Testing
The implementation was tested on:
- Solvable Sudoku boards of varying difficulty.
- Boards with no valid solution.
---
## Files
- `Sudoku_Solver.cpp`- C++ implementation of Sudoku algorithm.
- `input.txt`- Example input.
- `output.txt`- Expected output.
