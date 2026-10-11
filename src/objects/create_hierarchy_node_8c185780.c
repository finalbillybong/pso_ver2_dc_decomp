extern void *allocate_block(void *, int);
extern void *initialize_hierarchy_node(void *, void *);

void create_hierarchy_node_8c185780(void)
{
    void *block = allocate_block(*(void **)0x8c4d97e0, 0x20);
    if (block) initialize_hierarchy_node(block, *(void **)0x8c44bea0);
    *(void **)0x8c4dbb60 = block;
}
