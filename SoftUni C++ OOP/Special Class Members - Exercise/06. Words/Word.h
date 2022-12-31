#ifndef WORD_H
#define WORD_H
#include <sstream>
#include<string>
#include <map>
class Word
{ 
	std::string word;
	
	static std::map<std::string, size_t> words;
public:

	Word(const std::string& inp);


	size_t getCount(void) const;


	const std::string& getWord(void) const
	{
		return word;
	}

	bool operator < (const Word& other)const
	{
		return word < other.getWord();
	}
};


#endif // !WORD_H
