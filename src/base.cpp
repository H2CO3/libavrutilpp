/*
 * base.cpp
 * libavrutil++
 *
 * Created by Árpád Goretity on 04/04/2012.
 * Licensed under a CreativeCommons Attribution-ShareAlike 3.0 Unported License
 * http://creativecommons.org/licenses/by-sa/3.0/
 */

#include <stdlib.h>
#include "base.h"

void *operator new(size_t size)
{
	return malloc(size);
}

void operator delete(void *ptr)
{
	free(ptr);
}
