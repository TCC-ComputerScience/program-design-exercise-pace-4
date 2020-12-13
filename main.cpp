//Jason Brewer
//Zach Nahorney
//Bryan Aguinaldo
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include <unistd.h>

using namespace std;

//Constant integer to hold the size of the board
const int boardSize = 8;

struct Ship
{
    char patrolBoat[2];
    char battleship[4];
    char submarine[3];
    char cruiser[3];
    char carrier[5];
};

//This prints the grid to screen
//Pre: Board with hit/miss info already initialized
//Post: prints this board to screen
void printGrid(char hitMissBoard[boardSize][boardSize]);

//This resets the board and generates the ships using srand and rand time
//Pre: Gather data to generate an 8x8 grid
//Post: Grid with ships generated randomly
void generateGrid(char shipsBoard[boardSize][boardSize], char hitMissBoard[boardSize][boardSize]);

//This function asks the user to input coordinates, then converts the user input into coordinates
//Pre: Input from user in the format "A2"
//Post: Returns "A2" in the format "1" "2"
void convertInput(int& X, int& Y, string input);

//This function prints the rules to the game and how the user will play it
//Pre:
//Post: menu printed to screen
char Menu(char yesNo);

//This searches the grid to check if it's hit or miss
//Pre: Board with ships generated and user input already converted
//Post: returns whether it was a hit or a miss
bool hitMissCheck(char shipsBoard[boardSize][boardSize], int X, int Y);

//This function updates the board with information on whether it was a hit or a miss
//Pre: Board with hit/misses from user input already, and user input already converted
//Post:
void updateBoard(char hitMissBoard[boardSize][boardSize], int X, int Y);

int main()
{
    //2d array of size boardSize with hit/miss data
    char hitMissBoard [boardSize][boardSize];
    //2d array of size boardSize with ship data
    char shipsBoard [boardSize][boardSize];
    //string input for user input and X and Y integers to hold the user inputted coordinates once converted
    string input;
    int X;
    int Y;
    //char for menu input
    char yesNo;
    //Bool to hold whether it was a hit or miss
    bool hitMiss;

    yesNo = Menu(yesNo);
    if(yesNo =='Y')
    {
        cout << "Enter the spot you would like to shoot (format: A4 or C7): ";
        do
        {
            cin >> input;
            if(input.length()>2 || input.length()<2)
               cout << endl << "Please enter it in the format A4 or C7: ";
        }while(input.length()>2 || input.length()<2);

        convertInput(X, Y, input);
    }
    generateGrid(shipsBoard, hitMissBoard);
    printGrid(hitMissBoard);
    hitMissCheck(shipsBoard, X, Y);
    updateBoard(hitMissBoard, X, Y);

    return 0;


}

char Menu(char yesNo)
{
    cout << "              _           _   _   _           _     _       " << endl;
    sleep(1);
    cout << "             | |         | | | | | |         | |   (_)      " << endl;
    sleep(1);
    cout << "             | |__   __ _| |_| |_| | ___  ___| |__  _ _ __  " << endl;
    sleep(1);
    cout << "             | '_ \\ / _` | __| __| |/ _ \\/ __| '_ \\| | '_ \\ " << endl;
    sleep(1);
    cout << "             | |_) | (_| | |_| |_| |  __/\\__ \\ | | | | |_) |" << endl;
    sleep(1);
    cout << "             |_.__/ \\__,_|\\__|\\__|_|\\___||___/_| |_|_| .__/ " << endl;
    sleep(1);
    cout << "                                                     | |    " << endl;
    sleep(1);
    cout << "                                                     |_|    " << endl << endl;
    sleep(1);
    cout << "                                     |__" << endl;
    cout << "                                     |\\/" << endl;
    cout << "                                     ---" << endl;
    cout << "                                     / | [" << endl;
    cout << "                              !      | |||" << endl;
    cout << "                            _/|     _/|-++'" << endl;
    cout << "                        +  +--|    |--|--|_ |-" << endl;
    cout << "                     { /|__|  |/\\__|  |--- |||__/" << endl;
    cout << "                    +---------------___[}-_===_.'____                 /\\" << endl;
    cout << "                ____`-' ||___-{]_| _[}-  |     |_[___\\==--            \\/   _" << endl;
    cout << " __..._____--==/___]_|__|_____________________________[___\\==--____,------' .7" << endl;
    cout << "|                                                                     BB-61/" << endl;
    cout << " \\_________________________________________________________________________|" << endl;
    cout << "Art By: Matthew Bace" << endl << endl << endl;
    //sleep(3);
    cout << "The object of Battleship is to try and sink all enemy ships."<< endl;
    cout << "All ships are hidden to you and you must use grid coordinates"<< endl;
    cout << "to fire missiles to discover ships locations. If you hit a"<< endl;
    cout << "ship, it is represented with a * and if you miss, it is rep-"<< endl;
    cout << "resented with a H." << endl << endl;
    //sleep(5);
    cout << "Would you like to play? (Y or N)";
    do
    {
        cin >> yesNo;
        if(yesNo == 'Y')
            cout << "Let's get started!" << endl;
        else if(yesNo == 'N')
            cout << "why did you even launch the program then...?" << endl;
        else
            cout << "Please enter either Y or N" << endl;
    }while(yesNo != 'Y' && yesNo != 'N');
    return yesNo;
}

void convertInput(int& X, int& Y, string input)
{
    switch(input[0])
    {
        case 'A' : Y = 0;
        case 'B' : Y = 1;
        case 'C' : Y = 2;
        case 'D' : Y = 3;
        case 'E' : Y = 4;
        case 'F' : Y = 5;
        case 'G' : Y = 6;
        case 'H' : Y = 7;
        default : Y = 99;
    }
    X = input[1];
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y;

}

void generateGrid(char shipsBoard[boardSize][boardSize], char hitMissBoard[boardSize][boardSize])
{
    cout << "this generates a new/clean board and places ships on it." << endl;
}

void printGrid(char hitMissBoard[boardSize][boardSize])
{
    cout << "This prints the grid with ships hidden" << endl;
}

bool hitMissCheck(char shipsBoard[boardSize][boardSize], int X, int Y)
{
    cout << "This searches the grid to check if it's hit or miss" << endl;
    return true;
}

void updateBoard(char hitMissBoard[boardSize][boardSize], int X, int Y)
{
    cout << "This function updates the board with information on whether it was a hit or a miss" << endl;
}
