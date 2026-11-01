/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21d598
 * function: operation_8c21d598
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 4 of 209 reference instruction lines
 * differing bytes: 5
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct Arg0_4c Arg0_4c;
typedef struct S_x16528 S_x16528;
typedef struct S_x25872 S_x25872;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x18];
    Arg0_44 *f44;
    Arg0_48 *f48;
    Arg0_4c *f4c;
    int f50;
    int f54;
    Block8 f58;
    char unknown60[0x14];
    int f74;
};
struct Arg0_44 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_x25872 {
    Block8 f00;
};
struct S_x16528 {
    Block8 f00;
};
struct Frame {
    Block8 f00;
};
extern char g_8c3366bc[];
extern int operation_8c220ce0(void);
extern int operation_8c1cdc80(void *);
extern void operation_8c119764(int, int, int);
extern void request_resource_release(void *);
extern int operation_8c21dbc0(Object *);
extern void operation_8c02eb7c(void *, void *, int, void *, void *);
extern void operation_8c02ed00(void *, void *);
extern int operation_8c156c6c(int);
extern void call_8c220c40(int, int);
extern S_g8c418a00 *g_8c418a00;
void operation_8c21d598(Object *o)
{
    Frame frame;
    char *v17;
    char *v16;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = operation_8c220ce0();
    if (t1 == 0) {
        return;
    }
    v17 = (char *)o->f44;
    if (v17 != 0) {
        t2 = operation_8c1cdc80((void *)v17);
        if (o->f48 != 0 && t2 != o->f54) {
            operation_8c119764((int)(o->f48), (int)(*(int *)0x8c504960 + t2 * 0x98 + 0x2c), 0x80);
        }
        if (o->f4c != 0 && t2 != o->f54) {
            request_resource_release((void *)(o->f4c));
            o->f4c = (Arg0_4c *)0;
        }
        o->f54 = (int)(t2);
    }
    if (o->f44 != 0 && ((o->f44->f80 & 0xffff & 2)) != 0) {
        v16 = (char *)o->f74;
        if (v16 == 0) {
            t3 = operation_8c1cdc80((void *)(o->f44));
            *(Block8 *)&o->f58 = *(Block8 *)&((S_x25872 *)(*(int *)0x8c504960 + 4 + t3 * 0x98))->f00;
            t4 = operation_8c21dbc0(o);
            operation_8c02eb7c((void *)g_8c418a00, (void *)(&o->f58), t4, (void *)((g_8c3366bc + 0x11)), (void *)((g_8c3366bc + 0x11)));
            if (o->f48 != 0) {
                request_resource_release((void *)(o->f48));
                o->f48 = (Arg0_48 *)0;
            }
            request_resource_release((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
            o->f28 = 0xc;
            o->f74 += 1;
            return;
        }
        if ((int)(v16) == 1) {
            t5 = operation_8c1cdc80((void *)(o->f44));
            *(Block8 *)&o->f58 = *(Block8 *)&((S_x16528 *)(*(int *)0x8c504960 + 4 + t5 * 0x98))->f00;
            operation_8c02ed00((void *)g_8c418a00, (void *)(&o->f58));
            o->f28 = 0xc;
            o->f74 += 1;
            return;
        }
        if ((int)(v16) == 2 && o->f50 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c3366b4;
            t6 = operation_8c156c6c((int)(&frame));
            o->f50 = (int)(t6);
            call_8c220c40(5, 1);
            o->f28 = 8;
        }
    }
    if (o->f44 != 0 && ((o->f44->f80 & 0xffff & 4)) != 0) {
        o->f28 = 9;
    }
}
