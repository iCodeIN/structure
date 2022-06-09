#pragma once
#include <structure/details/queue/linear/lqueue_init.h>
#include <stdlib.h>

__synapse_structure_lqueue_head*
__synapse_structure_lqueue_initialize()
{
	__synapse_structure_lqueue_head* ptr_head
		= malloc(sizeof(__synapse_structure_lqueue_head));

	ptr_head->frontmost = malloc(sizeof(__synapse_structure_lqueue_head));
	ptr_head->backmost  = ptr_head->frontmost;
	ptr_head->count		= 1;

	return ptr_head;
}

void
__synapse_structure_lqueue_cleanup(__synapse_structure_lqueue_head* pHead)
{
	__synapse_structure_lqueue_node* ptr_seek
		= pHead->backmost;

	for (; ptr_seek; ptr_seek = ptr_seek->prev)
	{
		if (ptr_seek->next) free(ptr_seek->next);
							free(ptr_seek->ptr_entity);
	}

	free(pHead->frontmost);
	free(pHead);
}