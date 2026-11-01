/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21272c
 * function: TWindowDD_update_8c21272c
 * language: c
 * reference size: 1024 bytes
 * compiled size: 1024 bytes (+0.0%)
 * differing lines: 8 of 381 reference instruction lines
 * differing bytes: 12
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
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_80 Arg0_80;
typedef struct Arg0_c0 Arg0_c0;
typedef struct S_vv43 S_vv43;
typedef struct Block_p0_c4 {
    short f00;
    char unknown2[0x1a];
} Block_p0_c4;
typedef struct Block_p0_e0 {
    short f00;
    char unknown2[0x1a];
} Block_p0_e0;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x58];
    Arg0_7c *f7c;
    Arg0_80 *f80;
    char unknown84[0x10];
    int f94;
    char unknown98[0xc];
    int fa4;
    int fa8;
    int fac;
    int fb0;
    char unknownb4[0x4];
    int fb8;
    char unknownbc[0x4];
    Arg0_c0 *fc0;
    Block_p0_c4 fc4;
    Block_p0_e0 fe0;
};
struct Arg0_c0 {
    Block28 f00;
};
struct S_vv43 {
    char unknown0[0x58];
    int f58;
};
struct Arg0_24 {
    char unknown0[0x58];
    int f58;
};
extern void operation_8c215190(void *, int);
extern int span_8c215d8c(void *);
extern void operation_8c215510(void *, int);
extern void operation_8c2150d0(void *);
extern int operation_8c20a7a4(int, int);
extern int operation_8c215188(int);
extern void play_se_8c05fbf8(int, int, int, int);
extern void call_8c210a0c(void);
extern void release_resource_member_arrays(void *);
extern int operation_8c20a7d0(int, int);
extern void operation_8c2150c8(void *);
extern void operation_8c2163c4(void *);
extern void update_selection_record_view(void *, void *);
extern int operation_8c215d84(Arg0_24 *);
extern void operation_8c2150a4(void *, int);
extern void set_fields_8c2163e0(void *);
extern void dispatch_selection_phase(void *);
extern void call_8c213340(Object *);
extern void call_8c21375c(Object *);
void TWindowDD_update_8c21272c(Object *o)
{
    char *v8;
    char *v101;
    int v17;
    int v31;
    int v22;
    short v38;
    S_vv43 *v43;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    if (o->f80 != 0) {
        if (o->fb0 == 0) {
            operation_8c215190((void *)(o->f80), 2);
        } else {
            if (o->fc4.f00 > 1) {
                operation_8c215190((void *)(o->f80), 0);
            } else {
                operation_8c215190((void *)(o->f80), 1);
            }
        }
    }
    v8 = (char *)*(int *)((char *)((char *)o + 0x24) + (o->f20 << 2));
    if (o->f7c != 0 && v8 != 0) {
        t1 = span_8c215d8c((void *)v8);
        operation_8c215510((void *)(o->f7c), t1);
    }
    switch (o->fa8) {
    case 1:
        operation_8c2150d0((void *)(o->f80));
        v17 = (int)0;
        v31 = (int)v17;
        t2 = operation_8c20a7a4((int)(&o->f20), 4);
        if (t2 != 0) {
            v101 = (char *)o->f80;
            if (v101 != 0) {
                t3 = operation_8c215188((int)(v101));
                switch (t3) {
                case 0:
                    play_se_8c05fbf8(0x50001, 0, 0, 0);
                    o->fa8 = 2;
                    *(Block28 *)&o->fc0->f00 = *(Block28 *)&o->fc4;
                    if (o->fa4 != 0) {
                        *(short *)0x8c5051fc = -1;
                        call_8c210a0c();
                    }
                    release_resource_member_arrays((void *)o);
                    *(Block28 *)&o->fc0->f00 = *(Block28 *)&o->fe0;
                    break;
                case 1:
                    play_se_8c05fbf8(0x50016, 0, 0, 0);
                    v31 = (int)1;
                    o->f94 |= 2;
                    break;
                case 2:
                    play_se_8c05fbf8(0x50016, 0, 0, 0);
                    o->fa8 = 3;
                    release_resource_member_arrays((void *)o);
                    break;
                }
            }
        } else {
            v22 = (int)1;
            t4 = operation_8c20a7a4((int)(&o->f20), 2);
            if (t4 == 0 && ((o->f94 & 2)) == 0) {
                v22 = (int)v17;
            }
            if (v22 != 0) {
                play_se_8c05fbf8(0x50016, 0, 0, 0);
                v31 = (int)1;
                o->f94 |= 2;
            } else {
                t5 = operation_8c20a7d0((int)(&o->f20), 0x40);
                if (t5 != 0) {
                    play_se_8c05fbf8(0x50000, 0, 0, 0);
                    v31 = (int)1;
                }
            }
        }
        if (v31 == 0) {
            return;
        }
        o->fa8 = 0;
        operation_8c2150c8((void *)(o->f80));
        operation_8c2163c4((void *)v8);
        if (!(o->fc4.f00 > 0)) {
            return;
        }
        update_selection_record_view((void *)o, (void *)(&o->fc4));
        return;
    case 0:
        switch (o->fac) {
        case 0:
            if (o->fb8 != 1) {
                t6 = operation_8c20a7a4((int)(&o->f20), 0x80);
                if (t6 != 0) {
                    play_se_8c05fbf8(0x50000, 0, 0, 0);
                    o->fa8 = 1;
                    t7 = operation_8c215d84((Arg0_24 *)(*(Arg0_24 **)((char *)((char *)o + 0x24) + (o->f20 << 2))));
                    operation_8c2150a4((void *)(o->f80), t7);
                    set_fields_8c2163e0((void *)v8);
                    *(Block28 *)((char *)o + 0xe0) = *(Block28 *)((char *)o + 0xc4);
                    v38 = (short)o->fe0.f00;
                    if (!(v38 > 0)) {
                        return;
                    }
                    o->fe0.f00 -= 1;
                    update_selection_record_view((void *)o, (void *)(&o->fe0));
                    return;
                }
            }
            dispatch_selection_phase((void *)o);
            o->f94 = 0;
            return;
        case 1:
            v43 = (S_vv43 *)*(Arg0_28 **)((char *)((char *)o + 0x28) + (o->f20 << 2));
            if (v43 != 0 && v43->f58 == 0) {
                call_8c213340(o);
                o->fac = 0;
            }
            break;
        case 2:
            if ((*(Arg0_24 **)((char *)((char *)o + 0x24) + (o->f20 << 2)))->f58 == 0) {
                call_8c21375c(o);
                o->fac = 0;
            }
            break;
        }
        break;
    case 2:
        return;
    case 3:
        return;
    }
}
