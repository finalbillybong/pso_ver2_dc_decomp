typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be1c S_g8c44be1c;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_50 S_g8c46fe20_50;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    Arg0_24 *f24;
    int f28;
    int f2c;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_g8c46fe20 {
    char unknown0[0x50];
    S_g8c46fe20_50 *f50;
};
extern char g_8c33fb14[];
extern int operation_8c156c24(int, int);
extern void call_8c12b048(void *, void *, ...);
extern void operation_8c156d30(Arg0_24 *, void *, int, int);
extern void call_8c156f50(Arg0_24 *);
extern void operation_8c253328(void);
extern void request_resource_release(void *);
extern int operation_8c24bc2c(void);
void operation_8c2531ec(Object *o)
{
    int t1;
    int t2;
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c2532be;
        }
        if (o->f20 == 2) {
            goto L_8c2532de;
        }
        return;
    }
    if (o->f24 == 0) {
        if (*(int *)0x8c4e2ba0 == 0) {
            if (--o->f28 <= 0) {
                o->f04 |= 1;
                return;
            }
            return;
        }
        t1 = operation_8c156c24((int)((void *)0x8c33fb0c), 1);
        o->f24 = (Arg0_24 *)t1;
        if (o->f24 != 0) {
            call_8c12b048((void *)(((char *)o + 0x30)), (void *)((g_8c33fb14 + 0x10)), (void *)(*(S_g8c44be1c **)0x8c44be1c));
            operation_8c156d30((Arg0_24 *)(o->f24), (void *)(((char *)o + 0x30)), 0, 0);
            call_8c156f50((Arg0_24 *)(o->f24));
            o->f24->f80 = (o->f24->f80 & 0xffff) | 0x40;
            operation_8c253328();
            if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f50 != 0) {
                request_resource_release((void *)((*(S_g8c46fe20 **)0x8c46fe20)->f50));
                (*(S_g8c46fe20 **)0x8c46fe20)->f50 = (S_g8c46fe20_50 *)0;
            }
            if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f50 == 0) {
                t2 = operation_8c24bc2c();
                (*(S_g8c46fe20 **)0x8c46fe20)->f50 = (S_g8c46fe20_50 *)t2;
            }
        }
        o->f20 = 1;
        return;
L_8c2532be:;
        if (--o->f2c == 0x3c) {
            if (o->f24 != 0) {
                request_resource_release((void *)(o->f24));
                o->f24 = (Arg0_24 *)0;
            }
            o->f20 = 2;
            return;
L_8c2532de:;
            if (!(--o->f2c > 0)) {
                o->f04 |= 1;
            }
        }
    }
}
