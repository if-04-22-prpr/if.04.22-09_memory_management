/*----------------------------------------------------------
 *				HTBLA-Leonding
 * ---------------------------------------------------------
 * Title:			Simple Memory Manager.
 * Author:			*/<your name>;/*
 * ----------------------------------------------------------
 * Description:
 * Implementation of a simple memory manager.
 * ----------------------------------------------------------
 */

#include "mem_man.h"
#include <stdio.h>
#include <string.h>

/**
 * The memory manager operates on a global, statically allocated, linear memory partition (array).
 * This memory is organized in memory blocks of 32 bits (4 byte), the number of totally
 * available blocks is defined by the constant 'MEMORY_BLOCK_CNT'.
 * The smallest allocatable memory unit is one block, larger memory units are allocates always
 * a multiple of one block. This means, if a memory up to 32 bit is requested, one block is allocated,
 * if a memory of size from 33 bits to 64 bits is request, two blocks are allocated, and so one.
 * 
 * Each memory block shall be initialized with the pattern '0xDEADBEEF", freed memory shall be set to
 * the pattern '0xAFFEBAFF'. Such regions are easily recognizable in a memory dump.
 *
 * The housekeeping data (start address and size) of allocated memory units
 * shall be maintained in a linked list.
 */

#define MEMORY_BLOCK_CNT 1024;
