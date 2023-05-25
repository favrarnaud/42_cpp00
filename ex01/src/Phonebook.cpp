/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:11:11 by afavre            #+#    #+#             */
/*   Updated: 2023/05/16 13:11:20 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->nb_contact = 0;
}

void PhoneBook::welcomeMessage()
{
    std::cout << "----------------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "\033[32mBienvenue dans le pire systeme de bottin que vous ayez connue !\033[0m" << std::endl;
    std::cout << "****************************************************************************************************************" << std::endl;
    std::cout << "\033[33mles commandes a votre disposition sont les suivantes :" << std::endl;
    std::cout << "ADD : Vous permet d'ajouter un utilisateur a votre botin personel." << std::endl;
    std::cout << "SEARCH : Vous permet de faire une recherche par ID dans votre bottin personel." << std::endl;
    std::cout << "EXIT : Vous permet de fermer votre bottin personel.\033[0m" << std::endl;
    std::cout << "****************************************************************************************************************" << std::endl;
    std::cout << "\033[31m  ** pour acceder a la commande HELP, il suffit de frapper sur l'idiot qui a developper cette chose," << std::endl;
    std::cout << "  ** il se fera un plaisir de vous repondre !\033[0m" << std::endl;
    std::cout << "----------------------------------------------------------------------------------------------------------------" << std::endl;
}

void    PhoneBook::Add(void)
{
    static int i;

    this->book[i % 8].init();
    if (this->nb_contact < 8)
        this->nb_contact++;
    i++;
}

void printTabHead()
{
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "| id |   nom    |  prenom  |  surnom  |  numero  |  secret  |" << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
}

void formatString(std::string value)
{
    int addSpace = 10 - value.length();

    if (addSpace >= 0)
    {
        if ((addSpace % 2) == 0)
        {
            for (int i = 0; i < (addSpace / 2); i++)
                std::cout << " ";
            std::cout << value;
            for (int i = 0; i < (addSpace / 2); i++)
                std::cout << " ";
        }
        else
        {
            for (int i = 0; i < (addSpace / 2); i++)
                std::cout << " ";
            std::cout << value << " ";
            for (int i = 0; i < (addSpace / 2); i++)
                std::cout << " ";
        }
    }
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << value[i];
        std::cout << ".";
    }
}

void PhoneBook::printData()
{
    Contact *book = this->book;
    for (int i = 0; i < (this->nb_contact); i++)
    {
        std::cout << "| " << i + 1 << "  |";
        formatString(book[i].getFirstName());
        std::cout << "|";
        formatString(book[i].getLastName());
        std::cout << "|";
        formatString(book[i].getNickname());
        std::cout << "|";
        formatString(book[i].getPhoneNumber());
        std::cout << "|";
        formatString(book[i].getDarkestSecret());
        std::cout << "|" << std::endl;
        std::cout << "-------------------------------------------------------------" << std::endl;
    }
}

void PhoneBook::showInfo()
{
	std::string num;
	int valide = 0;

	if (std::cin.eof())
	{
		std::cout << "\n";
	}
	while (valide != 1 && !std::cin.eof())
	{
		std::cout << "Veuillez entree l\"ID de l'entree souhaiter : ";
		std::cin >> num;
		int test = atoi(num.c_str());
		if ((test <= 0 || test > this->nb_contact) && !std::cin.eof())
			std::cout << "Desoler mais je ne peut pas inventer des entree a votre bottin !" << std::endl;
		else if (!std::cin.eof())
		{
			this->book[test - 1].printFullInfo();
			std::cout << std::endl << "Retour au menu principal !" << std::endl;
			valide = 1;
		}
	}
}

void PhoneBook::searchContact()
{
    if (this->nb_contact == 0)
        std::cout << "Je suis desoler mais je suis desessperement vide ! \n\tSigner \"ton bottin\"" << std::endl;
    else
    {
        printTabHead();
        printData();
        showInfo();
    }
}
