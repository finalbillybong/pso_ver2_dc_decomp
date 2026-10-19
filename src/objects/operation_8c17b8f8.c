typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct Frame {
    char unknown0[0x200];
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4db9c0;
extern void call_8c3806f6(int, int, int);
extern void call_8c37e7d4(Frame *);
extern void call_8c01d9dc(void);
extern void forward_reviewed_8c104e8c(void);
extern void operation_8c01c250(int);
extern void call_8c013620(void *, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c1a4dcc(int);
extern void call_8c380516(void);
void operation_8c17b8f8(void)
{
    Frame frame;
    unsigned int v1;
    int t1;
    g_8c4db9c0 = 0;
    call_8c3806f6(0, 0, 0);
    v1 = (unsigned int)0;
    while ((unsigned int)0x80 > v1) {
        *(float *)((char *)((char *)(&frame) + 0x0) + (v1 << 2)) = 0.0f;
        v1 = (unsigned int)(v1 + 1);
    }
    call_8c37e7d4((Frame *)((&frame)));
    call_8c01d9dc();
    forward_reviewed_8c104e8c();
    operation_8c01c250(0);
    call_8c013620((void *)((void *)0x8c319820), 0x28);
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x284);
    if (t1 != 0) {
        call_8c1a4dcc(t1);
    }
    call_8c380516();
}
