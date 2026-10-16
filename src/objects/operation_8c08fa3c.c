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
typedef struct S_vv1 S_vv1;
typedef struct Block_c8c08fefc_0 {
    char unknown0[0x44];
    S_c8c08fd58 *f44;
} Block_c8c08fefc_0;
typedef struct Block_vv1_0 {
    char unknown0[0xc];
    short f0c;
    char unknowne[0x3a];
} Block_vv1_0;
struct S_vv1 {
    Block_vv1_0 f00;
};
struct S_c8c08fefc {
    Block_c8c08fefc_0 f00;
};
struct S_c8c08fd58 {
    char unknown0[0x84];
    S_c8c08fefc *f84;
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
extern char g_8c300638[];
extern int call_8c011e9c(int);
extern int operation_8c105420(int, int);
extern int call_8c18e808(int, int);
extern S_c8c08fefc *call_8c08fefc(Object *);
extern int call_8c0329d8(int);
extern void call_8c0bb9a4(Object *, void *, void *, int, int);
extern S_c8c08fd58 *call_8c08fd58(Object *, S_c8c08fefc *);
extern void operation_8c03ef80(void *, ...);
extern int call_8c09010c(Object *);
extern int call_8c090198(Object *, int);
extern void call_8c011ec0(int);
void operation_8c08fa3c(Object *o)
{
    int t1;
    int t3;
    char *v35;
    S_c8c08fefc *t4;
    int t2;
    S_vv1 *v1;
    int v2;
    int t5;
    S_c8c08fd58 *t6;
    int t7;
    int t8;
    t1 = call_8c011e9c(0x10000);
    if (t1 != 0) {
        t2 = operation_8c105420((int)(g_8c300638 + 0x2f7), t1);
        if (t2 > 0) {
            t3 = call_8c18e808(t2, 0x48);
            v1 = (S_vv1 *)t1;
            v2 = (int)0;
            while (t3 > v2) {
                t4 = call_8c08fefc(o);
                if (t4 != 0) {
                    t5 = call_8c0329d8((int)(v1->f00.f0c));
                    if (t5 != 0) {
                        *(Block72 *)&t4->f00 = *(Block72 *)&v1->f00;
                        call_8c0bb9a4(o, (void *)(((char *)t4 + 0x14)), (void *)(((char *)t4 + 0x20)), t5, 0);
                        t6 = call_8c08fd58(o, t4);
                        if (t6 != 0) {
                            t4->f00.f44 = t6;
                            t6->f84 = t4;
                            goto L_8c08faec;
                        }
                        t4->f00.f44 = 0;
                    } else {
                        operation_8c03ef80((void *)((g_8c300638 + 0x304)));
                    }
                }
L_8c08faec:;
                v2 = (int)(v2 + 1);
                v1 = (S_vv1 *)((char *)v1 + 72);
            }
        }
        t7 = call_8c09010c(o);
        o->f44 = (int)(t7);
        v35 = (char *)o->f5c->f00;
        t8 = call_8c090198(o, (int)(v35));
        o->f48 = (int)(t8);
        call_8c011ec0(t1);
    }
}
