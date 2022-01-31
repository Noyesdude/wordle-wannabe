#pragma once
#include "Dictionary.h"

class Wordle
{
public:
	Wordle();
	int StartGame();
	int EndGame();
	std::vector<int> CheckGuess(std::string word);

private:
	std::string word;
	std::vector<std::string> guesses;

};