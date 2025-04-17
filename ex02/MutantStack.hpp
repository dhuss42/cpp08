#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

/*------------------------------------------------------------------------------*/
/* Stack is a container adapater 												*/
/*  - underlying data structure is another container (deque/vector) 			*/
/*  - Stack is a limited implementation of this container conforming to 		*/
/*		the rules of a stack 													*/
/*------------------------------------------------------------------------------*/
template <typename T> 
class MutantStack : public std::stack<T>
{
	private:
		
	public:
		MutantStack();
		MutantStack(const MutantStack& src);
		MutantStack& operator=(const MutantStack& other);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		typename std::stack<T>::container_type::iterator begin();
		typename std::stack<T>::container_type::iterator end();
		typename std::stack<T>::container_type::reverse_iterator rbegin();
		typename std::stack<T>::container_type::reverse_iterator rend();

		typename std::stack<T>::container_type::const_iterator cbegin() const;
		typename std::stack<T>::container_type::const_iterator cend() const;
		typename std::stack<T>::container_type::const_reverse_iterator crbegin() const;
		typename std::stack<T>::container_type::const_reverse_iterator crend() const;
};

#include "MutantStack.tpp"

#endif