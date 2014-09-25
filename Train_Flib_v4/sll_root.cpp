#include "flib.h"
#include "sll_root.h"

template <class TItemsType>
TSLLRoot<TItemsType>::TSLLRoot()
	:m_pFirstItem(0)
{
	GfxDbgPrintf( "TSSLRoot constructor" );
}


template <class TItemsType>
TSLLRoot<TItemsType>::~TSLLRoot()
{
	GfxDbgPrintf( "TSSLRoot destructor" );
}


template <class TItemsType>
void TSLLRoot<TItemsType>::Append(TSLLItem<TItemsType> *pNewAppend)
{
	if( pNewAppend != 0 )
	{
		TSLLItem<TItemsType> *pItem = m_pFirstItem;

		//if current item is null then become the new item
		while( pItem != 0 )
		{
			pItem = pItem->GetNextItem();
		}
		pItem = pNewAppend;
	}

}


template <class TItemsType>
bool TSLLRoot<TItemsType>::Delete(TSLLItem<TItemsType> *pToRemoveItem)
{
	if( pToRemoveItem != 0 )
	{
		TSLLItem<TItemsType> *pItem = m_pFirstItem;

		while( pItem != pToRemoveItem || pItem != 0 )
		{
			pItem = pItem->GetNextItem();
		}
		delete pItem;

		return true;
	}
	else
	{
		return false;
	}
}


template <class TItemsType>
int TSLLRoot<TItemsType>::GetCount()const
{
	int i = 0;
	TSLLItem<TItemsType> *pItem = m_pFirstItem;

	while( pItem != 0 )
		i++;

	return i;
}

