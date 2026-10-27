#pragma once

#include <string>
using namespace std;

const string SUITS[4] = {"♣", "♦", "♥", "♠"};
const string RANKS[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

struct Card {
    string rank;
    string suit;

    string to_string() {
        return rank + suit;
    }
};
