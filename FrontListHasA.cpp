/**
 * @file FrontListHasA.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief FrontListHasA implementation file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "FrontListHasA.h"

template <class ItemType>
FrontListHasA<ItemType>::FrontListHasA()
{
    // Default constructor
}

template <class ItemType>
FrontListHasA<ItemType>::FrontListHasA(const FrontListHasA<ItemType> &aList)
{
    // Copy constructor
    list = aList.list; // LinkedList's copy constructor handles deep copy
}

template <class ItemType>
FrontListHasA<ItemType>::~FrontListHasA()
{
    // Destructor automatically called when FrontListHasA object goes out of scope
}

template <class ItemType>
bool FrontListHasA<ItemType>::insert(const ItemType &newEntry)
{
    return list.insert(1, newEntry); // Insert at the first position (front)
}

template <class ItemType>
bool FrontListHasA<ItemType>::remove()
{
    return list.remove(1); // Remove the first element
}

template <class ItemType>
ItemType FrontListHasA<ItemType>::retrieve() const
{
    try
    {
        return list.getEntry(1); // Retrieve the first element
    }
    catch (const PrecondViolatedExcep &e)
    {
        // Handle exception if list is empty or out of bounds
        throw e; // Rethrow exception
    }
}

template<class ItemType>
int FrontListHasA<ItemType>::getLength() const {
    return list.getLength();
}