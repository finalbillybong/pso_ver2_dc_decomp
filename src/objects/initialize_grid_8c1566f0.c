#include "src/include/classes/TWindowMenu.h"
typedef struct TWindowMenu_p90 { int first; int second; } TWindowMenu_p90;
extern void initialize_grid_view(TWindowMenu *, void *);
extern TWindowMenu_p90 *operator_new_8c18de4c(int);
TWindowMenu *TWindowMenu_ctor_8c1566f0(TWindowMenu *o, unsigned int count)
{
    TWindowMenu **self = &o;
    TWindowMenu_p90 *cell;
    unsigned int i;
    (void)self;
    initialize_grid_view(o, (void *)0x8c3161c0);
    o->dispatch = (void *)0x8c26eb64;
    o->tag = *(int *)0x8c316198;
    o->size = 0x9c;
    o->top = 0;
    o->left = 0;
    o->count = count;
    o->selected = 0;
    o->cursor = 0;
    o->last = -1;
    o->cells = operator_new_8c18de4c(count << 3);
    cell = o->cells;
    for (i = 0; i < count; i++, cell++) {
        cell->first = 0;
        cell->second = 0;
    }
    o->offset = 0;
    o->scroll = 0;
    return o;
}
