#ifndef _KERNEL_KMALLOC_H
#define _KERNEL_KMALLOC_H

#include <stddef.h>

void* kmalloc(size_t size);
void kfree(void *_Nullable ptr);
void* kcalloc(size_t nmem, size_t size);
void *realloc(void *_Nullable ptr, size_t size);
void *reallocarray(void*_Nullable ptr, size_t)


#endif
