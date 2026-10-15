typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
struct Frame {
    char unknown0[0x10];
};
struct Object {
    char unknown0[0x54];
    Arg0_54 *f54;
    char unknown58[0x3c];
    int f94;
};
extern char g_8c3384d4[];
extern void call_8c12b880(void *, int, int);
extern void call_8c12b048(Frame *, void *, ...);
extern int call_8c372d38(void *, Frame *);
void operation_8c22dfc8(Object *o)
{
    Frame frame;
    char *v2;
    int v1;
    int t1;
    int t2;
    call_8c12b880((void *)(((char *)o + 0x68)), 0, 0xd);
    call_8c12b880((void *)(((char *)o + 0x75)), 0, 0xd);
    v2 = (char *)*(int *)0x8c2e1968;
    v1 = (int)-0xfb;
    while (*(int *)0x8c2e196c > (int)(v2)) {
        call_8c12b880((void *)(&frame), 0, 0xd);
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c3384d4 + 0x26)), (void *)((void *)0x8c2e1950), (int)(v2));
        t1 = call_8c372d38((void *)(o->f54), (Frame *)((&frame)));
        if (t1 == v1) {
            call_8c12b048((Frame *)((&frame)), (void *)((g_8c3384d4 + 0x26)), (void *)((void *)0x8c2e1950), (int)(v2 + 1));
            t2 = call_8c372d38((void *)(o->f54), (Frame *)((&frame)));
            if (t2 == v1) {
                call_8c12b048((Frame *)(((char *)o + 0x68)), (void *)((g_8c3384d4 + 0x26)), (void *)((void *)0x8c2e1950), (int)(v2));
                call_8c12b048((Frame *)(((char *)o + 0x75)), (void *)((g_8c3384d4 + 0x26)), (void *)((void *)0x8c2e1950), (int)(v2 + 1));
                o->f94 = 8;
                return;
            }
        }
        v2 = (char *)(v2 + 2);
    }
    o->f94 = 0x11;
}
