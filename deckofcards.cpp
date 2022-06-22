/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：deckofcards.cpp
*   创 建 者：lgd
*   创建日期：2021年11月28日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <array>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Card {
    string face;
    string suit;
};

class DeckofCards {
private:
    static const int numberofcards = 52;
    static const int faces = 13;
    static const int suits = 4;
    array<Card, numberofcards> deck;

public:
    DeckofCards()
    {
        string suit[suits] = { "Hearts", "Diamonds", "Clubs", "Spades" };
        string face[faces] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

        for (int i = 0; i < deck.size(); ++i) {
            deck[i].face = face[i % faces];
            deck[i].suit = suit[i % suits];
        }
    }

    void shuffle()
    {
        for (int i = 0; i < deck.size(); ++i) {
            Card temp = deck[i];
            int j = rand() % numberofcards;
            deck[i] = deck[j];
            deck[j] = temp;
        }
    }

    void deal() const
    {
        for (int i = 0; i < deck.size(); ++i) {
            cout << right << setw(5) << deck[i].face << " of "
                 << left << setw(8) << deck[i].suit
                 << ((i + 1) % 2 ? '\t' : '\n');
        }
    }
};

int main()
{
    DeckofCards deckofcards;
    deckofcards.shuffle();
    deckofcards.deal();
    return 0;
}
