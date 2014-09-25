#pragma once
/*container_linked_list.h :
This template provide the linked list propreties along with a pointer on a specific type of data that must be specified for each link of the list.
Every link can have a different type of data.
*/

#include "sprite_element.h"

template <class TPointedObject>
class TLinkedList
{
	TLinkedList *m_pNextSibiling;
	TPointedObject *m_pPointedObject;

	TLinkedList();
	~TLinkedList();

	InsertAfter();
	Delete();
	//...
};