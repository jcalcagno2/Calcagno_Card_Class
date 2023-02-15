//
//  main.cpp
//  Card_Class
//
//  Created by Joseph Calcagno on 2/15/23.
//

#include <iostream>
#include <stdlib.h>
#include "card.h"

int main(int argc, const char * argv[]) {
    
    //Creating cards
    card card1("Queen", "Diamond");
    card card2(std::to_string(10), "Diamond");
    card card3("King", "Club");
    card card4(std::to_string(4), "Spade");
    card card5(std::to_string(2), "Diamond");
    
    //card array for easy printing
    class card card_array[5] = {card1, card2, card3, card4, card5};
    
    //displaying cards
    for (int i = 0; i<5; i++) {
        std::cout<<card_array[i].print_card()<<std::endl;
    }
    std::cout<<"\n";
    
    //Test or suit equality
    std::cout<<card4.suit_equality(card4, card2)<<std::endl;
    
    
    //Test Card value equality
std::cout<<card3.value_equality(card3, card4)<< std::endl;
    
    //Display if card is lesser or greater value
std::cout<<card3.compare_lesser_value(card3, card4) <<std::endl;
    

    
    
    
    
    
   
    return 0;
}
