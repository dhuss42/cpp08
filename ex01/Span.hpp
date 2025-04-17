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

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
	private:
		size_t				_N;
		std::vector<int>	_spn;
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

		Span();
		Span(size_t N);
		Span(const Span& src);
		Span& operator=(const Span& other);
		~Span();

		void	addNumber(const int& num);
		template <typename It>
		void	addNumberRange(It begin, It end);

		size_t	shortestSpan() const;
		size_t	longestSpan() const;
		size_t	getN();
		void	printSpn();
};

#include "Span.tpp"

#endif