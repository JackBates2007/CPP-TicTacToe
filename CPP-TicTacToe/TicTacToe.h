#pragma once

#include <iostream>
#include "Game.h"



class TicTacToe : public Game
{

public:
	bool IsGameOver() const;
	void TakeTurn();
	void Display() const;
};