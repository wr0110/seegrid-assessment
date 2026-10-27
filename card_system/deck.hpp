#pragma once

#include <vector>
#include "models.hpp"
using namespace std;

class Deck {
public:
    vector<Card> cards;

    Deck();
    void shuffle();
    Card* deal_card();
    int cards_left();

private:
    int index;
    void build_deck();
};
