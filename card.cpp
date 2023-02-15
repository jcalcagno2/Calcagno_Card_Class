//
//  card.cpp
//  Card_Class
//
//  Created by Joseph Calcagno on 2/15/23.
//

#include <stdlib.h>
#include "card.h"
#include <string>

card::card(std::string value, std::string suit) {
    this->value = value;
    this->suit = suit;
}

card::~card() {
}

std::string card::getSuit() {
    return suit;
}

std::string card::print_card() {
    return value +" of " + suit + "s";
}


std::string card::suit_equality(card card1, card card2) {
    if (card1.getSuit().compare(card2.getSuit()) == 0) {
        return card1.value + " of " + card1.suit + "s and " + card2.value + " of " + card2.suit + "s are the same suit ";
    }

    return card1.value + " of " + card1.suit + "s and " + card2.value + " of " + card2.suit + "s are not the same suit \n";
}

void card::check_for_face(card card1) {
    
    if (card1.suit == "Jack") card1.value = 11;
    if (card1.suit == "Queen") card1.value = 12;
    if (card1.suit == "King") card1.value = 13;
    if (card1.suit == "Ace") card1.value = 14;
     
    
  
}

std::string card::value_equality(card card1, card card2) {
    card1.check_for_face(card1);
    card2.check_for_face(card2);
    
 if (card1.value == card2.value) {
    return "Card values are equal";
    }
    /*
    if (card1.value < card2.value) {
        return card1.value +" of " + card1.suit + "s has lower value than " + card2.value + " of " + card2.suit + "s\n";
    
    }
    return card1.value +" of " + card1.suit + "s has higher value than " + card2.value + " of " + card2.suit + "s\n";
     */
    return "Card Values are not equal\n";
}

std::string card::compare_greater_value(card card1, card card2) {
    card1.check_for_face(card1);
    card2.check_for_face(card2);
    if (card1.value > card2.value) {
        return card1.value +" of " + card1.suit + "s has higher value than " + card2.value + " of " + card2.suit + "s\n";
    }
    return compare_lesser_value(card1, card2);
}

std::string card::compare_lesser_value(card card1, card card2) {
    card1.check_for_face(card1);
    card2.check_for_face(card2);
    if (card1.value < card2.value) {
        return card1.value +" of " + card1.suit + "s has higher value than " + card2.value + " of " + card2.suit + "s\n";
    }
    return compare_greater_value(card1, card2);
}






