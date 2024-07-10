/**
 * @file FrontListAsA.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief FrontListAsA implementation file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "FrontListAsA.h"

template <class ItemType>
FrontListAsA<ItemType>::FrontListAsA()
{
    // Default constructor
}

template <class ItemType>
FrontListAsA<ItemType>::FrontListAsA(const FrontListAsA<ItemType> &flist)
    : LinkedList<ItemType>(flist)
{
    // Copy constructor
}

template <class ItemType>
FrontListAsA<ItemType>::~FrontListAsA()
{
    // Destructor
}

template <class ItemType>
bool FrontListAsA<ItemType>::insert(const ItemType &newEntry)
{
    return LinkedList<ItemType>::insert(1, newEntry); // Insert at the beginning
}

template <class ItemType>
bool FrontListAsA<ItemType>::remove()
{
    return LinkedList<ItemType>::remove(1); // Remove the first item
}

template <class ItemType>
ItemType FrontListAsA<ItemType>::retrieve() const noexcept(false)
{
    if (LinkedList<ItemType>::isEmpty())
    {
        throw PrecondViolatedExcep("Cannot retrieve from an empty list");
    }
    return LinkedList<ItemType>::getEntry(1); // Retrieve the first item
}
