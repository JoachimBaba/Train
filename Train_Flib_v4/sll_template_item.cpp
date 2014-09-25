#include "flib.h"
#include "sll_template_item.h"
#include "door.h"

//constructor::::::::::::::::::::::::::::::::::::::::::::::::::::::::

template <class TItemType>
TSLLItem<TItemType>::TSLLItem()
	:TItemType(), m_pNextItem(0)
{
	GfxDbgPrintf( "TSSLItem constructor\n" );
}

template <>//TDoor
TSLLItem<TDoor>::TSLLItem()
	:TDoor(), m_pNextItem(0)
{
	GfxDbgPrintf("TSSLItem-door constructor\n");
}

//destructor::::::::::::::::::::::::::::::::::::::::::::::::::::::::

template <class TItemType>
TSLLItem<TItemType>::~TSLLItem()
{
	GfxDbgPrintf( "TSSLItem destructor\n" );
}

template <>//TDoor
TSLLItem<TDoor>::~TSLLItem()
{
	GfxDbgPrintf("TSSLItem-door destructor\n");
}

//Methods::::::::::::::::::::::::::::::::::::::::::::::::::::::::

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


