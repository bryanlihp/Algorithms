#pragma once
#include <vector>
#include <stdexcept>


namespace algorithm::datastructure
{
	template<typename  T>
	class FixedCapacityStack
	{
	public:
		FixedCapacityStack(int capacity)
			: _size(0)
			, _capacity(capacity)
		{
			_container.resize(capacity);
		}

		bool isEmpty() const
		{
			return 0 == _size;
		}
		int size() const
		{
			return _size;
		}

		void push(T item)
		{
			if (_size == _capacity)
			{
				throw std::overflow_error("reached max size.");
			}
			_container[_size++] = item;
		}

		T pop(void)
		{
			if (_size == 0)
			{
				throw std::underflow_error("stack is empty.");
			}
			return _container[--_size];
		}
	private:
		std::vector<T> _container;
		int _size, _capacity;
	};
}

