/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:18:23 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/15 17:01:27 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*---------------------------*/
/* Default constructor		 */
/*---------------------------*/
Span::Span() : _N(0)
{
}

/*------------------------------*/
/* Constructor		 			*/
/*------------------------------*/
Span::Span(size_t N) : _N(N)
{
}

/*------------------------------*/
/* Copy constructor		 		*/
/*------------------------------*/
Span::Span(const Span& src) : _N(src._N)
{
	if (!src._spn.empty())
	{
		for (size_t i = 0; i < src._spn.size(); i++)
			addNumber(src._spn[i]);
	}
}

/*------------------------------*/
/* Assignment overload	 		*/
/*------------------------------*/
Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_N = other._N;
		for (size_t i = 0; i < other._spn.size(); i++)
			addNumber(other._spn[i]);
	}
	return (*this);
}

/*------------------------------*/
/* Destructor		 			*/
/*------------------------------*/
Span::~Span()
{
}

/*------------------------------*/
/* Exception Span full	 		*/
/*------------------------------*/
const char* Span::SpanFull::what() const noexcept
{
	return ("Span is already full");
}

/*------------------------------*/
/* Exception Span to small		*/
/*------------------------------*/
const char* Span::SpanTooSmall::what() const noexcept
{
	return ("Span only has one value or is empty");
}

//------------member functions--------------//

/*------------------------------*/
/* addNumber member function	*/
/*------------------------------*/
void	Span::addNumber(const int& num)
{
	if (_spn.size() >= _N)
		throw(SpanFull());
	_spn.push_back(num);
}

/*--------------------------------------*/
/* shortestSpan member function			*/
/* 	- checks for size					*/
/*	- makes copy						*/
/*		- sorts copy					*/
/*		- compares adjacant values diff */
/* 		- if small updates diff			*/
/*--------------------------------------*/
size_t	Span::shortestSpan() const
{
	if (_spn.size() < 2)
		throw(SpanTooSmall());
	
	Span tmp(*this);
	int diff = INT_MAX;
	std::sort(tmp._spn.begin(), tmp._spn.end());
	for (auto it = tmp._spn.begin(); it != tmp._spn.end() - 1; ++it)
	{
		if ((*(it +1) - *it) < diff)
			diff = (*(it +1) - *it);
	}
	return (diff);
}

/*----------------------------------*/
/* longestSpan member function		*/
/* 	- checks for size				*/
/*	- makes copy					*/
/*		- sorts copy				*/
/*		- subtracts front from end 	*/
/*----------------------------------*/
size_t	Span::longestSpan() const
{
	if (_spn.size() < 2)
		throw(SpanTooSmall());

	Span tmp(*this);
	std::sort(tmp._spn.begin(), tmp._spn.end());
	return (tmp._spn.back() - tmp._spn.front());
}

//------------getter and printer--------------//

/*------------------------------*/
/* getN					 		*/
/*------------------------------*/
size_t	Span::getN()
{
	return (_N);
}

/*------------------------------*/
/* printSpn				 		*/
/*------------------------------*/
void	Span::printSpn()
{
	std::cout << "size of Span: " << getN() << "\ncontents of Span:" << std::endl;
	for (size_t i = 0; i < _spn.size(); i++)
		std::cout << "\t[" << i << "]: " << _spn[i] << std::endl;
}
