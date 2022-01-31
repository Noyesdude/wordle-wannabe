#include "Dictionary.h"

// Read in the file into memory to store the dictionary
// only if we haven't already read in a dictionary
// Expecting a word per line dictionary
void Dictionary::ReadDictionary(std::string file)
{
	// Check if we already have words in our dictionary
	if (words.size() == 0)
	{
		std::ifstream myFile;
		myFile.open(file);
		if (myFile.is_open())
		{
			std::string line;
			while (std::getline(myFile, line))
			{
				// Make sure that every word is lowercase
				words.push_back(lowerCase(line));
			}
		}
	}
}

void Dictionary::ClearDictionary()
{
	if (!words.empty())
	{
		words.clear();
	}
}

std::string Dictionary::GetRandomWord()
{
	srand(time(NULL));
	// Simple random call over all words in the dictionary
	return words[(rand() % words.size())];
}

std::string Dictionary::lowerCase(std::string word)
{
	for (int i = 0; i < word.size(); i++)
	{
		word[i] = tolower(word[i]);
	}

	return word;
}
