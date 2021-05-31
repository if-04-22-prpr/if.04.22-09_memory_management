/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: n/a
 * ---------------------------------------------------------
 * Title:			Unit Tests for Memory Manager implementation
 * Author:			*/<your name>;/*
 * ----------------------------------------------------------
 * Description:
 * Tests functions for memory manager.
 * ----------------------------------------------------------
 */
#ifndef ___TEST_MEM_MAN_H
#define ___TEST_MEM_MAN_H

#include "shortcut.h"

TEST(test_alloc_memory__shall_allocate_memory);
TEST(test_alloc_memory__shall_not_allocate_insufficient_memory);
TEST(test_free_memory__shall_release_allocate_memory);
TEST(test_free_memory__shall_ignore_release_if_allocated_memory_is_not_start);
TEST(test_free_memory__shall_ignore_release_for_not_allocated_memory);

/* 
    Add more unit tests as needed! 
    Don't forget to register additional tests in test_driver.c
*/

#endif
