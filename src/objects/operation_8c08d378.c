typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block68 {
    int words[17];
} Block68;
typedef struct S_c8c08d794 S_c8c08d794;
typedef struct S_c8c08d8a8 S_c8c08d8a8;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv1 S_vv1;
typedef struct Block_c8c08d8a8_0 {
    char unknown0[0x8];
    short f08;
    char unknowna[0x36];
    S_c8c08d794 *f40;
} Block_c8c08d8a8_0;
typedef struct Block_vv1_0 {
    char unknown0[0xc];
    short f0c;
    char unknowne[0x36];
} Block_vv1_0;
struct S_vv1 {
    Block_vv1_0 f00;
};
struct S_c8c08d8a8 {
    Block_c8c08d8a8_0 f00;
};
struct S_c8c08d794 {
    char unknown0[0x84];
    S_c8c08d8a8 *f84;
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
extern char g_8c3002d8[];
extern int call_8c011e9c(int);
extern int operation_8c105420(int, int);
extern int call_8c18e808(int, int);
extern S_c8c08d8a8 *call_8c08d8a8(Object *);
extern int call_8c0329d8(int);
extern void call_8c0bb9a4(Object *, void *, void *, int, int);
extern int advance_counter_8c01d5fc(int);
extern S_c8c08d794 *call_8c08d794(Object *, S_c8c08d8a8 *);
extern void operation_8c03ef80(void *, ...);
extern int call_8c08db0c(Object *);
extern int call_8c08db98(Object *, int);
extern void call_8c011ec0(int);
void operation_8c08d378(Object *o)
{
    int t1;
    int t3;
    char *v36;
    S_c8c08d8a8 *t4;
    int t2;
    S_vv1 *v1;
    int v2;
    int t5;
    int t6;
    S_c8c08d794 *t7;
    int t8;
    int t9;
    t1 = call_8c011e9c(0x10000);
    if (t1 != 0) {
        t2 = operation_8c105420((int)(g_8c3002d8 + 0x229), t1);
        if (t2 > 0) {
            t3 = call_8c18e808(t2, 0x44);
            v1 = (S_vv1 *)t1;
            v2 = (int)0;
            while (t3 > v2) {
                t4 = call_8c08d8a8(o);
                if (t4 != 0) {
                    t5 = call_8c0329d8((int)(v1->f00.f0c));
                    if (t5 != 0) {
                        *(Block68 *)&t4->f00 = *(Block68 *)&v1->f00;
                        call_8c0bb9a4(o, (void *)(((char *)t4 + 0x10)), (void *)(((char *)t4 + 0x1c)), t5, 0);
                        t6 = advance_counter_8c01d5fc(0);
                        t4->f00.f08 = t6;
                        t7 = call_8c08d794(o, t4);
                        if (t7 != 0) {
                            t4->f00.f40 = t7;
                            t7->f84 = t4;
                            goto L_8c08d434;
                        }
                        t4->f00.f40 = 0;
                    } else {
                        operation_8c03ef80((void *)((g_8c3002d8 + 0x2aa)));
                    }
                }
L_8c08d434:;
                v2 = (int)(v2 + 1);
                v1 = (S_vv1 *)((char *)v1 + 68);
            }
        }
        t8 = call_8c08db0c(o);
        o->f44 = (int)(t8);
        v36 = (char *)o->f5c->f00;
        t9 = call_8c08db98(o, (int)(v36));
        o->f48 = (int)(t9);
        call_8c011ec0(t1);
    }
}
