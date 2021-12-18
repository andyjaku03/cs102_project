Project Prof Marano's Marauders 
by Andy Jaku and Azam Khan for CS 102 Section C Fall 2021

Introduction
What is this project for?

-This project is meant to simulate the popular game called battleship. A user can face a computer and try to guess the positions of their randomized ships before the CPU guesses
the user's ships position.

What does it do?

-This project will create two seperate boards using C and allow a user to place their ships in specific locations. Once the user has done that, a computer will place it's own ships in randomized locations. Then, the CPU and player with play each other, with each taking random guesses to try and determine where their oppononent's ships are. Whoever finds all the ships first will win.

Technical Description
Describe your project's source code in terms of algorithms and data structures.

-Our code heavilty utilizies 2 dimmensional arrays, boolean logic, random number generation and loops. Both boards are 2-d arrays containg characters. In order to place those characters into the 2-d array we created various boolean logic statements and various loops (including for and while) to ensure that the user and cpu are placing ships in the correct way. Furthermore, we use random number generators to make each game feel different, making the CPU guess randomly and altering the layout of the ships per game (*As of right now we have 5 preset randomized CPU ship locations due to a difficulty in creating an entirely randomized system*). We also take advantage of multiple .c and .h files to house different functions and organize our code. 

Credit for parts of the code:

main.h and main.c - Andy and Azam

Draw_board - Azam

Clear_board - Azam

Place_ship - Andy

Cpu_place_ship - Andy*(see explanation below)

Hit_spot - Andy

Cpu_hit_spot - Andy

*While the pseudo random code with the presets was made by Andy, Azam worked on developing a code that would make truly random placements for the ships. However this proved too buggy. That code is left commented out within the Cpu_place_ship.c file.

Screen Shots of Working Program
Add images here like this: Example image

Example of Game Initiation 
![image](https://user-images.githubusercontent.com/90731293/146098951-c5d9d8ca-eaa4-479a-b75f-c63dbc466ee9.png)

Example of In-Game Positioning
![image](https://user-images.githubusercontent.com/90731293/146099237-993c7c64-3c88-4405-9146-b940b10af4a7.png)

Example of Win-Screen
![image](https://user-images.githubusercontent.com/90731293/146099463-7a1f87ba-8a96-4404-8ca6-e35a0aff14ca.png)

Example of Loss-Screen
![image](https://user-images.githubusercontent.com/90731293/146099808-dae902f5-c19f-459b-8fda-b9d23658eeef.png)


Link to YouTube video recording of presentation and code walk through.
https://github.com/andyjaku03/cs102_project

***sorry I forgot to update this last night!!
https://www.youtube.com/watch?v=er28lt87jEs
