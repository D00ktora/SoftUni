#ifndef SEQUANCE_H
#define SEQUANCE_H
#include <vector>


template<class T, class Generator>
class Sequence
{
public:
	class Iterator
	{
		const std::vector<T>& sequanceElements;
		int indexInSequance;

		Iterator(const std::vector<T>& sequanceElements, int indexInSequance)
			: sequanceElements(sequanceElements), indexInSequance(indexInSequance) {}
	public:
		static Iterator getBegin(const std::vector<T>& sequanceElements)
		{
			return Iterator(sequanceElements, 0);
		}

		static Iterator getEnd(const std::vector<T>& sequanceElements)
		{
			return Iterator(sequanceElements, -1);
		}

		const T& operator*() const
		{
			return this->sequanceElements.at(this->indexInSequance);
		}

		Iterator& operator ++ ()
		{
			this->indexInSequance++;
			return *this;
		}

		bool operator != (const Iterator& other) const
		{
			return !(*this == other);
		}

		bool operator == (const Iterator& other) const
		{
			bool sequanceMatch = this->sequanceElements == other.sequanceElements;
			bool bothPositionAreEnd = isEndIndex(this->indexInSequance, this->sequanceElements)
				&& isEndIndex(other.indexInSequance, other.sequanceElements);
			bool positionsMatch = this->indexInSequance == other.indexInSequance;

			return sequanceMatch && (bothPositionAreEnd || positionsMatch);
		}

	private:

		static int isEndIndex(int index, const std::vector<T>& sequanceElements)
		{
			return index == -1 || index == sequanceElements.size();
		}
	};

private:
	Generator generator; 
	std::vector<T> generated; 

public:
	void generateNext(int n) 
	{
		for (int i = 0; i < n; i++)
		{
			this->generated.push_back(this->generator());
		}
	}

	Iterator begin() const
	{
		return Iterator::getBegin(this->generated);
	}

	Iterator end() const
	{
		return Iterator::getEnd(this->generated);
	}

};


#endif // !SEQUANCE_H
