/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:14:09 by afavre            #+#    #+#             */
/*   Updated: 2023/05/16 13:14:14 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

void Contact::init()
{
    if (!std::cin.eof())
        std::cout << "veuillez rensseigner un prenom : ";
    std::cin >> this->FirstName;
    if (!std::cin.eof())
        std::cout << "veuillez rensseigner un nom : ";
    std::cin >> this->LastName;
    if (!std::cin.eof())
        std::cout << "veuillez rensseigner un surnom : ";
    std::cin >> this->Nickname;
    if (!std::cin.eof())
        std::cout << "veuillez rensseigner un numero de telephone : ";
    std::cin >> this->PhoneNumber;
    if (!std::cin.eof())
        std::cout << "veuillez rensseigner un secret honteux  😈: ";
    std::cin >> this->DarkestSecret;
    if (!std::cin.eof())
        std::cout << "--- Utilisateur ajoute avec succes ! ---" << std::endl;
}

void Contact::printFullInfo()
{
    std::cout << std::endl << "Voici les informations que je possede : " << std::endl;
    std::cout << " Prenom : " << this->getFirstName() << std::endl;
    std::cout << " Nom : " << this->getLastName() << std::endl;
    std::cout << " Surnom : " << this->getNickname() << std::endl;
    std::cout << " tel : " << this->getPhoneNumber() << std::endl;
    std::cout << " secret : " << this->getDarkestSecret() << std::endl;
}

// Firstname
void Contact::setFirstName(std::string value)
{
    this->FirstName = value;
}

std::string Contact::getFirstName()
{
    return this->FirstName;
}

// Lastname
void Contact::setLastName(std::string value)
{
    this->LastName = value;
}

std::string Contact::getLastName()
{
    return this->LastName;
}

// Nickname
void Contact::setNickname(std::string value)
{
    this->Nickname = value;
}

std::string Contact::getNickname()
{
    return this->Nickname;
}

// phone number
void Contact::setPhoneNumber(std::string value)
{
    this->PhoneNumber = value;
}

std::string Contact::getPhoneNumber()
{
    return this->PhoneNumber;
}

// Darkest secret
void Contact::setDarkestSecret(std::string value)
{
    this->FirstName = value;
}

std::string Contact::getDarkestSecret()
{
    return this->DarkestSecret;
}
