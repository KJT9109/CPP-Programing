/*
 * Linked_Queue.h
 *
 *  Created on: 2020. 11. 23.
 *      Author: jitae
 */

#ifndef LINKED_QUEUE_H_
#define LINKED_QUEUE_H_

#include "LinkedList.h"

#ifdef __cpluscplus
extern "C" {
#endif

typedef struct __Queue
{
	LinkedList *front;
	LinkedList *rear;
	LinkedList *body;

} LQueue_Struct;



void LQueue_init(LQueue_Struct *lqueue);
void EnLQueue(LQueue_Struct *lqueue, int data);
int DeLQueue(LQueue_Struct *lqueue);

#ifdef __cpluscplus
}
#endif

#endif /* LINKED_QUEUE_H_ */
