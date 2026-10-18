typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c051d18 S_c8c051d18;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv10 S_vv10;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct S_c8c051d18 {
    char f00;
};
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern int operation_8c051cf0(void *);
extern S_c8c051d18 *operation_8c051d18(void *);
extern int call_8c12b0cc(S_c8c051d18 *);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c051ce4(void *);
extern void call_8c12b880(void *, int, int);
extern void call_8c12b77c(void *, S_c8c051d18 *, int);
extern void request_resource_release(void *);
extern void call_8c18de08(S_c8c051d18 *);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c051d50(void *, void *);
void operation_8c1e71b8(Object *o)
{
    int c9;
    unsigned int v1;
    int v2;
    int v3;
    S_vv10 *v10;
    int v16;
    int t1;
    S_c8c051d18 *t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c051cf0((void *)(o->f34));
    if (t1 != 0) {
        t2 = operation_8c051d18((void *)(o->f34));
        if (t2->f00 != 0) {
            t3 = call_8c12b0cc(t2);
            if (t3 != 8) {
                v2 = (int)0;
            } else {
                v1 = (unsigned int)0;
                while ((unsigned int)8 > v1) {
                    c9 = *(char *)((char *)&t2->f00 + (v1));
                    if (((*(unsigned char *)((char *)0x8c285e40 + ((unsigned char)c9)) & 7)) == 0) {
                        v3 = (int)0;
                        goto L_8c1e7214;
                    }
                    v1 = (unsigned int)(v1 + 1);
                }
                v2 = (int)1;
            }
            v3 = (int)v2;
            v1 = (unsigned int)/* ? clobbered */ 0;
L_8c1e7214:;
            if (v3 != 0) {
                goto L_8c1e722e;
            }
        }
        call_8c05fbf8(0x50006, 0, 0, 0);
        operation_8c051ce4((void *)(o->f34));
        goto L_8c1e727c;
L_8c1e722e:;
        call_8c12b880((void *)((void *)0x8c4e3128), 0, 8);
        t4 = call_8c12b0cc(t2);
        call_8c12b77c((void *)((void *)0x8c4e3128), t2, t4);
        v10 = (S_vv10 *)o->f34;
        v10->f04 |= 1;
        o->f34 = (Arg0_34 *)0;
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        o->f24 = 0;
        o->f20 = 4;
L_8c1e727c:;
        call_8c18de08(t2);
        return;
    }
    v16 = (int)o->f28;
    if (v16 == 0 && ((*(int *)(g_8c41cba0 + 0x28) & 2)) != 0) {
        goto L_8c1e72aa;
    }
    if (v16 == 0) {
        t5 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t5 != 0) {
L_8c1e72aa:;
            operation_8c051ce4((void *)(o->f34));
            call_8c05fbf8(0x50016, 0, 0, 0);
            operation_8c051d50((void *)(o->f34), (void *)(((char *)o + 0x40)));
            if (o->f30 != 0) {
                request_resource_release((void *)(o->f30));
                o->f30 = (Arg0_30 *)0;
            }
            o->f24 = 0;
            o->f20 = 6;
        }
    }
}
