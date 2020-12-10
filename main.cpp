//Jason Brewer
//Zach Nahorney
//Bryan Aguinaldo
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Constant integer to hold the size of the board
const int boardSize = 8;

struct Ship
{

};

//This prints the grid to screen
//Pre: Board with hit/miss info already initialized
//Post: prints this board to screen
void printGrid(char hitMissBoard[8][8]);

//This resets the board and generates the ships using srand and rand time
//Pre: Gather data to generate an 8x8 grid
//Post: Grid with ships generated randomly
void generateGrid(char shipsBoard[8][8], char hitMissBoard[8][8]);

//This function asks the user to input coordinates, then converts the user input into coordinates
//Pre: Input from user in the format "A2"
//Post: Returns "A2" in the format "1" "2"
void convertInput(int& X, int& Y);

//This searches the grid to check if it's hit or miss
//Pre: Board with ships generated and user input already converted
//Post: returns whether it was a hit or a miss
bool hitMissCheck(char shipsBoard[8][8], int X, int Y);

//This function updates the board with information on whether it was a hit or a miss
//Pre:
void updateBoard(char hitMissBoard[8][8], int X, int Y);

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

    cout << "Hello world!" << endl;
    return 0;


}
