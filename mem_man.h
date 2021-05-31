/*----------------------------------------------------------
 *				HTBLA-Leonding
 * ---------------------------------------------------------
 * Title:			Simple Memory Manager.
 * Author:			*/<your name>;/*
 * ----------------------------------------------------------
 * Description:
 * Declaration of functions for memory management.
 * ----------------------------------------------------------
 */

#ifndef ___MEM_MAN__H
#define ___MEM_MAN__H

#include <stddef.h>

/** The struct providing the memory statistic values */
typedef struct {
    size_t total_bytes;
    size_t free_bytes;
    size_t used_bytes;
    size_t larger_free_unit_bytes;
    size_t allocated_units_count;
    double free_percentage;
} MemStat;


/**
 * Allocates a memory block of the given size in bytes
 * in a similar way as `malloc(size)`.
 * 
 * @param size The number of bytes to allocate.
 * @return The pointer to the allocated memory block or 0,
 * if no memory could be allocated.
 */
void* my_alloc(size_t size);

/**
 * Releases the addressed memory block that was allocated via function `my_alloc(...)`.
 * If the addressed memory is not allocated, a warning is printed.
 * 
 * @param p The pointer to the memory to free.
 */
void my_free(void* p);

/**
 * Prints a brief statistic report about memory that reveals the following key values:
 * # total available memory in bytes.
 * # free (not allocated) memory in bytes.
 * # used (allocated) memory in bytes
 * # free memory in percentage (0 % to 100%)
 * # number of allocated units (continuously allocated portions of the memory, not memory blocks)
 * # largest free continuous memory unit in bytes.
 */
MemStat mem_get_statistics();

/**
 * Prints the allocated units (continuously allocated portions of the memory, not memory blocks)
 * including their start address within the managed memory as well as their size
 * ordered by their start address.
 */
void mem_print_units();

/**
 * Provides the index of the allocated unit (continuously allocated portions of the memory, not memory blocks)
 * the addressed memory belongs to. If the addressed memory is not allocated or the address is outside
 * the range of the managed memory, a value less than zero provided.
 * 
 * @param p_mem The pointer to the memory to query.
 * @return The unit index the address belongs to or a value less than 0 if the memory is not allocated.
 */
int get_unit_index(void* p_mem);

/**
 * Dumps the content of the memory.
 */
void mem_dump();


#endif
