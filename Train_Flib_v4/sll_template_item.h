#pragma once
//sll_template_item.h : template base class used as an link list item that can be point by a TSLLRoot
//The use of template provide the ability to the item to be derived by other classes and the childs classes's sibiling item can bear the same type of data than them.

//#include "sprite_element.h" //?!
//#include "sll_root.h"

template <class TItemType>
class TSLLItem : public TItemType
{
	template <class TItemsType>
	friend class TSLLRoot;

public:

	TSLLItem();//default constructor
	virtual ~TSLLItem();

	void InsertAfter(TItemType *pNewItem);
	TItemType *GetNextItem() const;

private:

	TSLLItem *m_pNextItem;
};


