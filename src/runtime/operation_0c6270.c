/* Provisional address-based name; wider setup/update role remains under review. */
#include "src/include/resource_slot.h"
#define initialize_at ((void (*)(ResourceSlot *,void *,int,int))0x8c37e9b6)
extern void  finish_at(void *);

void operation_0c6270(int index) {
    int i;
    int row = index << 5;
    for (i = 0; i < 8; i++)
        initialize_at(&((ResourceSlot *)0x8c46f6cc)[i],
                      *(void **)((char *)0x8c3060fc + row + (i << 2)), 0, 0);
    finish_at((void *)0x8c30619c);
}
