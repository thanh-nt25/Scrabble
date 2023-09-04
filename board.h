

#ifndef BOARD_H
#define BOARD_H

#include<iostream>
#include "square.h" 

class Tile;
class Bag;

class Board{
private:
	static const int NUMSQUARES = 225;
	static const int NUMROWS = 15;
	Square *squares[NUMSQUARES];
	static int getX(int);
	static int getY(int);
	static int getI(int, int);
	
	mutable bool firstword; 
public:
	Board();
	~Board();
	
	void show() const;
	Tile* getTile(int index) const;
	
	bool addToSquare(int, int, Tile*);
	bool addToSquare(int, Tile*); // single index - 0 to 224
	bool canPlaceLetters(std::string letters, int index, int dir) const;
	void setupBoard(Bag* bag, const char* rows[]);
	
	premium getPremium(int index);
	
	void selfTest() const;
	
	bool firstWord() const { return firstword; }
	
	
};

#endif
