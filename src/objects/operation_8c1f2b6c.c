typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct S_vv12 S_vv12;
typedef struct S_vv12_20 S_vv12_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
};
struct S_vv12 {
    char unknown0[0x20];
    S_vv12_20 *f20;
};
struct Frame {
    Vector3 f00;
    int f0c;
    char unknown10[0x8];
};
extern Vector3 g_8c32c418;
extern int hierarchy_is_active(void *);
extern int operation_8c07f914(void *);
extern void call_8c38ade4(void *);
extern void operation_8c1f246c(void *);
extern void call_8c3be280(int, Frame *, void *);
extern void call_8c38ad10(void);
extern void mark_effect_for_release(void *);
extern int create_effect_769c(void *, int);
extern void call_8c0a7608(void *, void *);
void operation_8c1f2b6c(Object *o)
{
    Frame frame;
    char *v17;
    char *v18;
    S_vv12 *v12;
    int v13;
    int t1;
    int t2;
    int t3;
    int t4;
    v17 = (char *)o->f24;
    if (v17 != 0) {
        t1 = hierarchy_is_active((void *)v17);
        if (t1 == 0) {
            o->f24 = (Arg0_24 *)0;
        }
    }
    v18 = (char *)o->f28;
    if (v18 != 0) {
        t2 = hierarchy_is_active((void *)v18);
        if (t2 == 0) {
            o->f28 = (Arg0_28 *)0;
        }
    }
    if (o->f24 != 0) {
        v12 = (S_vv12 *)o->f28;
        if (v12 != 0) {
            t3 = operation_8c07f914((void *)(v12->f20));
            if (t3 == 0) {
                call_8c38ade4((void *)((void *)0x8c400500));
                operation_8c1f246c((void *)v12);
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c32c418;
                call_8c3be280(0, (Frame *)((&frame)), (void *)(&(&frame)->f0c));
                call_8c38ad10();
                v13 = (int)1;
            } else {
                v13 = (int)0;
            }
            if (v13 == 0) {
                return;
            }
            if (o->f20 == 0xa) {
                mark_effect_for_release((void *)(o->f24));
                t4 = create_effect_769c((void *)(&(&frame)->f0c), 0x9e);
                o->f24 = (Arg0_24 *)t4;
            }
            call_8c0a7608((void *)(o->f24), (void *)(&(&frame)->f0c));
            if (o->f20 == 0x14) {
                o->f04 |= 1;
                return;
            }
            o->f20 += 1;
            return;
        }
    }
    o->f04 |= 1;
}
