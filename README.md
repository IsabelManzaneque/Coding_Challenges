# Coding_Challenges
This repository contains a compilation of code challenges using different languages 

## Table of contents

* [Game of checkers](#game-of-checkers)
* [Climbing snail](#climbing-snail)
* [Print Rhombus](#print-rhombus)
* [Calendar](#calendar)
* [Desplazador 1 bit](#desplazador-1-bit)
* [laberinto](#laberinto)


## Game of checkers

https://github.com/IsabelManzaneque/Code_Challenges/tree/main/Game_of_checkers

Given the start and finish positions on a checkerboard, write a program to check whether a piece can reach the finish position from the start with a series of valid moves. In 
the game of checkers, an uncrowned piece may only move one step diagonally forward, where forward is in the direction of the opponent's starting row. Assume that there is 
only one piece on an 8 times 8 checkerboard. The light pieces start at the bottom and the dark pieces start at the top.Columns are designated by characters `a, b, c, d, e, f, 
g, h` from left to right. Rows are designated by numbers `1, 2, 3, 4, 5, 6, 7, 8` from bottom to top.

Only the dark squares of the checkered board are used.

Input:

A string containing three space-delimited, alpha-numeric values: The color of the piece, the start position, the finish position.
The color of the piece is designated by the one character: `L` for light, or `D` for dark.
The position on the checkerboard is a concatenation of a character and integer, addressing the column and the row respectively. 
For example: L e3 g7  is a Light colored piece starting in position e3 and trying to get to g7.


Output: `True` if the checker can reach the finish position, otherwise `False`.


## Climbing snail

https://github.com/IsabelManzaneque/Code_Challenges/tree/main/Climbing_snail

A snail climbs on a wall, it starts at the bottom and climbs up n meters a day. Every night it slides m meters down.
Given the height of the wall H, write a program to calculate how many days required for the snail to reach the top of the wall.

input : Three non-negative integers n, m, and H separated by a space. For example: 3 2 11

output : A single integer number, which is the number of days required for the snail to reach the top of the wall. For example: 9.
If the snail will never be able to reach the top of the wall print `Fail`


## Print Rhombus

https://github.com/IsabelManzaneque/Coding_Challenges/tree/main/print_rhombus

Write a program that takes a positive integer n and prints a rhombus made of the characters "@", "o" and "." with side size n. 
From the outside in, the layers of the rhombus will be made of the following characters: "@", ".", "o", ".", "@", ".", "o" and so on.
The largest size of the rhombus will be 20. The program will not print negative or 0 size. If the wrong input is entered the program will end, there won't be a loop requesting a correct input to be entered.


## Calendar

https://github.com/IsabelManzaneque/Coding_Challenges/tree/main/Calendar

Write a program that requests a month and a year in the range between 1601 and 3000 and prints out the month's calendar page. The program won't print out anything for the years out of range. The characters "=", "|", "." and blank space must be used so the end result looks as follows:

<img width="174" alt="image" src="https://user-images.githubusercontent.com/86284395/156873979-c4ab6077-57d1-4dd6-aa01-358871fe4048.png">


It is suggested to write a function that determines if it is a leap-year and another one to calculate on which weekday does the month begin

## Desplazador 1 bit

https://github.com/IsabelManzaneque/Coding_Challenges/tree/main/desplazador_1_bit

Escriba en VHDL la architecture que describa el comportamiento de un circuito combinacional que realiza operaciones de desplazamiento sobre una entrada de 4 bits. La entrada de seleccion de operacion del circuito es "op". Las senales de entrada y salida se llaman, respectivamente, "entrada" y "salida"


<img width="299" alt="image" src="https://user-images.githubusercontent.com/86284395/165338720-55244bf5-0dd8-4069-8742-c2d0b1aac417.png">


## Laberinto

https://github.com/IsabelManzaneque/Coding_Challenges/tree/main/laberinto

Dado un array bidimensional de enteros que representa un laberinto, en el que  0 representa "casilla libre" y 1 representa "pared", devuelve un booleano que indique si hay un camino desde la casilla (0,0) [superior izquierda] hasta la casilla inferior derecha
 
