typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv2 S_vv2;
struct Frame {
    S_frame_0 *f00;
    float f04;
};
struct S_vv2 {
    char unknown0[0x86];
    unsigned short f86;
};
extern void operation_8c0de288(int, int, void *, void *);
extern int hierarchy_is_active(void *);
extern int operation_8c0de180(void *);
extern int call_8c0de19c(int, int);
extern void request_resource_release(void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c0de834(int, int, void *, float);
int operation_8c0de07c(Object *o, int a1, int a2)
{
    Frame frame;
    unsigned int v1;
    unsigned int v12;
    int t2;
    int t4;
    int t1;
    int t3;
    S_vv2 *v2;
    int v14;
    operation_8c0de288((int)(o), a1, (void *)(&(&frame)->f04), (void *)(&frame));
    v1 = (unsigned int)4;
    if (((a2 & 0x10)) == 0) {
        v1 = (unsigned int)0;
        while ((unsigned int)4 > v1) {
            v2 = (S_vv2 *)*(Arg0_5c **)((char *)((char *)o + 0x5c) + (v1 << 2));
            if (v2 != 0) {
                t1 = hierarchy_is_active((void *)v2);
                if (t1 != 0 && (unsigned short)a1 == (v2->f86 & 0xffff)) {
                    goto L_8c0de0d6;
                }
            }
            v1 = (unsigned int)(v1 + 1);
        }
    }
L_8c0de0d6:;
    if (v1 >= (unsigned int)4) {
        t2 = operation_8c0de180((void *)o);
        v12 = (unsigned int)t2;
        if ((unsigned int)t2 >= (unsigned int)4) {
            t4 = call_8c0de19c((int)(o), a1);
            v12 = (unsigned int)t4;
        }
        if (v12 >= (unsigned int)4) {
            return 0;
        }
        v14 = (int)(v12 << 2);
        if (*(int *)((char *)((char *)o + 0x5c) + (v14)) != 0) {
            request_resource_release((void *)(*(Arg0_5c **)((char *)((char *)o + 0x5c) + (v14))));
        }
        t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xa8);
        if (t3 != 0) {
            call_8c0de834(t3, a1, (void *)((&frame)->f00), (&frame)->f04);
        }
        *(int *)((char *)((char *)o + 0x5c) + (v14)) = (int)(t3);
        v1 = (unsigned int)v12;
    }
    return (int)(*(int *)((char *)((char *)o + 0x5c) + (v1 << 2)));
}
