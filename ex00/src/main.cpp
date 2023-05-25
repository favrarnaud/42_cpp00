/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:32:52 by afavre            #+#    #+#             */
/*   Updated: 2023/05/16 11:32:55 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "JE COMMENCE A EN AVOIR MARRE DES TRAVEAUX !\n";
    else
    {
        int i = 1;
        while (i < ac)
        {
            for (size_t j = 0; j < strlen(av[i]); j++)
            {
                av[i][j] = std::toupper(av[i][j]);
            }
            std::cout << av[i] << " ";
            i++;
        }
        std::cout << "\n";
    }
}
