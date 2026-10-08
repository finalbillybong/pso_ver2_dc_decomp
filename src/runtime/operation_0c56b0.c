/* Provisional address-based name; preserve the observed call sequence. */
#define operation_380516 ((void (*)(void))0x8c380516)
extern void operation_033878(void *);

void operation_0c56b0(void) {
    operation_380516();
    operation_033878((void *)0x8c44bec8);
    operation_380516();
}
