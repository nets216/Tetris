#pragma once
#include "Tetrominos.h"

class SquareShape : public Tetrominos {


public:

	SquareShape();
	SquareShape(int _width, char _char);

	virtual void initTetromino();
	virtual void drawTetromino();
	virtual void RotateCW(int playerBoard[12][18],int distancing);//Rotate the shape clockwise
    virtual void RotateCCW(int playerBoard[12][18],int distancing);//Rotate the shape counterclockwise
	virtual void initTemporary(int _rotation);

};