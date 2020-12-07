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
'''algorithm
'''
