extern void *heap_alloc_8c122700(void *, int);
extern void *initialize_manager_8c25e5a8(void *, void *);

void *create_manager_8c25e570(void *parent)
{
    void *block = heap_alloc_8c122700(*(void **)0x8c4d97e0, 0x20);
    if (block) initialize_manager_8c25e5a8(block, parent);
    return block;
}
