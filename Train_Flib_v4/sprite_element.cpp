#include "sprite_element.h"

//Constructeurs::::::::::::::::::::::::::::::::::::::::::::::::::::::::

TSpriteElement::TSpriteElement()
	:m_tPos(TGfxVec2(0.f, 0.f)), m_tSize(TGfxVec2(0.f, 0.f)), m_pTexture( 0 ), m_tNBSprites(TGfxVec2(0.f, 0.f))
{

}

TSpriteElement::TSpriteElement( TGfxVec2 tPos, TGfxVec2 tSize, char *pTextureLocation )
	:m_tPos(tPos), m_tSize(tSize), m_pTexture(GfxTextureLoad(pTextureLocation)), m_tNBSprites(TGfxVec2(0.f, 0.f))
{
	SpriteSettup();
}

TSpriteElement::TSpriteElement( TGfxVec2 tPos, TGfxVec2 tSize, TGfxTexture *pTexture )
	: m_tPos(tPos), m_tSize(tSize), m_pTexture(pTexture), m_tNBSprites(TGfxVec2(0.f, 0.f))
{
	SpriteSettup();
}

TSpriteElement::TSpriteElement( TSpriteElement &TSpriteElement )
	: m_tPos(TSpriteElement.m_tPos), m_tSize(TSpriteElement.m_tSize), m_pTexture(TSpriteElement.m_pTexture), m_pSprite(TSpriteElement.m_pSprite), m_tNBSprites(TGfxVec2(0.f, 0.f))
{
	//Positionnement standard de la sprite
	GfxSpriteSetPosition(m_pSprite, m_tPos.x, m_tPos.y);
}

//Destructeur::::::::::::::::::::::::::::::::::::::::::::::::::::::::


TSpriteElement::~TSpriteElement()
{
	GfxTextureDestroy( m_pTexture );
	GfxSpriteDestroy( m_pSprite );
}

//Methods::::::::::::::::::::::::::::::::::::::::::::::::::::::::


TGfxVec2 TSpriteElement::CalculateSpritesNumberInsideTexture()
{
	//Texture size
	TGfxVec2 tTextureSize;
	tTextureSize.x = GfxTextureGetSizeX(m_pTexture);
	tTextureSize.y = GfxTextureGetSizeY(m_pTexture);

	//Calcul du nombre de sprite dans la texture
	TGfxVec2 tNBSprites;
	tNBSprites.x = tTextureSize.x / m_tSize.x;
	tNBSprites.y = tTextureSize.y / m_tSize.y;

	return tNBSprites;
}

void TSpriteElement::SpriteSettup()
{	
	//Sprite Offset
	if (m_tSize.x != 0.f && m_tSize.y != 0.f)//par défault si la taille d'une sprite est assignée à 0 c'est que la sprite prend toute la texture
	{
		//Calcul du nombre de sprite dans la texture
		m_tNBSprites = CalculateSpritesNumberInsideTexture();
		//Sprite creation
		m_pSprite = GfxSpriteCreate(m_pTexture, 0, 0, m_tSize.x, m_tSize.y);
	}
	else
	{
		//Sprite creation
		m_pSprite = GfxSpriteCreate(m_pTexture);
	}

	//Sprite Scale
	GfxSpriteSetScale(m_pSprite, PIXEL_SCALE, PIXEL_SCALE);
	GfxSpriteSetFilteringEnabled(m_pSprite, false);

	//Sprite Positionnement
	GfxSpriteSetPosition(m_pSprite, m_tPos.x, m_tPos.y);
}

TGfxVec2 TSpriteElement::GetPos() const
{
	return m_tPos;
}

TGfxVec2 TSpriteElement::GetSize() const
{
	return m_tSize;
}

TGfxVec2 TSpriteElement::GetSpritesNB() const
{
	return m_tNBSprites;
}

TGfxTexture *TSpriteElement::GetTexture() const
{
	return m_pTexture;
}

void TSpriteElement::Render() const
{
	GfxSpriteRender(m_pSprite);
}
