/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:27:48 by dhuss             #+#    #+#             */
/*   Updated: 2025/05/06 09:27:50 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*---------------------------*/
/* Default constructur		 */
/*---------------------------*/
template <typename T>
MutantStack<T>::MutantStack()
{
}

/*---------------------------*/
/* Copy constructur		 	 */
/*---------------------------*/
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src) : std::stack<T>(src)
{
}

/*---------------------------*/
/* Assignment op overload	 */
/*---------------------------*/
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return (*this);
}

/*---------------------------*/
/* Destructor				 */
/*---------------------------*/
template <typename T>
MutantStack<T>::~MutantStack()
{
}

//---------------iterators---------------//

/*------------------------------------------------------------------*/
/* Iterator begin			 										*/
/* 		typename: tells compiler iterator is a type, 				*/
/* 			compiler might interpret it wrong otherwise				*/
/* 		std::stack<T>: refers to base class we are inherting from	*/
/* 		container_type: refering to underlying container			*/
/*		iterator: accessing iterators of underlying container		*/
/*  																*/
/* Function Body 													*/
/* 		c:	underlying container structor that has iterators 		*/
/*------------------------------------------------------------------*/
template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

/*---------------------------*/
/* iterator end				 */
/*---------------------------*/
template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

/*---------------------------*/
/* iterator rbegin			 */
/*---------------------------*/
template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

/*---------------------------*/
/* iterator rend			 */
/*---------------------------*/
template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

//---------------const iterators---------------//

/*---------------------------*/
/* interator cbegin			 */
/*---------------------------*/
template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::cbegin() const
{
	return (this->c.cbegin());
}

/*---------------------------*/
/* iterator cend			 */
/*---------------------------*/
template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::cend() const
{
	return (this->c.cend());
}

/*---------------------------*/
/* iterator crbegin			 */
/*---------------------------*/
template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::crbegin() const
{
	return (this->c.crbegin());
}

/*---------------------------*/
/* iterator crend			 */
/*---------------------------*/
template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::crend() const
{
	return (this->c.crend());
}
