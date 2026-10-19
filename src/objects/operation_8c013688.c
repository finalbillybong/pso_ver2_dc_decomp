typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c44be84 *g_8c44be84;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c3806f6(int, int, int);
extern void call_8c01d9dc(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c08aefc(int, void *, void *, void *);
extern void operation_8c01c250(int);
extern void call_8c380516(void);
void operation_8c013688(void)
{
    int t1;
    call_8c3806f6(0, 0, 0);
    call_8c01d9dc();
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x6c);
    if (t1 != 0) {
        call_8c08aefc(t1, g_8c44be84, (void *)((void *)0x8c2e2e60), (void *)((void *)0x8c01367c));
    }
    operation_8c01c250(2);
    call_8c380516();
}
