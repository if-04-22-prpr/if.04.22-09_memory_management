/*----------------------------------------------------------
 *				HTBLA-Leonding
 * ---------------------------------------------------------
 * Title:			Tests implementation for memory management.
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Unit tests for for memory management.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#include "shortcut.h"
#include "test_mem_man.h"

int main(int argc, char *argv[])
{
	ADD_TEST(test_alloc_memory__shall_allocate_memory);
	ADD_TEST(test_alloc_memory__shall_not_allocate_insufficient_memory);
	ADD_TEST(test_free_memory__shall_release_allocate_memory);
	ADD_TEST(test_free_memory__shall_ignore_release_if_allocated_memory_is_not_start);
	ADD_TEST(test_free_memory__shall_ignore_release_for_not_allocated_memory);

	/* Additional test declarations here */

	run_tests();
	return 0;
}
