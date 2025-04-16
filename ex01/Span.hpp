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
#include <algorithm>

class Span
{
	private:
		size_t				_N;
		std::vector<size_t>	_spn;
	public:

		class SpanFull: public std::exception
		{
			public:
				const char* what() const noexcept;
		};
		class SpanTooSmall: public std::exception
		{
			public:
				const char* what() const noexcept;
		};
		class NTooSmall: public std::exception
		{
			public:
				const char* what() const noexcept;
		};

		Span();
		Span(size_t N);
		Span(const Span& src);
		Span& operator=(const Span& other);
		~Span();

		void	addNumber(const int& num);
		/*--------------------------------------------------*/
		/* - Counts elements to add 						*/
		/* - makes sure there is enough space				*/
		/* - inserts them at the end of _spn				*/
		/* std::distance 									*/
		/* 	- returns distance between two iterators		*/
		/* insert() 										*/
		/* 	- inserts the values ranging from begin 		*/
		/* 		to end at _spn.end()  						*/
		/*--------------------------------------------------*/
		template <typename It>
		void	addNumberRange(It begin, It end)
		{
			if (std::distance(begin, end) + _spn.size() > _N)
				throw (SpanFull());
			_spn.insert(_spn.end(), begin, end);
		}

		size_t	shortestSpan() const;
		size_t	longestSpan();
		size_t	getN();
		void	printSpn();
};