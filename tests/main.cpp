//
// Created by maxim on 21/02/2024.
//

#include <gtest/gtest.h>
#include "Stack_Test.h"
#include "LinkedList_Test.h"
#include "DLinkedList_Test.h"
#include "RandomizedSetTest.h"
#include "Queue_Test.h"
#include "EventBus_Test.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}