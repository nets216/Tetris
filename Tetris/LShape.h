#pragma once
#include "Tetrominos.h"

class LShape : public Tetrominos
{
	RotateDirection rotateDirection = RotateDirection::Up;


public:

	LShape();
	LShape(int _width, char _char);

	virtual void moveTetromino(Direction direction);
	virtual void initTetromino();
	virtual void drawTetromino();
	virtual void RotateCW(int playerBoard[12][18],int distancing);//Rotate the shape clockwise
	virtual void RotateCCW(int playerBoard[12][18],int distancing);//Rotate the shape counterclockwise

};


