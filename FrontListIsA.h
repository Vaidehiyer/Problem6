/**
 * @file FrontListIsA.h
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief FrontListIsA header file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */


#ifndef FRONT_LIST_H
#define FRONT_LIST_H

#include "LinkedList.h"
#include "PrecondViolatedExcep.h"

template<class ItemType>
class FrontListIsA : public LinkedList<ItemType> {
public:

    /**
     * @brief Construct a new Front List Is A object
     * 
     */
    FrontListIsA();

    /**
     * @brief Construct a new Front List Is A object using Copy
     * 
     * @param flist : FrontListIsA copy
     */
    FrontListIsA(const FrontListIsA<ItemType>& flist);

    /**
     * @brief Destroy the Front List Is A object
     * 
     */
    virtual ~FrontListIsA();

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

    // Disable inherited methods
    bool insert(int newPosition, const ItemType& newEntry) override;
    bool remove(int position) override;
    void clear() override;
    void setEntry(int position, const ItemType& newEntry) noexcept(false) override;
};

#include "FrontListIsA.cpp"
#endif // FRONT_LIST_H
