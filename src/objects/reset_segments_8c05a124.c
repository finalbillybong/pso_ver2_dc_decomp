typedef struct Segment { int flags; char unknown4[0x28]; } Segment;
typedef struct Table { char unknown0[0x18]; Segment items[1]; } Table;
typedef struct Owner {
    char unknown0[0x34];
    int flags;
    char unknown38[0xa4];
    Table *table;
    int segment_count;
    char unknowne4[0xd4];
    int pending;
    char unknown1bc[0x174];
    short source;
    char unknown332[0x28];
    short target;
} Owner;
void reset_segments_8c05a124(Owner *o)
{
    int i;
    int mask = ~0x08000000;
    o->target = o->source;
    o->flags &= ~0x200;
    o->pending = 0;
    for (i = 0; i < o->segment_count; i++) *(int *)((char *)(int *)((char *)o->table + 0x18) + i * 0x2c) &= mask;
}
