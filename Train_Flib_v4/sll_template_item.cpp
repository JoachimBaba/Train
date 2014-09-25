#include "flib.h"
#include "sll_template_item.h"

template <class TItemType>
TSLLItem<TItemType>::TSLLItem()
	:TItemType(), m_pNextItem(0)//appel du constructeur par défaut du type dont TSLLItem dérive, puis le pointeur vers l'item suivante est initialisé à 0
{
	GfxDbgPrintf( "TSSLItem constructor" );
}

template <class TItemType>
TSLLItem<TItemType>::~TSLLItem()
{
	GfxDbgPrintf( "TSSLItem destructor" );
}

template <class TItemType>
TItemType* TSLLItem<TItemType>::GetNextItem() const
{
	return this->m_pNextItem;
}

template <class TItemType>
void TSLLItem<TItemType>::InsertAfter(TItemType *pNewItem)
{
	if( pNewItem != 0 )
		m_pNextItem = pNewItem;
}


