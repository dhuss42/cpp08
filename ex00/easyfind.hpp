/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:45:07 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/15 16:28:56 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <exception>

/*----------------------*/
/* STL					*/
/* -> containers		*/
/* -> iterators			*/
/* -> Algorithms		*/
/*----------------------*/

template<typename T>
typename T::iterator easyfind(T& container, int i);

#include "easyfind.tpp"

#endif