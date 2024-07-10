/**
 * @file FrontListAsA.h
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief FrontListAsA header file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef FRONT_LIST_PRIVATE_H
#define FRONT_LIST_PRIVATE_H

#include "LinkedList.h"
#include "PrecondViolatedExcep.h"

template <class ItemType>
class FrontListAsA : private LinkedList<ItemType>
{
public:

    /**
     * @brief Construct a new Front List As A object
     * 
     */
    FrontListAsA();

    /**
     * @brief Construct a new Front List As A object using a copy
     * 
     * @param flist : FrontListAsA copy
     */
    FrontListAsA(const FrontListAsA<ItemType> &flist);

    /**
     * @brief Destroy the Front List As A object
     * 
     */
    virtual ~FrontListAsA();

    /**
     * @brief Insert a new entry into the FrontList
     * 
     * @param newEntry : Entry to insert
     * @return true if element inserted; false otherrwise
     */
    bool insert(const ItemType &newEntry);

    /**
     * @brief Removes an entry from the Front List
     * 
     * @return true if removed successfully; false otherwise
     */
    bool remove();

    /**
     * @brief Retrieves the last inserted element from the Front List
     * 
     * @throw PrecondViolatedExcep 
     * @return ItemType : Last element
     */
    ItemType retrieve() const noexcept(false);

};

#include "FrontListAsA.cpp"
#endif // FRONT_LIST_PRIVATE_H
