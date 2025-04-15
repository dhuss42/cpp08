/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:18:20 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/15 17:01:56 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	std::cout << "\033[34m\n[----------Constructor Tests----------]\033[37m" << std::endl;
	std::cout << "\033[33m- Constructor\033[37m" << std::endl;
	std::cout << "\033[35m--> adding two numbers and printing\033[37m" << std::endl;
	Span span(4);

	span.addNumber(78);
	span.addNumber(234);
	span.printSpn();

	std::cout << "\033[33m\n- Copy Constructor\033[37m" << std::endl;
	std::cout << "\033[35m--> printing spanCopy\033[37m" << std::endl;
	Span spanCopy(span);
	spanCopy.printSpn();
	std::cout << "\033[35m--> add a number to OG span\033[37m" << std::endl;
	span.addNumber(3);

	std::cout << "\033[33m\n- Assignment overload\033[37m" << std::endl;
	Span spanAssign(3);
	spanAssign = span;
	std::cout << "\033[35m--> add a number to OG span\033[37m" << std::endl;
	span.addNumber(5);
	spanAssign.printSpn();
	std::cout << "\033[35m--> printing spanAssign\033[37m" << std::endl;


	std::cout << "\033[34m\n[----------Exception Tests----------]\033[37m" << std::endl;
	std::cout << "\033[35m--> trying to add one more num than _N\033[37m" << std::endl;
	try
	{
		span.addNumber(5);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span oneN(1);
	oneN.addNumber(2);
	Span empty(2);
	std::cout << "\033[35m--> calling shortest span with _N == 1\033[37m" << std::endl;
	try
	{
		oneN.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[35m--> calling shortest span empty container\033[37m" << std::endl;
	try
	{
		empty.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[35m--> calling longest span with _N == 1\033[37m" << std::endl;
	try
	{
		oneN.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[35m--> calling longest span empty container\033[37m" << std::endl;
	try
	{
		empty.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\033[34m\n[----------shortestSpan Tests----------]\033[37m" << std::endl;
	span.printSpn();
	std::cout << "The shortest span is: " << span.shortestSpan() << std::endl;
	std::cout << "\033[34m\n[----------longestSpan Tests----------]\033[37m" << std::endl;
	span.printSpn();
	std::cout << "The longest span is: " << span.longestSpan() << std::endl;
}