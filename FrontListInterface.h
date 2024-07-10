/**
 * @file FrontListInterface.h
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief FrontList Interface file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef _FRONT_LIST_INTERFACE
#define _FRONT_LIST_INTERFACE

template <class ItemType>
class FrontListInterface {
public:
    virtual bool insert(const ItemType& newEntry) = 0;
    virtual bool remove() = 0;
    virtual ItemType retrieve() const = 0;
};

#endif // _FRONT_LIST_INTERFACE
