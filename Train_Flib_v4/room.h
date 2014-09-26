#pragma once
/*room.h :
Describe the class used each room in the game.
There is one room at the time on the screen.
The player walk throught the rooms to progress in the game.
*/

#include "flib.h"
#include "sprite_element.h"
#include "door.h"
#include "sll_root.h"

const int WALK_AREA_SIZE = 64;
const int WALK_AREA_X = WINDOW_SIZE_X / WALK_AREA_SIZE;
const int WALK_AREA_Y = WINDOW_SIZE_Y / WALK_AREA_SIZE;

class TRoom: public TSpriteElement
{
public:
	TRoom();
	virtual ~TRoom();

	//void ReadDataToCreateContent()

private:
	//bool m_pWalkzone[WALK_AREA_X][WALK_AREA_Y];
	TSLLRoot<TDoor> *m_pDoorRoot;
	//TInteractiveObject *m_pInteractiveObject_Root;
	//TNonPlayerCharacter *m_pCharacter_Root;
};

