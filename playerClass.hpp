//
//  playerClass.hpp
//  monopolyGame
//
//  Created by Retr0 on 5/9/22.
//

#ifndef playerClass_hpp
#define playerClass_hpp


#include <stdio.h>
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <stdio.h>


using namespace std;


class Player {
    
public:
    Player();
    void SetMoney(int& amtMoney);               // sets the money
    void SetLocation();            // sets location
    bool IsJail();                 // determines if player is in jail
    void PlayerProperty();         // holds all protery for player
    void PlayerHouses();           // holds all player houses
    void PlayerHotels();           // holds all player hotels
    void PlayerDeck();             // holds get out of jail cards
    void ChanceDeckAlgo(vector<string>& chanceDeck);
    void ChestDeckAlgo(vector<string>& chestDeck);
    bool DiceDoubles();            // determines dice doubles
    void DiceRoll(int dice1, int dice2); // sets dice roll
    void PlayerBuy();              // player buying function
    void PlayerSell();             // player selling function
    void PlayerBankruptcy();       // determines bankruptcy
    void PropertyRent();           // determines rent based on location/Amt. Houses and Hotels
    
    
    // Accessors
    int GetMoney();
    int GetLocation();
    int GetDicesRolls();
    string GetChanceCards();
    string GetChestCards();
    
    
    // prints all player info
    void Print();
    
    
private:
    int playerMoney;
    int playerLocation;
    bool jail;
    bool passGo;
    vector<string> playerCards;
    vector<string> propertyOwned;
    int playerNumHouses;
    int playerNumHotels;
    int diceRoll1;
    int diceRoll2;
    string nameLocation;
    int propertyCost;
    bool owned;
    bool sold;
    bool bankruptcy;
    
};


#endif /* playerClass_hpp */
