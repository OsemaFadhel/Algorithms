#include <iostream>

template <class T>
class Queue
{
	private:
		struct Node
		{
			T data;
			Node *next;
		};
		Node *head;
		Node *tail;

	public:
		Queue()
		{
			head = NULL;
			tail = NULL;
		}

		~Queue()
		{
			while (head != NULL)
			{
				Node *temp = head;
				head = head->next;
				delete temp;
			}
		}

		void enqueue(T value)
		{
			Node *temp = new Node;
			temp->data = value;
			temp->next = NULL;

			if (head == NULL)
			{
				head = temp;
				tail = temp;
			}
			else
			{
				tail->next = temp;
				tail = temp;
			}
		}

		T dequeue()
		{
			if (head == NULL)
				throw std::out_of_range("Queue is empty");

			Node *temp = head;
			T value = head->data;
			head = head->next;
			delete temp;

			return value;
		}

		bool empty()
		{
			return head == NULL;
		}
};
