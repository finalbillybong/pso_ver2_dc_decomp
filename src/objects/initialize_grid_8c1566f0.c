typedef struct Cell { int first; int second; } Cell;
typedef struct Grid {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[2];
    short size;
    char unknown20[0x60];
    short cursor;
    short top;
    short left;
    short count;
    short selected;
    short last;
    char unknown8c[4];
    Cell *cells;
    int scroll;
    int offset;
} Grid;
extern void initialize_grid_view(Grid *, void *);
extern Cell *allocate_cells_8c18de4c(int);
Grid *initialize_grid_8c1566f0(Grid *o, unsigned int count)
{
    Grid **self = &o;
    Cell *cell;
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
    o->cells = allocate_cells_8c18de4c(count << 3);
    cell = o->cells;
    for (i = 0; i < count; i++, cell++) {
        cell->first = 0;
        cell->second = 0;
    }
    o->offset = 0;
    o->scroll = 0;
    return o;
}
