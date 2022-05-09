

#include "playerClass.hpp"
#include "boardClass.hpp"
using namespace std;

int main() {
    
    int i;
    i = 0;
    
    srand(time(0));
    
    
    Player Battleship;
    Player Car;
    Player Tophat;
    Player Thimble;
    Player Shoe;
    Player Dog;
    Player Iron;
    Player Wheelbarrow;
    Table Print;
    
    
    
    int dice1;
    int dice2;
    int startMoney;
    
    
    
    
    // chance cards
    vector<string> chanceCards = {"Get Out of Jail Free", "Advance to Go (Collect $200)", "Bank error in your favor. Collect $200", "Doctor’s fee. Pay $50",
            "From sale of stock you get $50", "Go to Jail. Go directly to jail, do not pass Go, do not collect $200",
            "Holiday fund matures. Receive $100", "Income tax refund. Collect $20", "It is your birthday. Collect $10 from every player",
            "Life insurance matures. Collect $100", "Pay hospital fees of $100", "Pay school fees of $50", "Receive $25 consultancy fee",
            "You are assessed for street repair. $40 per house. $115 per hotel", "You have won second prize in a beauty contest. Collect $10",
            "You inherit $100"

        };
    
    startMoney = 1500;
    
    bool gameEnd = false;
    
    while (gameEnd == false) {
        vector<string> playerProperty;
    
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        cout << "Battleship\n\n";
        
        
    
        Battleship.DiceRoll(dice1, dice2);
        Battleship.SetLocation();
        Battleship.SetMoney(startMoney);
        Battleship.PlayerBuy();
        Battleship.PlayerProperty();
        Print.PrintBoard();
        
    
        
        Battleship.Print();
        
        system( "read -n 1 -s -p \"Press any key to continue...\"" );
        
        cout << endl;
    }
        
        
    
    
    
    
    
    return 0;
}


