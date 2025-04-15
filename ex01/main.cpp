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
	Span span(4);

	span.addNumber(1);
	span.addNumber(2);
	span.addNumber(3);
	span.addNumber(4);
	span.printSpn();
	try
	{
		span.addNumber(5);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}