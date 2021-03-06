#ifndef VECTH
#define VECTH
#pragma once

//How big should our first vector be?
#define INITVECTSIZE 10

typedef struct vector
{
    int * store; //Link to dma'd store
    int size; //Current number of used elements
    int max; //Maximum number of elements in store (size <= max)
}Vector;

//Grow using doubling algorithm
Vector Grow(Vector v);

//Release dma'd memory.  Should return NULL.
Vector Release(Vector v);

//Add an item to end of Vector.  May call grow.
Vector Add(Vector v, int val);

//Insert an item that will be at location loc.
Vector Insert(Vector v, int val, int loc);

//Insert an item before the first item greater than
//its value
Vector InsertInOrder(Vector v, int val);

#endif
