# Code_Challenges
This repository contains a compilation of code challenges using different languages 


## Game of checkers

Given the start and finish positions on a checkerboard, write a program to check whether a piece can reach the finish position from the start with a series of valid moves. In 
the game of checkers, an uncrowned piece may only move one step diagonally forward, where forward is in the direction of the opponent's starting row. Assume that there is 
only one piece on an 8 times 8 checkerboard. The light pieces start at the bottom and the dark pieces start at the top.Columns are designated by characters `a, b, c, d, e, f, 
g, h` from left to right. Rows are designated by numbers `1, 2, 3, 4, 5, 6, 7, 8` from bottom to top.

Only the dark squares of the checkered board are used.

Input:
"A string containing three space-delimited, alpha-numeric values: 
. The color of the piece
. The start position
. The finish position.
The color of the piece is designated by the one character: `L` for light, or `D` for dark.
The position on the checkerboard is a concatenation of a character and integer, addressing the column and the row respectively. For example: 
L e3 g7  is a Light colored piece starting in position e3 and trying to get to g7.


Output: "`True` if the checker can reach the finish position, otherwise `False`."


