/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c126af0
 * function: operation_8c126af0
 * language: c
 * reference size: 1248 bytes
 * compiled size: 1248 bytes (+0.0%)
 * differing lines: 72 of 426 reference instruction lines
 * differing bytes: 163
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
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct Arg0_3f8 Arg0_3f8;
typedef struct Arg0_3fc Arg0_3fc;
typedef struct S_vv67 S_vv67;
typedef struct S_vv70 S_vv70;
typedef struct S_x1232_0 S_x1232_0;
typedef struct S_x19344_0 S_x19344_0;
typedef struct S_x70272_0 S_x70272_0;
typedef struct S_x78608 S_x78608;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x25c];
    short f358;
    char unknown35a[0x3e];
    int f398;
    char unknown39c[0x4];
    int f3a0;
    int f3a4;
    char unknown3a8[0x48];
    int f3f0;
    char unknown3f4[0x4];
    Arg0_3f8 *f3f8;
    Arg0_3fc *f3fc;
};
struct S_c8c053d84 {
    char unknown0[0x3dc];
    float f3dc;
};
struct S_x78608 {
    short f00;
};
struct Arg0_3f8 {
    char unknown0[0x4];
    short f04;
};
struct S_vv67 {
    char unknown0[0x4];
    short f04;
};
struct S_vv70 {
    char unknown0[0x4];
    short f04;
};
extern void request_actor_mode_zero_8c1275a8(void *);
extern int call_8c127120(Object *);
extern int create_effect_769c(void *, int);
extern void call_8c0a7608(Arg0_3f8 *, void *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void operation_8c128b80(void *);
extern void set_effect_bit0(void *);
extern void clear_effect_bit0(void *);
extern void create_effect_777c(void *, int);
extern void call_8c126650(Object *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void clear_flag29_request_8c128a2c(void *);
void operation_8c126af0(Object *o)
{
    int v1;
    int v8;
    int v9;
    int v5;
    int v26;
    int v3;
    char *v7;
    int v12;
    int v20;
    int v25;
    char *v6;
    int v19;
    int v24;
    int v46;
    int v2;
    int v27;
    int v34;
    int v45;
    int v4;
    int v44;
    int v47;
    int v53;
    S_vv67 *v67;
    S_vv70 *v70;
    int t1;
    int t2;
    S_c8c053d84 *t3;
    S_c8c053d84 *t4;
    int t5;
    S_c8c053d84 *t6;
    switch (o->f398) {
    case 0:
        v1 = (int)(((o->f3a4 & 0x1000000)) != 0);
        if (v1 != 0) {
            request_actor_mode_zero_8c1275a8((void *)o);
            return;
        }
        o->f3f0 = 0;
        t1 = call_8c127120(o);
        if (t1 == 0) {
            request_actor_mode_zero_8c1275a8((void *)o);
            return;
        }
        o->f3a4 |= 1;
        o->f3a4 &= -0x4020001;
        o->f3a0 = 0x258;
        o->f398 = 1;
        o->ff0 = 5;
        t2 = create_effect_769c((void *)(((char *)o + 0x324)), 0x128);
        o->f3f8 = (Arg0_3f8 *)t2;
        return;
    case 1:
        call_8c0a7608((Arg0_3f8 *)(o->f3f8), (void *)(((char *)o + 0x324)));
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        v2 = (int)0x3e0;
        v3 = (int)0;
        v4 = (int)0x3f4;
        v5 = (int)1;
        v19 = (int)v3;
        v20 = (int)v3;
        goto L_8c126c80;
        v6 = (char *)v3;
        v7 = (char *)v3;
        do {
            v8 = (int)((int)(v6) << 2);
            t3 = lookup_object_by_id((unsigned short)(*(S_x19344_0 **)((char *)((char *)((int)o + v2) + 0x0) + (v8))));
            if (t3 != 0) {
                if (!(t3->f3dc > 225.0f)) {
                    v12 = (int)(v7 + 1);
                    goto L_8c126c7e;
                }
                v9 = (int)0;
                v12 = (int)(v7 + 1);
                v5 = (int)v9;
            } else {
                *(int *)((char *)((char *)((int)o + v2) + 0x0) + (v8)) = 0xffff;
                v12 = (int)v7;
            }
L_8c126c7e:;
            v19 = (int)(v6 + 1);
            v20 = (int)v12;
L_8c126c80:;
            v6 = (char *)v19;
            v7 = (char *)v20;
        } while (*(short *)((char *)((char *)o + 0x0) + (v4)) > v19);
        if (--o->f3a0 > 0) {
            if (v7 != 0) {
                goto L_8c126cc0;
            }
        }
        o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
        request_actor_mode_zero_8c1275a8((void *)o);
        return;
L_8c126cc0:;
        if (v5 != 1) {
            return;
        }
        v24 = (int)0x3e0;
        v25 = (int)0x330;
        v26 = (int)0x3f4;
        v34 = (int)0;
        goto L_8c126d0c;
        v27 = (int)0;
        do {
            t4 = lookup_object_by_id((unsigned short)(*(S_x70272_0 **)((char *)((char *)((int)o + v24) + 0x0) + (v27 << 2))));
            if (t4 != 0) {
                operation_8c128b80((void *)t4);
                ((S_x78608 *)((int)o + v25))->f00 += *(short *)((char *)((char *)t4 + 0x0) + (v25));
            }
            v34 = (int)(v27 + 1);
L_8c126d0c:;
            v27 = (int)v34;
        } while (*(short *)((char *)((char *)o + 0x0) + (v26)) > v34);
        t5 = create_effect_769c((void *)(((char *)o + 0x324)), 0x12a);
        o->f3fc = (Arg0_3fc *)t5;
        set_effect_bit0((void *)(o->f3fc));
        o->ff0 = 0xb;
        o->f3a4 |= 0x4000000;
        o->f398 = 2;
        return;
    case 2:
        call_8c0a7608((Arg0_3f8 *)(o->f3f8), (void *)(((char *)o + 0x324)));
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        if (9.0f > o->ff8) {
            set_effect_bit0((void *)(o->f3fc));
        } else {
            clear_effect_bit0((void *)(o->f3fc));
            call_8c0a7608((Arg0_3f8 *)(o->f3fc), (void *)(((char *)o + 0x324)));
        }
        if (o->ff0 == 0xb) {
            return;
        }
        o->f3f8->f04 |= 1;
        o->f3f8 = (Arg0_3f8 *)0;
        create_effect_777c((void *)(((char *)o + 0x324)), 0x129);
        call_8c126650(o, 1);
        operation_8c01c5f0(o);
        o->f3a4 &= -0x4000001;
        o->f358 = 0x1e;
        o->f398 = 3;
        play_se_8c05fbf8(0x30030, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 3:
        call_8c0a7608((Arg0_3f8 *)(o->f3fc), (void *)(((char *)o + 0x324)));
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        o->f358 -= 1;
        if (o->f358 > 0) {
            return;
        }
        o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
        request_actor_mode_zero_8c1275a8((void *)o);
        return;
    case -1:
        if (((o->f3a4 & 0x4000000)) != 0) {
            call_8c126650(o, 1);
            operation_8c01c5f0(o);
        }
        v44 = (int)(((o->f3a4 & 0x1000000)) != 0);
        if (v44 == 0) {
            v45 = (int)0x3e0;
            v46 = (int)0x3f4;
            v53 = (int)0;
            goto L_8c126f66;
            v47 = (int)0;
            do {
                t6 = lookup_object_by_id((unsigned short)(*(S_x1232_0 **)((char *)((char *)((int)o + v45) + 0x0) + (v47 << 2))));
                if (t6 != 0) {
                    clear_flag29_request_8c128a2c((void *)t6);
                }
                v53 = (int)(v47 + 1);
L_8c126f66:;
                v47 = (int)v53;
            } while (*(short *)((char *)((char *)o + 0x0) + (v46)) > v53);
        }
        o->f3a4 |= 0x20000;
        if (o->f3f8 != 0) {
            v67 = (S_vv67 *)o->f3f8;
            v67->f04 |= 1;
            o->f3f8 = (Arg0_3f8 *)0;
        }
        if (o->f3fc != 0) {
            v70 = (S_vv70 *)o->f3fc;
            v70->f04 |= 1;
            o->f3fc = (Arg0_3fc *)0;
        }
        return;
    }
}
