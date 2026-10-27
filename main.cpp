#ifdef _WIN32
#include <windows.h>  // must come before "using namespace std"
#endif
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "card_system/card_system.hpp"
using namespace std;

void run_game() {
    cout << "--- Initializing Deck ---" << endl;
    Deck deck;
    cout << "Cards created: " << deck.cards.size() << endl;

    cout << "\n--- Shuffling Deck ---" << endl;
    deck.shuffle();

    cout << "\n--- Dealing 5 Cards (Poker Hand) ---" << endl;
    cout << "Your Hand: [";
    for (int i = 0; i < 5; i++) {
        Card* card = deck.deal_card();
        if (i > 0) cout << ", ";
        cout << card->to_string();
    }
    cout << "]" << endl;
    cout << "Remaining cards in deck: " << deck.cards_left() << endl;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    srand(time(0));
    run_game();
    return 0;
}
