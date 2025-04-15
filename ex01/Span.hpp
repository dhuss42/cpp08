/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:18:26 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/15 17:00:02 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <exception>

class Span
{
	private:
		size_t				_N;
		std::vector<size_t>	_spn;
	public:

	class SpanFull: public std::exception
		{
			public:
				const char* what() const _NOEXCEPT;
		};

		Span();
		Span(size_t N);
		Span(const Span& src);
		Span& operator=(const Span& other);
		~Span();

		void	addNumber(const int& num);
		// adds a number to the Span
		// used to fill it
		// if there are already N elements throw an exception

		size_t	shortestSpan(const int& num);
		size_t	longestSpan(const int& num);
		// finds the distane between the passed numbers
		// if no number or only one throw an exception

		void	printSpn();
};

// can store a max of N int
// N is size_t only parameter passed in constructor

// test Span with at least 10.000 number more is even better