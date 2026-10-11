extern void *allocate_block(void *, int);
extern void *initialize_object_8c137328(void *, void *);

void *create_object_8c1372e8(void)
{
    void *block = allocate_block(*(void **)0x8c4d97e0, 0x24);
    if (block) initialize_object_8c137328(block, *(void **)0x8c44be98);
    *(void **)0x8c4d9b40 = block;
    return block;
}
