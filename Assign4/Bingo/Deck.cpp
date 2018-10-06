//
// Created by Stephen Clyde on 2/16/17.
//

#include <iostream>
#include "Deck.h"

Deck::Deck(int cardSize, int cardCount, int numberMax)
{
    m_cardCount = cardCount;
      for(int i = 1; i <= m_cardCount; i++){
        m_deck.push_back(new Card(cardSize, numberMax,(i)));
    }
}

void Deck::print(std::ostream& out) const
{
    //std::cout << m_cardCount << std::endl;
       for(int i = 1; i <= m_cardCount; i++){
        print(out,i);
    }
}

void Deck::print(std::ostream& out, int cardIndex) const
{
      m_deck[cardIndex-1]->print(out);
}



