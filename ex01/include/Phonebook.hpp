/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:11:47 by afavre            #+#    #+#             */
/*   Updated: 2023/05/16 13:11:55 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_PHONEBOOK_H
#define CPP00_PHONEBOOK_H

#include "../include/Contact.hpp"

class PhoneBook {
    public:
		PhoneBook();
        void welcomeMessage();
        void Add();
        void searchContact();
        void printData();
        void showInfo();
    private:
        Contact book[8];
        int     nb_contact;
};

#endif //CPP00_PHONEBOOK_H
