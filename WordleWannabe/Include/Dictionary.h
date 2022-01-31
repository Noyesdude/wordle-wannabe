#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
#include <vector>

class Dictionary {
public:
	void ReadDictionary(std::string file);	// Read file and pull in the dictionary
	void ClearDictionary();					// Clear our current dictionary
	std::string GetRandomWord();			// Get a random word from the dictionary

private:
	std::string lowerCase(std::string word);
	std::vector<std::string> words;

};