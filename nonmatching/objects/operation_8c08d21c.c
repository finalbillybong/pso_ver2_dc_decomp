/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08d21c
 * function: operation_8c08d21c
 * language: c
 * reference size: 348 bytes
 * compiled size: 348 bytes (+0.0%)
 * differing lines: 8 of 143 reference instruction lines
 * differing bytes: 14
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
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
typedef struct S_vv5 S_vv5;
typedef struct Block_c8c08d8a8_0 {
    char unknown0[0x8];
    short f08;
    char unknowna[0x2];
    short f0c;
    char unknowne[0x32];
    S_c8c08d794 *f40;
} Block_c8c08d8a8_0;
struct S_c8c08d8a8 {
    Block_c8c08d8a8_0 f00;
};
struct S_vv5 {
    Block68 f00;
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
struct S_c8c08d794 {
    char unknown0[0x84];
    S_c8c08d8a8 *f84;
};
extern char g_8c3002d8[];
extern int operation_8c105420(int, int);
extern void debug_error_stub_8c03ef80(void *, ...);
extern int file_load_8c104d00(int, int);
extern int call_8c18e808(int, int);
extern S_c8c08d8a8 *operation_8c08d8a8(Object *);
extern void call_8c0bb9a4(Object *, void *, void *, Arg0_5c *, int);
extern int advance_counter_8c01d5fc(int);
extern S_c8c08d794 *call_8c08d794(Object *, S_c8c08d8a8 *);
extern int operation_8c08db0c(Object *);
extern int call_8c08db98(Object *, int);
void operation_8c08d21c(Object *o, int a1)
{
    int t3;
    int v2;
    S_c8c08d8a8 *t4;
    int v1;
    char *v11;
    int t1;
    int t2;
    S_vv5 *v5;
    int v4;
    int t5;
    S_c8c08d794 *t6;
    int t7;
    int t8;
    v1 = (int)*(int *)0x8c41cb60;
    if (a1 != 0) {
        t1 = operation_8c105420((int)(((char *)o + 0x7c)), v1);
        v2 = (int)t1;
        if (v2 >= 0) {
            goto L_8c08d276;
        }
        debug_error_stub_8c03ef80((void *)((g_8c3002d8 + 0x276)), ((char *)o + 0x7c));
        return;
    }
    t2 = file_load_8c104d00((int)(((char *)o + 0x7c)), v1);
    if (!(t2 >= 0)) {
        debug_error_stub_8c03ef80((void *)((g_8c3002d8 + 0x276)), ((char *)o + 0x7c));
        return;
    }
    v2 = (int)t2;
L_8c08d276:;
    t3 = call_8c18e808(v2, 0x44);
    v4 = (int)0;
    v5 = (S_vv5 *)v1;
    while (t3 > v4) {
        t4 = operation_8c08d8a8(o);
        if (t4 != 0) {
            *(Block68 *)&t4->f00 = *(Block68 *)&v5->f00;
            call_8c0bb9a4(o, (void *)(((char *)t4 + 0x10)), (void *)(((char *)t4 + 0x1c)), (Arg0_5c *)(o->f5c), 0);
            t5 = advance_counter_8c01d5fc(0);
            t4->f00.f08 = t5;
            t4->f00.f0c = o->f5c->f00;
            t6 = call_8c08d794(o, t4);
            if (t6 != 0) {
                t4->f00.f40 = t6;
                t6->f84 = t4;
                goto L_8c08d304;
            }
            t4->f00.f40 = 0;
        } else {
            debug_error_stub_8c03ef80((void *)((g_8c3002d8 + 0x28a)));
            return;
        }
L_8c08d304:;
        v4 = (int)(v4 + 1);
        v5 = (S_vv5 *)((char *)v5 + 68);
    }
    t7 = operation_8c08db0c(o);
    o->f44 = (int)(t7);
    v11 = (char *)o->f5c->f00;
    t8 = call_8c08db98(o, (int)(v11));
    o->f48 = (int)(t8);
}
