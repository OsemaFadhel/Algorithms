#include <iostream>

template <class T>
class Queue
{
	private:
		int _head = 0;
		int _tail = 0;
		int _size = 0;
		int _capacity;
		T *arr;
	public:
		Queue(int capacity)
		{
			arr = new T[_capacity];
		}

		~Queue()
		{
			delete[] arr;
		}

		T &front()
		{
			if (_size > 0)
				return arr[_head];
			throw std::out_of_range("Queue Empty");
		}

		T &back()
		{
			if (_size > 0)
				return arr[_tail];
			throw std::out_of_range("Queue Empty");
		}

		bool empty()
		{
			return _size == 0;
		}

		int size()
		{
			return size;
		}

		void enqueue(T value)
		{
			if (_size == _capacity)
				throw std::overflow_error("Queue Full");
			arr[_tail] = value;
			_tail = (_tail + 1) % _capacity; //wrap around
			_size++;
		}

		T dequeue()
		{
			if (_size == 0)
				return std::out_of_range("Queue Empty");
			T ret = arr[_head];
			_head = (_head + 1) % _capacity;
			_size--;
			return ret;
		}
};
