extern void *heap_alloc_8c122700(void *, int);
extern void *TObjFogCollision_Manager_ctor_8c137328(void *, void *);

void *TObjFogCollision_Manager_create_8c1372e8(void)
{
    void *block = heap_alloc_8c122700(*(void **)0x8c4d97e0, 0x24);
    if (block) TObjFogCollision_Manager_ctor_8c137328(block, *(void **)0x8c44be98);
    *(void **)0x8c4d9b40 = block;
    return block;
}
