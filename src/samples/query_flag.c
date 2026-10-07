/* 0x8c029f80: partial layout and names inferred from accesses only. */
typedef struct Object {
    unsigned char unknown[0x34];
    unsigned int flags;
} Object;

/* External function address read from this function's original literal pool. */
#define object_predicate ((int (*)(Object *))0x8c02a980)

unsigned int query_flag(Object *object)
{
    if (object_predicate(object))
        return object->flags & 8;
    return 0;
}
