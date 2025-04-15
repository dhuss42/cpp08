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

Span::Span() : _N(0)
{
}

Span::Span(size_t N) : _N(N)
{
}

// Span::Span(const Span& src)
// {
// }

// Span& Span::operator=(const Span& other)
// {
// }

Span::~Span()
{
}

const char* Span::SpanFull::what() const _NOEXCEPT
{
	return ("Span is already full");
}

void	Span::addNumber(const int& num)
{
	if (_spn.size() >= _N)
		throw(SpanFull());
	else
	{
		_spn.push_back(num);
	}
}
// adds a number to the Span
// used to fill it
// if there are already N elements throw an exception

void	Span::printSpn()
{
	std::cout << "contents of Span:" << std::endl;
	for (size_t i = 0; i < _spn.size(); i++)
		std::cout << "\t[" << i << "]: " << _spn[i] << std::endl;
}