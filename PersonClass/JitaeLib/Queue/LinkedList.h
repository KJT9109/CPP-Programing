/*
 * LinkedList.h
 *
 *  Created on: 2020. 11. 23.
 *      Author: jitae
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#ifdef __cpluscplus
extern "C" {
#endif

typedef struct __LinkedList
{
	int data;
	struct __LinkedList *next;

}LinkedList;


#ifdef __cpluscplus
}
#endif

#endif /* LINKEDLIST_H_ */
