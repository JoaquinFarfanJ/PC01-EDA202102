#ifndef __OPERATORS_H__  
#define __OPERATORS_H__ 

#include <iostream>
#include "linkedlist.h"
using namespace std;

template <typename T>
ostream &operator<<(ostream &os, LinkedList<T> &container)
{
    return container.print(os);
}

template <typename T>
ostream &operator<<(ostream &os, Queue<T> &container)
{
    return container.print(os);
}

#endif