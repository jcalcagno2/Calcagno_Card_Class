//
//  card.h
//  Card_Class
//
//  Created by Joseph Calcagno on 2/15/23.
//

#pragma once

#include <iostream>
class card
{
public:
    card(std::string value, std::string suit);
    ~card();
    

public:
    std::string getValue();

public:
    std::string getSuit();
    
public:
    std::string compare_greater_value(card value1, card value2);

public:
    std::string compare_lesser_value(card card1, card card2);
    
public:
    std::string suit_equality(card card1, card card2);
    
public:
    std::string value_equality(card card1, card card2);
    
public:
    std::string print_card();

public:
    void check_for_face(card card1);
    

    
    
protected:
    std::string value;
    std::string suit;
    
    
    
    
    
    
};
