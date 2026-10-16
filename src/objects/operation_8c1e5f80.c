typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
struct Frame {
    float f00;
    float f04;
};
struct Arg1 {
    float f00;
    float f04;
};
extern char g_8c32bb88[];
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18eb44(int);
extern void operation_8c18ea4c(int);
extern int call_8c04b8dc(void *);
extern void call_8c19a3a0(Frame *, void *, int, float);
void operation_8c1e5f80(int a0, Arg1 *a1, int a2, int a3, int a4)
{
    Frame frame;
    int t1;
    reset_text_cursor_8c18ea38();
    operation_8c18eb44(a2);
    if (a4 != 0) {
        operation_8c18ea4c((int)(g_8c32bb88 + 0x7));
    }
    t1 = call_8c04b8dc((void *)((void *)0x8c4dbe40));
    (&frame)->f00 = a1->f00 - (float)(unsigned int)t1;
    (&frame)->f04 = a1->f04;
    call_8c19a3a0((Frame *)((&frame)), (void *)((void *)0x8c4dbe40), a3, 1000000.0f);
}
