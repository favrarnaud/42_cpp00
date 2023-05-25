/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:14:20 by afavre            #+#    #+#             */
/*   Updated: 2023/05/16 13:14:25 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_CONTACT_H
#define CPP00_CONTACT_H

#include <iostream>
#include <cstdlib>

class Contact {
    public:
        void init();
        void printFullInfo();

        void setFirstName(std::string name);
        std::string getFirstName();
        void setLastName(std::string name);
        std::string getLastName();
        void setNickname(std::string name);
        std::string getNickname();
        void setPhoneNumber(std::string name);
        std::string getPhoneNumber();
        void setDarkestSecret(std::string name);
        std::string getDarkestSecret();

    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
};

#endif //CPP00_CONTACT_H
