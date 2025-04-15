/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:03:57 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/15 16:03:58 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main()
{
	std::cout << "\033[34m\n[----------Tests----------]\033[37m" << std::endl;
	std::cout << "\033[33m- vector\033[37m" << std::endl;
	std::cout << "\033[35m--> value found in container\033[37m" << std::endl;
	std::vector<int> intArr;
	intArr.push_back(1);
	intArr.push_back(4);
	intArr.push_back(2);
	intArr.push_back(3);
	intArr.push_back(2);
	try {
		auto iter = easyfind(intArr, 2);
		std::cout << "Found value: " << *iter << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[35m--> value not found in container\033[37m" << std::endl;
	try {
		auto iter = easyfind(intArr, 6);
		std::cout << "Found value: " << *iter << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::list<int> intLst;
	intLst.push_back(1);
	intLst.push_back(78);
	intLst.push_back(66);
	intLst.push_back(5);
	intLst.push_back(3);
	intLst.push_back(2);
	intLst.push_back(3);
	std::cout << "\033[33m- list\033[37m" << std::endl;
	std::cout << "\033[35m--> value found in container\033[37m" << std::endl;
	try {
		auto iter = easyfind(intLst, 3);
		std::cout << "Found value: " << *iter << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[35m--> value not found in container\033[37m" << std::endl;
	try {
		auto iter = easyfind(intArr, 6);
		std::cout << "Found value: " << *iter << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
