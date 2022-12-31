#include "Word.h"



std::map<std::string, size_t> Word::words;


Word::Word(const std::string& inp) : word(inp)
{
	words[word]++;
}

size_t Word::getCount(void) const
{
	size_t count = words[word];

	words.erase(word);

	return count;
}