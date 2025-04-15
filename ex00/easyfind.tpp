/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:03:52 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/15 16:12:25 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

/*------------------------------------------------------*/
/* runtime_error										*/
/* 	->	something went wrong while running the program	*/
/*------------------------------------------------------*/

template <typename T>
typename T::iterator easyfind(T& container, int i)
{
	auto it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw (std::runtime_error("Value not found in container"));
	return (it);
}
