//Jason Brewer
//Zach Nahorney
//Bryan Aguinaldo
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

//Constant integer to hold the size of the board
const int boardSize = 8;

struct Ship
{
    char[2] patrolBoat;
    char[4] battleship;
    char[3] submarine;
    char[3] cruiser;
    char[5] carrier;
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
void convertInput(int& X, int& Y);

//This function prints the rules to the game and how the user will play it
//Pre:
//Post: menu printed to screen
void Menu();

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
    //X and Y integers to hold the user inputted coordinates
    int X;
    int Y;
    //Bool to hold whether it was a hit or miss
    bool hitMiss;

    Menu();
    convertInput(X, Y);
    generateGrid(shipsBoard, hitMissBoard);
    printGrid(hitMissBoard);
    hitMissCheck(shipsBoard, X, Y);
    updateBoard(hitMissBoard, X, Y);

    return 0;


}

void Menu()
{
    cout << "This prints the menu" << endl;
}

void convertInput(int& X, int& Y)
{
    cout << "This converts the user's input" << endl;
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
