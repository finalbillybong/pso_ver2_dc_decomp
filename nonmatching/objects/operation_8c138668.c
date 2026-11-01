/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c138668
 * function: operation_8c138668
 * language: c
 * reference size: 1248 bytes
 * compiled size: 1268 bytes (+1.6%)
 * differing lines: 282 of 491 reference instruction lines
 * differing bytes: 1036
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x39e];
    int f3c0;
    char unknown3c4[0x48];
    short f40c;
    short f40e;
    char unknown410[0x4];
    short f414;
    char unknown416[0x2];
    short f418;
};
struct S_c8c053d84 {
    char unknown0[0x30a];
    short f30a;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    char unknown8[0x2];
    short f0a;
    char f0c;
    char f0d;
    short f0e;
    short f10;
    char unknown12[0x6];
    char f18;
    char f19;
    short f1a;
    short f1c;
    char unknown1e[0x2];
    short f20;
    short f22;
    unsigned char f24;
    char f25;
    short f26;
    int f28;
    char unknown2c[0x2];
    short f2e;
    short f30;
    char unknown32[0x2];
    char f34;
    char f35;
    short f36;
    short f38;
    char unknown3a[0x6];
    char f40;
    char f41;
    short f42;
    short f44;
    char unknown46[0x2];
    short f48;
    short f4a;
};
extern short g_8c313128;
extern int g_8c4d9b84;
extern int g_8c4d9b9c;
extern int g_8c4d9c18;
extern int call_8c139c70(void);
extern int call_8c04a52c(Object *, int, float);
extern S_c8c053d84 *lookup_object_by_id(unsigned short, int);
extern float object_random_fraction(void *);
extern void operation_8c036840(int);
extern int call_8c139da8(Object *);
extern void call_8c3889a4(void *, void *, int);
extern void operation_8c0368a8(void *);
void operation_8c138668(Object *o)
{
    Frame frame;
    int v2;
    int v5;
    int v3;
    int v6;
    int v7;
    short v12;
    int v13;
    int v21;
    int v24;
    int v22;
    int v25;
    int v26;
    short v31;
    int v32;
    int t1;
    int t2;
    S_c8c053d84 *t3;
    int t4;
    float t5;
    S_c8c053d84 *t6;
    int t7;
    float t8;
    float t9;
    t1 = call_8c139c70();
    if (t1 == 0) {
        return;
    }
    t2 = call_8c04a52c(o, 0, 400.0f);
    if ((unsigned short)t2 == 0xffff) {
        return;
    }
    if (o->f40e > 0) {
        o->f40e -= 1;
        return;
    }
    if (g_8c4d9b9c == 0) {
    } else {
        if (o->f40c != 0) {
            if (o->f40c == 1) {
                goto L_8c1387e8;
            }
            if (o->f40c == 2) {
                goto L_8c138800;
            }
            if (o->f40c == 3) {
                goto L_8c13881c;
            }
            return;
        }
        v3 = (int)0;
        v5 = (int)0;
        goto L_8c138718;
        v2 = (int)0;
        do {
            v3 = (int)0;
            if (*(char *)((char *)0x8c4da6ec + (v2 << 2)) == 0) {
                v3 = (int)1;
            }
            v5 = (int)(v2 + 1);
L_8c138718:;
            v2 = (int)v5;
        } while (6 > v5);
        if (v3 != 0) {
            t3 = lookup_object_by_id((unsigned short)g_8c313128, v3);
            if (t3 == 0) {
                return;
            }
            v6 = (int)(t3->f30a == 0);
            if (v6 == 0) {
                return;
            }
            t8 = object_random_fraction((void *)o);
            (&frame)->f40 = 0x15;
            (&frame)->f41 = 3;
            (&frame)->f42 = o->f20;
            (&frame)->f44 = 0;
            v7 = (int)((int)(t8 * 2.0f) + 2);
            (&frame)->f48 = o->f3c0;
            (&frame)->f4a = v7;
            operation_8c036840((int)(&(&frame)->f40));
            o->f3c0 -= v7;
            if (!(o->f3c0 >= 0)) {
                o->f3c0 += 6;
            }
            o->f40e = 0x1e;
            o->f40c = 1;
            return;
        }
        o->f40c = 2;
        return;
L_8c1387e8:;
        if (g_8c4d9c18 == 0) {
            return;
        }
        o->f40c = 2;
        return;
L_8c138800:;
        o->f414 = 0;
        g_8c4d9b84 = 0;
        o->f40c = 3;
        return;
L_8c13881c:;
        v12 = (short)o->f414;
        if (g_8c4d9b84 == 1 || v12 >= 2) {
            (&frame)->f34 = 0x15;
            g_8c4d9b84 = 1;
            (&frame)->f35 = 3;
            (&frame)->f36 = o->f20;
            (&frame)->f38 = 1;
            operation_8c036840((int)(&(&frame)->f34));
            o->f40c = 0;
            o->f40e = 0x1e;
            return;
        }
        o->f414 += 1;
        t4 = call_8c139da8(o);
        (&frame)->f24 = 0x84;
        (&frame)->f25 = 4;
        (&frame)->f26 = o->f20;
        if (t4 > o->f418) {
            v13 = (int)o->f418;
        } else {
            v13 = (int)t4;
        }
        (&frame)->f2e = v13;
        t5 = object_random_fraction((void *)o);
        (&frame)->f30 = (int)(t5 * 3.0f);
        call_8c3889a4((void *)(&(&frame)->f28), (void *)((void *)0x8c4d9ba4), 6);
        operation_8c0368a8((void *)(&(&frame)->f24));
        if (5 > o->f418) {
            o->f418 += 1;
        }
        o->f40e = 0x1e;
        return;
    }
    if (o->f40c != 0) {
        if (o->f40c == 1) {
            goto L_8c138a40;
        }
        if (o->f40c == 2) {
            goto L_8c138a54;
        }
        if (o->f40c == 3) {
            goto L_8c138a70;
        }
        return;
    }
    v22 = (int)0;
    v24 = (int)0;
    goto L_8c138978;
    v21 = (int)0;
    do {
        v22 = (int)0;
        if (*(char *)((char *)0x8c4da6ec + (v21 << 2)) == 0) {
            v22 = (int)1;
        }
        v24 = (int)(v21 + 1);
L_8c138978:;
        v21 = (int)v24;
    } while (6 > v24);
    if (v22 != 0) {
        t6 = lookup_object_by_id((unsigned short)g_8c313128, v22);
        if (t6 == 0) {
            return;
        }
        v25 = (int)(t6->f30a == 0);
        if (v25 == 0) {
            return;
        }
        t9 = object_random_fraction((void *)o);
        (&frame)->f18 = 0x15;
        (&frame)->f19 = 3;
        (&frame)->f1a = o->f20;
        (&frame)->f1c = 0;
        v26 = (int)((int)(t9 * 2.0f) + 2);
        (&frame)->f20 = o->f3c0;
        (&frame)->f22 = v26;
        operation_8c036840((int)(&(&frame)->f18));
        o->f3c0 -= v26;
        if (!(o->f3c0 >= 0)) {
            o->f3c0 += 6;
        }
        o->f40e = 0x1e;
        o->f40c = 1;
        return;
    }
    o->f40c = 2;
    return;
L_8c138a40:;
    if (g_8c4d9c18 != 0) {
        o->f40c = 2;
        return;
L_8c138a54:;
        o->f414 = 0;
        g_8c4d9b84 = 0;
        o->f40c = 3;
        return;
L_8c138a70:;
        v31 = (short)o->f414;
        if (g_8c4d9b84 == 1 || v31 >= 2) {
            (&frame)->f0c = 0x15;
            g_8c4d9b84 = 1;
            (&frame)->f0d = 3;
            (&frame)->f0e = o->f20;
            (&frame)->f10 = 1;
            operation_8c036840((int)(&(&frame)->f0c));
            o->f40c = 0;
            o->f40e = 0x1e;
            return;
        }
        o->f414 += 1;
        t7 = call_8c139da8(o);
        (&frame)->f00 = 0x16;
        (&frame)->f01 = 3;
        (&frame)->f02 = o->f20;
        if (t7 > o->f418) {
            v32 = (int)o->f418;
        } else {
            v32 = (int)t7;
        }
        (&frame)->f0a = v32;
        call_8c3889a4((void *)(&(&frame)->f04), (void *)((void *)0x8c4d9ba4), 6);
        operation_8c036840((int)(&frame));
        if (5 > o->f418) {
            o->f418 += 1;
        }
        o->f40e = 0x1e;
    }
}
