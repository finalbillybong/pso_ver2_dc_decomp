typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct Frame {
    char unknown0[0x14];
};
extern int lookup_low_id(int);
extern void call_8c1c9a74(Frame *, int, void *);
extern int call_8c1c9bb0(Frame *);
extern int item_capacity_8c022f5c(void *, void *);
extern void call_8c023bb4(int, Frame *);
void operation_8c170a24(int a0, int a1, int a2)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    if ((unsigned short)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 << 2)) == *(int *)0x8c418248) {
        t1 = lookup_low_id((int)((unsigned short)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 << 2))));
        if (t1 != 0) {
            call_8c1c9a74((Frame *)((&frame)), a2, (void *)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a1 << 2))));
            t2 = call_8c1c9bb0((Frame *)((&frame)));
            if (t2 == 1) {
                t3 = item_capacity_8c022f5c((void *)t1, (void *)(&frame));
                if (t3 > 0) {
                    call_8c023bb4(t1, (Frame *)((&frame)));
                }
            }
        }
    }
}
