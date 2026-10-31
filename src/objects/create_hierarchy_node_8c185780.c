extern void *heap_alloc_8c122700(void *, int);
extern void *TObject_ctor_8c0330e4(void *, void *);

void create_hierarchy_node_8c185780(void)
{
    void *block = heap_alloc_8c122700(*(void **)0x8c4d97e0, 0x20);
    if (block) TObject_ctor_8c0330e4(block, *(void **)0x8c44bea0);
    *(void **)0x8c4dbb60 = block;
}
