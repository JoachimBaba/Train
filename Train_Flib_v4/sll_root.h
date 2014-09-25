#pragma once
/*sll_root.h : describe a linked list root template class wich first item can be any type of data
*/

#include "sll_template_item.h"

template <class TItemsType>
class TSLLRoot
{
public:

	TSLLRoot();
	virtual ~TSLLRoot();

	TSLLItem<TItemsType> *FindLastItem();
	void Append(TSLLItem<TItemsType> *pNewAppend);
	bool Delete(TSLLItem<TItemsType> *pToRemoveItem);
	int GetCount()const;

private:
	TSLLItem<TItemsType> *m_pFirstItem;
};


