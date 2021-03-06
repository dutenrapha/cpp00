/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:38:06 by coder             #+#    #+#             */
/*   Updated: 2022/01/19 23:38:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <stdio.h>

static void to_upper(char *argv)
{
	int i;
	
	for (i = 0; argv[i]; i++)
		argv[i] = ::toupper(argv[i]);
	std::cout << argv ;
}

int main(int argc, char** argv)
{
	int i;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"  << std::endl;
	}
	else
	{
		for (i = 1; argv[i]; i++)
			to_upper(argv[i]);
		std::cout << std::endl;
	}
    return 0;
}
