//
//  playerClass.cpp
//  monopolyGame
//
//  Created by Retr0 on 5/9/22.
//

#include "playerClass.hpp"

Player::Player() {
    
    playerMoney = 1500;
    playerLocation = 0;
    jail = false;
    passGo = false;
    diceRoll1 = 0;
    diceRoll2 = 0;
    nameLocation = "NoNAme";
    
}


// sets the dice rolls for the player turn
void Player::DiceRoll(int dice1, int dice2) {
    
    diceRoll1 = dice1;
    diceRoll2 = dice2;
    
}



int Player::GetDicesRolls() {
    
    return diceRoll1;
    return diceRoll2;
}


// tracks player location and costs
void Player::SetLocation() {
    
    playerLocation = diceRoll1 + diceRoll2 + playerLocation;
    
    
        bool passgo;
    for (int i = 0; i < 1; i++)
        if (playerLocation > 0) {
            passgo = true;
        }

        else {
            passgo = false;
        }
    try {
        if (playerLocation > 39) {
            playerLocation = playerLocation - 39;
        } else if (playerLocation < 0) {
            throw runtime_error("Invalid Dice Value");
        
        }
    }catch (runtime_error& excpt) {
        cout << excpt.what();
        cout << "Can't use this value\n";
    }
        switch (playerLocation) {
        case 0:
            nameLocation = "Go";
            passgo = true;
                playerLocation = 0;
            break;
        case 1:
            
                nameLocation = "Meditarianin Ave. Cost: $60";
                propertyCost = 60;
                playerLocation = 1;
                owned = false;
            
           
            break;
        case 2:
                nameLocation = "Community Chest ";
                playerLocation = 2;
                owned = false;

                
            break;
        case 3:
                nameLocation = "Baltic Ave. Cost: $60";
                propertyCost = 60;
                playerLocation = 3;
                owned = false;

        
            break;
        case 4:
                nameLocation = "Income Tax";
                playerLocation = 4;
                owned = true;

            
            break;
        case 5:
                nameLocation = "Reading Railroad.";
                propertyCost = 200;
                playerLocation = 5;
                owned = false;

            
            break;
        case 6:
                nameLocation = "Oriental Ave.";
                propertyCost = 100;
                playerLocation = 6;
                owned = false;

    
           
            break;
        case 7:
                nameLocation = "Chance Card";
                playerLocation = 7;
                //owned = false;

            break;
                
                
        case 8:
                nameLocation = "Vermont Ave.";
                propertyCost = 100;
                playerLocation = 8;
                owned = false;
                break;
                
                
        case 9:
                nameLocation = "Connecticut Ave.";
                propertyCost = 120;
                playerLocation = 9;
                owned = false;
                break;
                
                
        case 10:
                nameLocation = "Just Visiting Jail";
                playerLocation = 10;
                owned = false;


            
            break;
        case 11:
                nameLocation = "St. Charles Place";
                propertyCost = 140;
                playerLocation = 11;
                owned = false;

            
            break;
        case 12:
                nameLocation = "Electric Company";
                propertyCost = 150;
                playerLocation = 12;
                owned = false;

                
         
        case 13:
                nameLocation = "States Ave.";
                propertyCost = 140;
                playerLocation = 13;
                owned = false;

           
            break;
        case 14:
                nameLocation = "Virginia Ave.";
                propertyCost = 160;
                playerLocation = 14;
                owned = false;

            
            break;
        case 15:
                nameLocation = "Pennsylvania Railroad";
                propertyCost = 200;
                playerLocation = 15;
                owned = false;

            
            break;
        case 16:
                nameLocation = "St. James Place";
                propertyCost = 180;
                playerLocation = 16;
                owned = false;

            
            break;
        case 17:
                nameLocation = "Community Chest";
                playerLocation = 17;
                owned = true;

            
            break;
        case 18:
                nameLocation = "Tennesse Ave.";
                propertyCost = 180;
                playerLocation = 18;
                owned = false;

            
            break;
        case 19:
                nameLocation = "New York Ave.";
                propertyCost = 200;
                playerLocation = 19;
                owned = false;
            
            break;
        case 20:
                nameLocation = "Free Parking";
                playerLocation = 20;
                owned = false;
            
            break;
        case 21:
                nameLocation = "Kentucky Ave.";
                propertyCost = 220;
                playerLocation = 21;
                owned = false;
            
            break;
        case 22:
                nameLocation = "Chance";
                playerLocation = 22;
            
            break;
        case 23:
                nameLocation = "Indiana Ave.";
                propertyCost = 240;
                playerLocation = 23;
                owned = false;
            
            break;
        case 24:
                nameLocation = "Illinois Ave.";
                playerLocation = 24;
                owned = false;
            
            break;
        case 25:
                nameLocation = "B. & O. Railroad";
                propertyCost = 200;
                playerLocation = 25;
                owned = false;
            
            break;
        case 26:
                nameLocation = "Atlantic Ave.";
                propertyCost = 260;
                playerLocation = 26;
                owned = false;
            
            break;
        case 27:
                nameLocation = "Ventinor Ave.";
                propertyCost = 260;
                playerLocation = 27;
                owned = false;
            
            break;
        case 28:
                nameLocation =  "Water Works";
                propertyCost = 150;
                playerLocation = 28;
                owned = false;
            
            break;
        case 29:
                nameLocation = "Marvin Gardens";
                propertyCost = 280;
                playerLocation = 29;
                owned = false;
           
            break;
        case 30:
                nameLocation = "Go to Jail";
                playerLocation = 30;
            
            break;
        case 31:
                nameLocation = "Pacific Ave.";
                propertyCost = 300;
                playerLocation = 31;
                owned = false;
            
            break;
        case 32:
                nameLocation = "North Carolina Ave.";
                propertyCost = 300;
                playerLocation = 32;
                owned = false;
            
            break;
        case 33:
                nameLocation = "Community Chest";
                playerLocation = 33;
                owned = true;
            
            break;
        case 34:
                nameLocation = "Pennsylvania Ave.";
                playerLocation = 34;
                owned = false;
            
            break;
        case 35:
                nameLocation = "Short Line";
                propertyCost = 200;
                playerLocation = 35;
                owned = false;
            
            break;
        case 36:
                nameLocation = "Chance";
                playerLocation = 36;
                owned = true;
        
            break;
        case 37:
                nameLocation = "Park Place";
                propertyCost = 350;
                playerLocation = 37;
                owned = false;
        
            break;
        case 38:
                nameLocation = "Luxury Tax";
                propertyCost = 100;
                playerLocation = 38;
                owned = false;
            
            break;
        case 39:
                nameLocation = "Boardwalk";
                propertyCost = 400;
                playerLocation = 39;
                owned = false;
            
            break;

        }
    
}



int Player::GetLocation() {
    return playerLocation;
}


// sets player money, needs some work for all locations
void Player::SetMoney(int& amtMoney) {
    
    if (playerLocation == 4) {
        
        playerMoney -= 200;
        
    } else if (playerLocation == 38) {
        
        playerLocation -= 350;
        
    }
    
    
    
}


// deck algorithm for randomly printing a chest card
void Player::ChestDeckAlgo(vector<string>& chestDeck) {
    
    srand(time(0));
    
    if ((playerLocation = 2) || (playerLocation == 15) || (playerLocation == 31)) {

            for (int i = 0; i < 1; ++i) {
            
                int randCard = rand() % chestDeck.size();
                //cout << deck.at(randCard) << endl;


                if (chestDeck.at(randCard) == chestDeck.at(0)) {
                
                    cout << chestDeck.at(randCard) << endl;
                    playerCards.push_back(chestDeck.at(0));
                    chestDeck.erase(chestDeck.begin() + 0);
                    break;
                
                } else if (chestDeck.at(randCard) == chestDeck.at(1)) {
                    playerMoney += 200;
                    cout << chestDeck.at(1) << endl;
                    playerLocation = 0;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(2)) {
                    
                    playerMoney += 200;
                    cout << chestDeck.at(2) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(3)) {
                
                    playerMoney -= 50;
                    cout << chestDeck.at(3) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(4)) {
                
                        playerMoney += 50;
                        cout << chestDeck.at(4) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(5)) {
                
                    jail = true;
                    cout << chestDeck.at(5) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(6)) {
                
                    playerMoney += 100;
                    cout << chestDeck.at(6) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(7)){
                    
                    playerMoney += 20;
                    cout << chestDeck.at(7) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(8)) {
            // FIXME, collect 10 from each player
                
            
                } else if (chestDeck.at(randCard) == chestDeck.at(9)) {
                
                    playerMoney += 100;
                    cout << chestDeck.at(9) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(10)) {
                
                    playerMoney += 100;
                    cout << chestDeck.at(10) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(11)) {
                
                    playerMoney -= 100;
                    cout << chestDeck.at(11) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(12)) {
                
                    playerMoney -= 50;
                    cout << chestDeck.at(12) << endl;
                    break;
                } else if (chestDeck.at(randCard) == chestDeck.at(13)) {
                
                    playerMoney += 25;
                    cout << chestDeck.at(13) << endl;
                    break;
                }
            
            
                else {
                
                    break;
                
            }
        }
    }
    
}


// deck algorithm for printing a frandom chance card
void Player::ChanceDeckAlgo(vector<string>& chanceDeck) {
    srand(time(0));
    
    if ((playerLocation = 7) || (playerLocation == 24) || (playerLocation == 33)) {
    
        for (int i = 0; i < 1; i++) {
        
            int randCard = rand() % chanceDeck.size();
        
                if (chanceDeck.at(randCard) == chanceDeck.at(0)) {
                playerLocation = 39;
                cout << chanceDeck.at(0);
            
                } else if(chanceDeck.at(randCard) == chanceDeck.at(1)) {
            
                    playerLocation = 0;
                    playerMoney += 200;
                    cout << chanceDeck.at(1);
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(2)) {
                    // FIXME needs to find a way to advance to location and if pass go, collect $200
                    //playerLocation += (playerLocation + )
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(3)) {
            
                    // same as above
                } else if (chanceDeck.at(randCard) == chanceDeck.at(4)) {
            
                    // FIXME if unowned (nearest railroad)
                    
                    cout << chanceDeck.at(4);
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(5)) {
            
                    // same as above
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(6)) {
            
                    // same as above (utility)
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(7)) {
            
                    playerMoney += 50;
                    // subtract 50 from bank
                    cout << chanceDeck.at(7) << endl;
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(8)) {
           
                    cout << chanceDeck.at(randCard) << endl;
                    playerCards.push_back(chanceDeck.at(0));
                    chanceDeck.erase(chanceDeck.begin() + 0);
                    break;
 
                } else if (chanceDeck.at(randCard) == chanceDeck.at(9)) {
            
                    playerLocation -= 3;
                    cout << chanceDeck.at(9);
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(10)) {
            
                    jail = true;
                    cout << chanceDeck.at(10) << endl;
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(11)) {
            
                    // make property vector to pay for each house and/or hotel
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(12)) {
            
                    playerMoney -= 15;
                    cout << chanceDeck.at(12) << endl;
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(13)) {
            
                    passGo = true;
                    cout << chanceDeck.at(13) << endl;
                } else if (chanceDeck.at(randCard) == chanceDeck.at(14)) {
            
            // pay each player 50
            
                } else if (chanceDeck.at(randCard) == chanceDeck.at(15)) {
            
                    playerMoney += 150;
                    cout <<  chanceDeck.at(15) << endl;
            
                }
            }
        }

}

// buy/sell/trade/deal functions
// should only be called on certain locations if property is owned
void Player::PlayerBuy() {
    char userInput;
    if ((playerLocation != 2) && (playerLocation != 17) && (playerLocation != 33) && (playerLocation != 7 ) && (playerLocation != 22) && (playerLocation != 36) && (playerLocation != 4)  && (playerLocation != 10) && (playerLocation != 12) && (playerLocation != 20) && (playerLocation != 22) && (playerLocation != 30) &&  (playerLocation != 38) && (playerLocation != 0 ) && (owned == false)) {
        
        cout << "Would you like to buy: " << nameLocation << " y/n " << endl;
        cin >> userInput;
    
        if (userInput == 'y') {
        
            playerMoney -= propertyCost;
            owned = true;
            
        
        } else {
            cout << "Ok, carry on\n";
            //owned = false;
            
        
        }
    }
        
}




void Player::PlayerBankruptcy() {
    
    char userInput;
    
    if (playerMoney < 0) {
        cout << "You are poor\n";
        bankruptcy = true;
        cout << "Would you like to sell? (y/n) ";
        cin >> userInput;
        if (userInput == 'y') {
            sold = true;
        }
        
    } else {
        cout << "You still have moneys, you are not bankrupt...yet\n";
    }
    
    
}

// sell function
void Player::PlayerSell() {
    
    char userInput;
    
    if (owned) {
        cout << "Would you like to sell: " << nameLocation << " (y/n) \n";
        cin >> userInput;
        if (userInput == 'y') {
            sold = true;
            owned = false;
        } else {
            cout << "Ok, carry on\n";
        }
        
    }
    
}


void Player::PlayerProperty() {
    
    // needs code for property
    if (owned == true) {
        propertyOwned.push_back(nameLocation);
    } else if (sold == true) {
        propertyOwned.erase(propertyOwned.begin() + 0);
    }
}

// sets a bool for dice doubles to see if player goes to jail or not
bool Player::DiceDoubles() {
    
    int i = 0;
    if (diceRoll1 == diceRoll2) {
        i++;
        cout << "Roll again: ";
    }
    
    if (i == 3) {
        jail = true;
    } else {
        jail = false;
    }
    
    return jail;
}



// prints player info
void Player::Print() {

    cout << "You rolled: " << diceRoll1 << " " << diceRoll2 << endl;
    cout << "You are at: " << nameLocation << " " << playerLocation << endl;
    cout << "You have: " << playerMoney << " dollars\n";
    cout << "You have these cards: \n";
    for (int i = 0; i < playerCards.size(); i++) {
        cout << playerCards.at(i) << " \n";
        
    }
  

    cout << "You own: \n";
    for (int i = 0; i < propertyOwned.size(); i++) {
        cout << propertyOwned.at(i) << " \n";
    }

}

