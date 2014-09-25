#include "door.h"

//Constructeurs::::::::::::::::::::::::::::::::::::::::::::::::::::::::

TDoor::TDoor()
:TSpriteElement(), m_pOtherSide(0), m_pOwnRoom(0)
{

}

TDoor::TDoor(TDoor &tDoor)
: TSpriteElement(tDoor.GetPos(), tDoor.GetSize(), tDoor.GetTexture()), m_pOtherSide(tDoor.GetOtherSideDoor()), m_pOwnRoom(tDoor.GetRoom())
{

}

TDoor::TDoor( TGfxVec2 tPos, TGfxVec2 tSize, char *pTextureLocation, TDoor *pDoor, TRoom *pRoom )
: TSpriteElement(tPos, tSize, GfxTextureLoad(pTextureLocation)), m_pOtherSide(pDoor), m_pOwnRoom(pRoom)
{

}


TDoor::TDoor(TGfxVec2 tPos, TGfxVec2 tSize, TGfxTexture *pTexture, TDoor *pDoor, TRoom *pRoom)
: TSpriteElement(tPos, tSize, pTexture), m_pOtherSide(pDoor), m_pOwnRoom(pRoom)
{

}


//Destructeur::::::::::::::::::::::::::::::::::::::::::::::::::::::::

TDoor::~TDoor()
{

}

//Methods::::::::::::::::::::::::::::::::::::::::::::::::::::::::


TDoor* TDoor::GetOtherSideDoor() const
{
	return m_pOtherSide;
}

TRoom* TDoor::GetRoom() const
{
	return m_pOwnRoom;
}