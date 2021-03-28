#pragma once
#include <string>
#include <vector>
#include <stdexcept>

class FixedCapacityStackOfStrings
{
public:
	FixedCapacityStackOfStrings(int capacity)
		: _size(0)
		,_capacity(capacity)

	{
		_strings.resize(capacity);
	}

	bool isEmpty() const 
	{
		return 0==_size;
	}
	int size() const
	{
		return _size;
	}
	void push(std::string item)
	{
		if(_size==_capacity)
		{
			throw std::overflow_error("reached max size.");
		}
		_strings[_size++] = item;
	}
	std::string pop(void)
	{
		if(_size==0)
		{
			throw std::underflow_error("stack is empty.");
		}
		return _strings[--_size];
	}
private:
	std::vector<std::string> _strings;
	int _size,_capacity;
};

