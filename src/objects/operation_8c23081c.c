typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_78 Arg0_78;
typedef struct S_vv4 S_vv4;
struct Frame {
    char unknown0[0x10];
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x44];
    Arg0_78 *f78;
};
struct S_vv4 {
    int f00;
};
extern void initialize_fields_8c207358(void *);
extern void call_8c1c8ce4(void *, Frame *);
extern int call_8c207378(Frame *, int);
extern void operation_8c10393c(void *, int, int);
void operation_8c23081c(Object *o)
{
    Frame frame;
    S_vv4 *v4;
    int v1;
    int v2;
    int v3;
    int t1;
    initialize_fields_8c207358((void *)(&frame));
    call_8c1c8ce4((void *)(o->f78), (Frame *)((&frame)));
    v1 = (int)0;
    v2 = (int)-1;
    v3 = (int)-3;
    while (3 > v1) {
        t1 = call_8c207378((Frame *)((&frame)), v1);
        *(int *)((char *)((char *)o + 0x6c) + (*(char *)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c2e1c10))) << 2)) = (int)(t1);
        v4 = (S_vv4 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 + 1 << 2));
        if (t1 != v2) {
            operation_8c10393c((void *)v4, 6, t1);
            v4->f00 &= v3;
        } else {
            v4->f00 |= 2;
        }
        v1 = (int)(v1 + 1);
    }
}
