#include "TicTacToe.h"

int GameWon;
int Input;
char m_board[9];
int Player = 0;
bool ValidPosition = true;

bool TicTacToe::IsGameOver() const
{
	if (m_board[0] == 'X' && m_board[1] == 'X' && m_board[2] == 'X')
	{
		std::cout << "Player 1 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[3] == 'X' && m_board[4] == 'X' && m_board[5] == 'X')
	{
		std::cout << "Player 1 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[6] == 'X' && m_board[7] == 'X' && m_board[8] == 'X')
	{
		std::cout << "Player 1 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[0] == 'X' && m_board[3] == 'X' && m_board[6] == 'X')
	{
		std::cout << "Player 1 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[1] == 'X' && m_board[4] == 'X' && m_board[7] == 'X')
	{
		std::cout << "Player 1 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[2] == 'X' && m_board[5] == 'X' && m_board[8] == 'X')
	{
		std::cout << "Player 1 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[0] == 'X' && m_board[4] == 'X' && m_board[8] == 'X')
	{
		std::cout << "Player 1 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[2] == 'X' && m_board[4] == 'X' && m_board[6] == 'X')
	{
		std::cout << "Player 1 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[0] == 'O' && m_board[1] == 'O' && m_board[2] == 'O')
	{
		std::cout << "Player 2 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[3] == 'O' && m_board[4] == 'O' && m_board[5] == 'O')
	{
		std::cout << "Player 2 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[6] == 'O' && m_board[7] == 'O' && m_board[8] == 'O')
	{
		std::cout << "Player 2 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[0] == 'O' && m_board[3] == 'O' && m_board[6] == 'O')
	{
		std::cout << "Player 2 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[1] == 'O' && m_board[4] == 'O' && m_board[7] == 'O')
	{
		std::cout << "Player 2 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[2] == 'O' && m_board[5] == 'O' && m_board[8] == 'O')
	{
		std::cout << "Player 2 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[0] == 'O' && m_board[4] == 'O' && m_board[8] == 'O')
	{
		std::cout << "Player 2 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	if (m_board[2] == 'O' && m_board[4] == 'O' && m_board[6] == 'O')
	{
		std::cout << "Player 2 Wins!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	else if (m_board[0] != '\0' && m_board[1] != '\0' && m_board[2] != '\0' && m_board[3] != '\0' && m_board[4] != '\0' && m_board[5] != '\0' && m_board[6] != '\0' && m_board[7] != ' ' && m_board[8] != '\0')
	{
		std::cout << "It's A Tie!\n";
		m_board[0] = '\0';
		m_board[1] = '\0';
		m_board[2] = '\0';
		m_board[3] = '\0';
		m_board[4] = '\0';
		m_board[5] = '\0';
		m_board[6] = '\0';
		m_board[7] = '\0';
		m_board[8] = '\0';
		Player = 0;
		return true;
	}
	else
	{
		return false;
	}
}

void TicTacToe::Display() const
{
	std::cout << m_board[0] << " | " << m_board[1] << " | " << m_board[2] << "\n";
	std::cout << m_board[3] << " | " << m_board[4] << " | " << m_board[5] << "\n";
	std::cout << m_board[6] << " | " << m_board[7] << " | " << m_board[8] << "\n";
	std::cout << "\n";
}

void TicTacToe::TakeTurn()
{
	if (Player == 0)
	{
		std::cout << "Pick A Position On The Board Between 1 and 9: ";
		std::cin >> Input;

		Input = Input - 1;

		if (Input < 0 || Input > 8 || m_board[Input] != '\0')
		{
			std::cout << "Please Pick A Valid Position\n";
			ValidPosition = false;
		}

		else
		{
			ValidPosition = true;
		}

		while (ValidPosition == false)
		{
			std::cout << "Pick A Position On The Board Between 1 and 9: ";
			std::cin >> Input;

			Input = Input - 1;

			if (Input < 0 || Input > 8 || m_board[Input] != '\0')
			{
				std::cout << "Please Pick A Valid Position\n";
				ValidPosition = false;
			}

			else
			{
				ValidPosition = true;
			}
		}

		m_board[Input] = 'X';

		Player = 1;
	}
	else
	{
		Input = rand() % 9;

		if (m_board[Input] != '\0')
		{
			ValidPosition = false;
		}

		else 
		{
			ValidPosition = true;
		}

		while (ValidPosition == false)
		{
			Input = rand() % 9;

			if (m_board[Input] != '\0')
			{
				ValidPosition = false;
			}

			else
			{
				ValidPosition = true;
			}
		}

		m_board[Input] = 'O';

		Player = 0;
	}
}

