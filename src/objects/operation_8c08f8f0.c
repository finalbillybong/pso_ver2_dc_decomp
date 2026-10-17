typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct S_c8c08fd58 S_c8c08fd58;
typedef struct S_c8c08fefc S_c8c08fefc;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv7 S_vv7;
typedef struct Block_c8c08fefc_0 {
    char unknown0[0xc];
    short f0c;
    char unknowne[0x36];
    S_c8c08fd58 *f44;
} Block_c8c08fefc_0;
struct S_c8c08fefc {
    Block_c8c08fefc_0 f00;
};
struct S_vv7 {
    Block72 f00;
};
struct Object {
    char unknown0[0x44];
    int f44;
    int f48;
    char unknown4c[0x10];
    Arg0_5c *f5c;
};
struct Arg0_5c {
    int f00;
};
struct S_c8c08fd58 {
    char unknown0[0x84];
    S_c8c08fefc *f84;
};
extern char g_8c300638[];
extern int operation_8c105420(int, int);
extern void operation_8c03ef80(void *, ...);
extern int operation_8c104d00(int, int);
extern int call_8c18e808(int, int);
extern S_c8c08fefc *call_8c08fefc(Object *);
extern void call_8c0bb9a4(Object *, void *, void *, Arg0_5c *, int);
extern S_c8c08fd58 *call_8c08fd58(Object *, S_c8c08fefc *);
extern int call_8c09010c(Object *);
extern int call_8c090198(Object *, int);
void operation_8c08f8f0(Object *o, int a1)
{
    int t3;
    S_c8c08fefc *t4;
    int v3;
    char *v2;
    char *v1;
    int v4;
    char *v13;
    int t1;
    int t2;
    S_vv7 *v7;
    int v6;
    S_c8c08fd58 *t5;
    int t6;
    int t7;
    v2 = (char *)*(int *)0x8c41cb60;
    if (a1 != 0) {
        v1 = (char *)v2;
        t1 = operation_8c105420((int)(((char *)o + 0x7c)), (int)(v1));
        v3 = (int)t1;
        v4 = (int)v1;
        if (v3 >= 0) {
            goto L_8c08f94a;
        }
        operation_8c03ef80((void *)((g_8c300638 + 0x2c3)), (void *)(((char *)o + 0x7c)));
        return;
    }
    t2 = operation_8c104d00((int)(((char *)o + 0x7c)), (int)(v2));
    if (!(t2 >= 0)) {
        operation_8c03ef80((void *)((g_8c300638 + 0x2c3)), (void *)(((char *)o + 0x7c)));
        return;
    }
    v3 = (int)t2;
    v4 = (int)v2;
L_8c08f94a:;
    t3 = call_8c18e808(v3, 0x48);
    v6 = (int)0;
    v7 = (S_vv7 *)v4;
    while (t3 > v6) {
        t4 = call_8c08fefc(o);
        if (t4 != 0) {
            *(Block72 *)&t4->f00 = *(Block72 *)&v7->f00;
            call_8c0bb9a4(o, (void *)(((char *)t4 + 0x14)), (void *)(((char *)t4 + 0x20)), (Arg0_5c *)(o->f5c), 0);
            t4->f00.f0c = o->f5c->f00;
            t5 = call_8c08fd58(o, t4);
            if (t5 != 0) {
                t4->f00.f44 = t5;
                t5->f84 = t4;
                goto L_8c08f9cc;
            }
            t4->f00.f44 = 0;
        } else {
            operation_8c03ef80((void *)((g_8c300638 + 0x2d7)));
            return;
        }
L_8c08f9cc:;
        v6 = (int)(v6 + 1);
        v7 = (S_vv7 *)((char *)v7 + 72);
    }
    t6 = call_8c09010c(o);
    o->f44 = (int)(t6);
    v13 = (char *)o->f5c->f00;
    t7 = call_8c090198(o, (int)(v13));
    o->f48 = (int)(t7);
}
