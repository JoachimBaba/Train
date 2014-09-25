#include "constants.h"
#include "sprite_element.h"
#include "room.h"
#include "door.h"
#include "sll_root.h"
#include "sll_template_item.h"


TSpriteElement *g_pSprite;

void Initialize()
{
	//g_pSprite = new TSpriteElement( TGfxVec2(0.f, 0.f), TGfxVec2(0.f, 0.f), "train_Station_v1.tga" );

	TSLLRoot<TDoor> pDoorLists;// = new TSLLRoot<TDoor>();

	//TSLLItem<TDoor> tDoor;
}

void Update()
{

}

void Render()
{
	//g_pSprite->Render();
}

void Finalize()
{
	//delete g_pSprite;
}

void GfxMain( int, char * [] )
{
	GfxDefaultResolution( WINDOW_SIZE_X, WINDOW_SIZE_Y );
	GfxCallbacks( Initialize, Update, Render, Finalize );
}