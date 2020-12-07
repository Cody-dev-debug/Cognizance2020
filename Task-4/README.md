# Task-4
<!-- Blockquote -->
>In this task I am going to create a C program code on the following explained problem
<!-- Horizontal Rule -->
---
## N-Queens Problem:
<!-- Strong --><!-- Italics -->
Given a chess board having *N* **X** *N* cells, we need to place *N* queens in such a way that no queen is attacked by any other queen. A queen can attack horizontally, vertically and diagonally.
So initially we are having *N* **X** *N* cells unattacked cells where we need to place *N* queens. Let's place the first queen at a cell *(i,j)* , so now the number of unattacked cells is reduced, and number of queens to be placed is *N-1*. Place the next queen at some unattacked cell. This again reduces the number of unattacked cells and number of queens to be placed becomes *N-2*. Continue doing this, as long as following conditions hold.
<-- UL -->
*The number of unattacked cells is not 0.
*The number of queens to be placed is not 0.

If the number of queens to be placed becomes 0, then it's over, we found a solution. But if the number of unattacked cells become 0, then we need to backtrack, i.e. remove the last placed queen from its current cell, and place it at some other cell. We do this recursively.

### Algorithm
<!-- Github Markdown -->
<!-- Code Blocks -->
'''

     is_attacked( x, y, board[][], N)
             //checking for row and column
            if any cell in xth row is 1
                return true
            if any cell in yth column is 1
                return true
            //checking for diagonals
            if any cell (p, q) having p+q = x+y is 1          
                return true
            if any cell (p, q) having p-q = x-y is 1
                return true
            return false
    N-Queens( board[][], N )
            if N is 0                     //All queens have been placed
               return true
            for i = 1 to N 
            {
                for j = 1 to N 
                {
                      if is_attacked(i, j, board, N) is true
                           skip it and move to next cell
                      board[i][j] = 1            //Place current queen at cell (i,j)
                      if N-Queens( board, N-1) is true    // Solve subproblem
                           return true                   // if solution is found return true
                      board[i][j] = 0            /* if solution is not found undo whatever changes were made i.e., remove  current queen from (i,j)*/
        }
    }
    return false
'''
### Example : When the size of board is 4 X 4-
<!-- Tables -->
#### Placing Queen at (1,1)
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|0|0|
|0|0|0|0|
|0|0|0|0|
#### Placing Queen at (2,3)
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|1|0|
|0|0|0|0|
|0|0|0|0|
#### Placing Queen at (4,2)
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|1|0|
|0|0|0|0|
|0|1|0|0|
#### No more valid moves , so after backtracking
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|1|0|
|0|0|0|0|
|0|0|0|0|
#### No more valid moves , so after backtracking
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|0|0|
|0|0|0|0|
|0|0|0|0|
#### Placing Queen at (2,4)
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|0|1|
|0|0|0|0|
|0|0|0|0|
#### Placing Queen at (3,2)
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|0|1|
|0|1|0|0|
|0|0|0|0|
#### No more valid moves , so after backtracking
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|0|1|
|0|0|0|0|
|0|0|0|0|
#### Placing Queen at (4,3)
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|0|1|
|0|0|0|0|
|0|0|1|0|
#### No more valid moves , so after backtracking
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|0|1|
|0|0|0|0|
|0|0|0|0|
#### No more valid moves , so after backtracking
|||||
|-|-|-|-|
|1|0|0|0|
|0|0|0|0|
|0|0|0|0|
|0|0|0|0|

*After repeating the above same process of placing queen and bactracking several times we find the solution which is the board shown below:*
|||||
|-|-|-|-|
|0|1|0|0|
|0|0|0|1|
|1|0|0|0|
|0|0|1|0|
