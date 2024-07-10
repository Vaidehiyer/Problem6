/**
 * @file Tester.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief A program to test the three different classes of FrontList ADT
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include "FrontListIsA.h"
#include "FrontListAsA.h"
#include "FrontListHasA.h"
#include "PrecondViolatedExcep.h"

/**
 * @brief Tests the insert function 
 * 
 * @tparam LinkedList 
 * @param list 
 */
template <class LinkedList>
void testInsertRetrieve(LinkedList &list)
{
    std::cout << "Testing insert and retrieve...\n";
    //  std::cout << "Element inserted last: " << list.retrieve() << std::endl;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    std::cout << "Element inserted last: " << list.retrieve() << std::endl;
}

/**
 * @brief Tests the remove function
 * 
 * @tparam LinkedList 
 * @param list 
 */
template <class LinkedList>
void testRemoveRetrieve(LinkedList &list)
{
    std::cout << "Testing remove and retrieve...\n";

    list.remove();
    list.remove();
    list.remove();

    std::cout << "Element at the front: " << list.retrieve() << std::endl;
}

/**
 * @brief Tests all the classes of FrontList ADT
 * 
 */
void testFrontList()
{
    // FrontListIsA
    std::cout << "\nTesting FrontListIsA:\n";
    FrontListIsA<int> listPublic;
    testInsertRetrieve(listPublic);
    testRemoveRetrieve(listPublic);

    // FrontListAsA
    std::cout << "\nTesting FrontListAsA:\n";
    FrontListAsA<int> listPrivate;
    testInsertRetrieve(listPrivate);
    testRemoveRetrieve(listPrivate);

    // FrontListHasA
    std::cout << "\nTesting FrontListHasA:\n";
    FrontListHasA<int> listHasA;
    testInsertRetrieve(listHasA);
    testRemoveRetrieve(listHasA);
}

int main()
{
    testFrontList();
    return 0;
}
