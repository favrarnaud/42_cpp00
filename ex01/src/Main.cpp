/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:05:30 by afavre            #+#    #+#             */
/*   Updated: 2023/05/16 13:05:50 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"

int main()
{
    std::string buffer;
    PhoneBook book;

    book.welcomeMessage();
    while (buffer != "EXIT")
    {
        if (std::cin.eof())
            break;
        std::cin >> buffer;
        if (buffer == "ADD")
            book.Add();
        else if (buffer == "SEARCH")
            book.searchContact();
        else if (buffer != "EXIT" && !std::cin.eof())
            std::cout << "desoler mais la commande " << buffer << " n'exsiste pas." << std::endl;
    }
    std::cout << "Au plaisir de vous revoir !" << std::endl;
}