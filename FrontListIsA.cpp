/**
 * @file FrontListIsA.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief FrontListIsA implementation file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "FrontListIsA.h"

template<class ItemType>
FrontListIsA<ItemType>::FrontListIsA() {
    // Default constructor
}

template<class ItemType>
FrontListIsA<ItemType>::FrontListIsA(const FrontListIsA<ItemType>& flist)
    : LinkedList<ItemType>(flist) {
    // Copy constructor
}

template<class ItemType>
FrontListIsA<ItemType>::~FrontListIsA() {
    // Destructor
}

template<class ItemType>
bool FrontListIsA<ItemType>::insert(const ItemType& newEntry) {
    return LinkedList<ItemType>::insert(1, newEntry); // Insert at the beginning
}

template<class ItemType>
bool FrontListIsA<ItemType>::remove() {
    return LinkedList<ItemType>::remove(1); // Remove the first item
}

template<class ItemType>
ItemType FrontListIsA<ItemType>::retrieve() const noexcept(false) {
    if (LinkedList<ItemType>::isEmpty()) {
        throw PrecondViolatedExcep("Cannot retrieve from an empty list");
    }
    return LinkedList<ItemType>::getEntry(1); // Retrieve the first item
}

template<class ItemType>
bool FrontListIsA<ItemType>::insert(int newPosition, const ItemType& newEntry) {
    return false; // Disable inherited insert method
}

template<class ItemType>
bool FrontListIsA<ItemType>::remove(int position) {
    return false; // Disable inherited remove method
}

template<class ItemType>
void FrontListIsA<ItemType>::clear() {
    while (!LinkedList<ItemType>::isEmpty()) {
        LinkedList<ItemType>::remove(1); // Remove from the front until empty
    }
}

template<class ItemType>
void FrontListIsA<ItemType>::setEntry(int position, const ItemType& newEntry) noexcept(false) {
    throw PrecondViolatedExcep("Cannot set entry in FrontListIsA");
}
