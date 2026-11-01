extern void *heap_alloc_8c122700(void *, int);
extern void *TObjCHTimeWin_ctor_8c253390(void *, void *);

void *TObjCHTimeWin_create_8c253358(void *parent)
{
    void *block = heap_alloc_8c122700(*(void **)0x8c4d97e0, 0x24);
    if (block) TObjCHTimeWin_ctor_8c253390(block, parent);
    return block;
}
