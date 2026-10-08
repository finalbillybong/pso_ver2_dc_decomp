/* Provisional address-based name; wider setup/update role remains under review. */
#define operation_0c6270 ((void (*)(int))0x8c0c6270)
#define operation_3806f6 ((void (*)(int,int,int))0x8c3806f6)
#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
extern void * construct_at(void *,void *,char *,void (*)(void *));
#define operation_01d9dc ((void (*)(void))0x8c01d9dc)
#define operation_01c250 ((void (*)(int))0x8c01c250)
#define operation_380516 ((void (*)(void))0x8c380516)

void operation_0c548c(void) {
    void *child;
    operation_0c6270(*(int *)0x8c418254);
    operation_3806f6(0, 0, 0);
    child = allocate_at(*(void **)0x8c4d97e0, 108);
    if (child)
        construct_at(child, *(void **)0x8c44be84, (char *)0x8c306344,
                     (void (*)(void *))0x8c0c55a8);
    operation_01d9dc();
    operation_01c250(2);
    operation_380516();
}
