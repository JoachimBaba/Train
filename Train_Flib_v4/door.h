#pragma once
/*door.h : Describe the class used as portal to one room to another
*/

#include "room.h"

class TDoor : public TSpriteElement
{
public:
	TDoor();
	TDoor( TDoor &tDoor );
	TDoor(TGfxVec2 tPos, TGfxVec2 tSize, char *pTextureLocation, TDoor *pDoor, TRoom *pRoom);
	TDoor(TGfxVec2 tPos, TGfxVec2 tSize, TGfxTexture *pTexture, TDoor *pDoor, TRoom *pRoom);

	virtual ~TDoor();

	TDoor* GetOtherSideDoor() const;
	TRoom* GetRoom() const;

private:
	TDoor *m_pOtherSide;//Door to wich this door leads
	TRoom *m_pOwnRoom;//Room to wich this door belongs
};

