typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv19 S_vv19;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_vv19 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c41cba0[];
extern int operation_8c051cf0(void *);
extern int operation_8c051d18(void *);
extern int call_8c232864(int, int, int);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c051ce4(void *);
extern void call_8c12b880(void *, int, int);
extern int call_8c12b0cc(int);
extern void call_8c12b77c(void *, int, int);
extern void request_resource_release(void *);
extern void call_8c18de08(int);
extern int operation_8c01d8a8(void *, int);
void operation_8c25bb38(Object *o)
{
    int c9;
    unsigned int v2;
    int v1;
    unsigned char v3;
    int v4;
    int v6;
    int v7;
    int v14;
    S_vv19 *v19;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c051cf0((void *)(o->f34));
    if (t1 != 0) {
        t2 = operation_8c051d18((void *)(o->f34));
        v1 = (int)0;
        v2 = (unsigned int)0;
        while ((unsigned int)8 > v2) {
            c9 = *(char *)((char *)((char *)t2 + 0x0) + (v2));
            v3 = (unsigned char)*(unsigned char *)((char *)0x8c285e40 + ((unsigned char)c9));
            v6 = (int)v1;
            if (((v3 & 0x80)) != 0) {
                v4 = (int)v1;
                if (((v3 & 2)) == 0) {
                    v4 = (int)(v1 + 1);
                }
                v6 = (int)v4;
            }
            v1 = (int)v6;
            v2 = (unsigned int)(v2 + 1);
        }
        v7 = (int)(v1 == 8);
        if (v7 != 0) {
            t3 = call_8c232864(2, t2, v2);
            if (t3 != 0) {
                goto L_8c25bbb0;
            }
        }
        call_8c05fbf8(0x50006, 0, 0, 0);
        operation_8c051ce4((void *)(o->f34));
        goto L_8c25bbe4;
L_8c25bbb0:;
        call_8c12b880((void *)((void *)0x8c513400), 0, 8);
        t4 = call_8c12b0cc(t2);
        call_8c12b77c((void *)((void *)0x8c513400), t2, t4);
        operation_8c051ce4((void *)(o->f34));
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        o->f20 = 2;
L_8c25bbe4:;
        call_8c18de08(t2);
        return;
    }
    v14 = (int)o->f28;
    if (v14 == 0 && ((*(int *)(g_8c41cba0 + 0x28) & 2)) != 0) {
        goto L_8c25bc12;
    }
    if (v14 == 0) {
        t5 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t5 != 0) {
L_8c25bc12:;
            call_8c05fbf8(0x50016, 0, 0, 0);
            v19 = (S_vv19 *)o->f34;
            v19->f04 |= 1;
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
            o->f20 = 5;
        }
    }
}
