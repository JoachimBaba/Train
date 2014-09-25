#pragma once
//sprite.h : Describe the base class wich contain the main data for sprites création

#include "constants.h"

class TSpriteElement
{
public:

	TSpriteElement();
	TSpriteElement( TGfxVec2 tPos, TGfxVec2 tSize, char *pTextureLocation );
	TSpriteElement( TGfxVec2 tPos, TGfxVec2 tSize, TGfxTexture *pTexture );
	TSpriteElement( TSpriteElement &TSpriteElement );//copy constructor

	virtual ~TSpriteElement();

	TGfxVec2 GetPos() const;
	TGfxVec2 GetSize() const;
	TGfxVec2 GetSpritesNB() const;
	TGfxTexture *GetTexture() const;

	void Render() const;

private:

	TGfxVec2 m_tPos;
	TGfxVec2 m_tSize;
	TGfxVec2 m_tNBSprites;
	TGfxTexture *m_pTexture;
	TGfxSprite *m_pSprite;

	TGfxVec2 CalculateSpritesNumberInsideTexture();//calcul le nombre de sprites que la texture contient
	void SpriteSettup();//crée la sprite en fonction de la taille assignée ou en utilisant toute la texture
};

