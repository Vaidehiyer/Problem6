/**
 * @file FrontListHasA.h
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief FrontListHasA header file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef _FRONT_LIST
#define _FRONT_LIST

#include "FrontListInterface.h"
#include "LinkedList.h" // Assuming LinkedList implementation is available

template <class ItemType>
class FrontListHasA : public FrontListInterface<ItemType> {
private:
    LinkedList<ItemType> list; // LinkedList to store items

public:

    /**
     * @brief Construct a new Front List Has A object
     * 
     */
    FrontListHasA(); // Default constructor

    /**
     * @brief Construct a new Front List Has A object using a copy
     * 
     * @param aList : FrontListHasA copy 
     */
    FrontListHasA(const FrontListHasA<ItemType>& aList); // Copy constructor

    /**
     * @brief Destroy the Front List Has A object
     * 
     */
    virtual ~FrontListHasA(); // Destructor

    /**
     * @brief Insert a new entry into the FrontList
     * 
     * @param newEntry : Entry to insert
     * @return true if element inserted; false otherrwise
     */
    bool insert(const ItemType& newEntry) override;

    /**
     * @brief Removes an entry from the Front List
     * 
     * @return true if removed successfully; false otherwise
     */
    bool remove() override;

    /**
     * @brief Retrieves the last inserted element from the Front List
     * 
     * @throw PrecondViolatedExcep 
     * @return ItemType : Last element
     */
    ItemType retrieve() const override;
    int getLength() const;
};

#include "FrontListHasA.cpp"
#endif   // End header