#ifndef VECTOR_H
#define VECTOR_H

template <class T>
class vector {
	private:
		T * arr;
		int size;
		int capacity;
	public:
		vector();
		vector(T);
		~vector();
		void push_back(T);
		void push_front(T);
		T get_size() const;
		T get_capacity() const;
		void erase(T);
		void insert(T, T);
		T operator [] (T);
		vector operator = (const vector&);
};

#include "../src/vector.cpp"
#endif