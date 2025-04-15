/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:45:07 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/15 14:51:15 by dhuss            ###   ########.fr       */
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

// find first i in T and return
// if no throw exception or return error value


#include "easyfind.tpp"

#endif