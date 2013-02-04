#pragma once

#include "ofMain.h"

class HandCursorFinger
{
public :
	HandCursorFinger() { } 
	~HandCursorFinger() { } 


	void setup ( int _id , float _radius , ofColor _color ) ; 
	void update ( ) ; 
	void draw ( ) ; 
	void debugDraw( ) ; 


	int id ; 
	int status ; 
	ofVec2f position ; 
	float radius ;
	ofColor color ;
};