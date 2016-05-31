/*
 * TicTacToe.h
 *
 *  Fausto Jesús De La Cruz Caminero 2014-2261
 *      
 */

#ifndef TICTACTOE_H_
#define TICTACTOE_H_
#include <iostream>

void init();
bool validate();
void clearScreen();
void showBoard();
bool isValidInput(std::istream&);
bool isAvailable(int , int );
bool gameOver(); //implement this method





#endif /* TICTACTOE_H_ */
