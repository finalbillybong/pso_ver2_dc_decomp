extern void *allocate_block(void *, int);
extern void *initialize_object_8c253390(void *, void *);

void *create_object_8c253358(void *parent)
{
    void *block = allocate_block(*(void **)0x8c4d97e0, 0x24);
    if (block) initialize_object_8c253390(block, parent);
    return block;
}
