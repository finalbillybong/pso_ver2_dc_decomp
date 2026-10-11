int level_class_8c190148(int level)
{
    if (level >= 1 && level <= 10) return 0;
    if (level >= 11 && level <= 25) return 1;
    if (level >= 26 && level <= 42) return 2;
    if (level >= 43 && level <= 60) return 3;
    if (level >= 61 && level <= 100) return 4;
    if (level >= 101) return 4;
    return -1;
}

int level_class_8c1901a8(int level)
{
    if (level >= 1 && level <= 10) return 0;
    if (level >= 11 && level <= 25) return 1;
    if (level >= 26 && level <= 42) return 2;
    if (level >= 43 && level <= 60) return 3;
    if (level >= 61 && level <= 99) return 4;
    if (level >= 100) return 5;
    return -1;
}

int level_class_8c190208(int level)
{
    if (level >= 1 && level <= 10) return 0;
    if (level >= 11 && level <= 25) return 2;
    if (level >= 26 && level <= 42) return 2;
    if (level >= 43 && level <= 60) return 2;
    if (level >= 61 && level <= 100) return 2;
    if (level >= 101) return 2;
    return -1;
}

int level_class_8c190268(int level)
{
    if (level >= 1 && level <= 10) return 4;
    if (level >= 11 && level <= 25) return 5;
    if (level >= 26 && level <= 42) return 5;
    if (level >= 43 && level <= 60) return 7;
    if (level >= 61 && level <= 100) return 7;
    if (level >= 101) return 7;
    return -1;
}

typedef struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[4];
    char state;
    char unknown21[3];
    void *block;
    int counter;
    void *resource;
    short first;
    short second;
} Object;

extern void *initialize_hierarchy_node(void *, void *);
extern void *allocate_block(void *, int);
extern void operation_197420(void *);
extern void *operation_1196d4(void *, void *, int);

Object *initialize_object_8c1902c8(Object *o, void *parent)
{
    void *block;
    initialize_hierarchy_node(o, parent);
    o->dispatch = (void *)0x8c272718;
    block = allocate_block(*(void **)0x8c4d97e0, 0x74);
    if (block) operation_197420(block);
    o->block = block;
    o->resource = operation_1196d4((void *)0x8c2876a0, (void *)0x8c2876a8, 1);
    o->counter = 0;
    o->first = 0;
    o->second = 0;
    o->state = 0;
    {
        /* Address exposure preserves the observed stack-resident parameter (CW01). */
        Object **self = &o;
        (void)self;
        return o;
    }
}
