/* Provisional free-list allocator layout inferred at 8c122700. */
typedef struct FreeBlock { struct FreeBlock *next; unsigned int size; } FreeBlock;
typedef struct BlockHeap { FreeBlock *head; unsigned int unknown_4; unsigned int alignment; } BlockHeap;
void *heap_alloc_8c122700(BlockHeap *heap, unsigned int size)
{
    FreeBlock *previous = heap->head;
    FreeBlock *block;
    size = (size + (heap->alignment + 7)) & -heap->alignment;
    while ((block = previous->next) != 0) {
        if (block->size >= size) {
            if (size == block->size) previous->next = block->next;
            else {
                FreeBlock *tail = (FreeBlock *)((unsigned char *)block + size);
                tail->next = block->next;
                tail->size = block->size - size;
                block->size = size;
                previous->next = tail;
            }
            return block + 1;
        }
        previous = block;
    }
    return 0;
}

#define memset_8c12b880 ((void (*)(void *, int, unsigned int))0x8c12b880)
void *allocate_zeroed_block(BlockHeap *heap, unsigned int size)
{
    void *block = heap_alloc_8c122700(heap, size);
    if (block) memset_8c12b880(block, 0, size);
    return block;
}
