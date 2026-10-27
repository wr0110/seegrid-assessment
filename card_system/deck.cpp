#include <cstdlib>
#include <algorithm>
#include "deck.hpp"

Deck::Deck() {
    index = 0;
    build_deck();
}

void Deck::build_deck() {
    cards.clear();
    for (int s = 0; s < 4; s++) {
        for (int r = 0; r < 13; r++) {
            Card card;
            card.rank = RANKS[r];
            card.suit = SUITS[s];
            cards.push_back(card);
        }
    }
}

void Deck::shuffle() {
    if (index >= cards.size()) {
        build_deck();
    }

    int n = cards.size();
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(cards[i], cards[j]);
    }

    index = 0;
}

Card* Deck::deal_card() {
    if (index >= cards.size()) {
        return nullptr;
    }

    Card* card = &cards[index];
    index++;
    return card;
}

int Deck::cards_left() {
    return cards.size() - index;
}
