/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c138b48
 * function: operation_8c138b48
 * language: c
 * reference size: 2072 bytes
 * compiled size: 2068 bytes (-0.2%)
 * differing lines: 156 of 777 reference instruction lines
 * differing bytes: 946
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
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
typedef struct S_x39920 S_x39920;
typedef struct S_x41552 S_x41552;
typedef struct S_x42560 S_x42560;
typedef struct S_x60944 S_x60944;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x332];
    unsigned short f354;
    char unknown356[0xb6];
    short f40c;
    short f40e;
    char unknown410[0x10];
    int f420;
};
struct S_c8c053d84 {
    char unknown0[0x3a4];
    int f3a4;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    char unknown6[0x2];
    short f08;
    char unknowna[0x2];
    char f0c;
    char f0d;
    short f0e;
    short f10;
    short f12;
    char unknown14[0x4];
    char f18;
    char f19;
    short f1a;
    short f1c;
    char unknown1e[0x6];
    char f24;
    char f25;
    short f26;
    short f28;
    short f2a;
    char unknown2c[0x4];
    char f30;
    char f31;
    short f32;
    short f34;
    short f36;
    char unknown38[0x4];
    char f3c;
    char f3d;
    short f3e;
    short f40;
    char unknown42[0x2];
    short f44;
    char unknown46[0x2];
    char f48;
    char f49;
    short f4a;
    short f4c;
    short f4e;
    char unknown50[0x4];
    char f54;
    char f55;
    short f56;
    short f58;
    char unknown5a[0x6];
    char f60;
    char f61;
    short f62;
    short f64;
    short f66;
    char unknown68[0x4];
    char f6c;
    char f6d;
    short f6e;
    short f70;
    short f72;
    char unknown74[0x4];
    float f78;
    char unknown7c[0x10];
    int f8c[5];
};
struct S_x42560 {
    float f00;
};
struct S_x39920 {
    float f00;
};
struct S_x60944 {
    float f00;
};
struct S_x41552 {
    float f00;
};
extern short g_8c313118;
extern int g_8c4d9b9c;
extern int operation_8c139ce0(void);
extern int call_8c04a52c(Object *, int, float);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern float object_random_fraction(void *);
extern int operation_8c13a5bc(void);
extern int operation_8c13a61c(void);
extern void operation_8c036840(int);
extern int operation_8c154d00(void *);
extern void operation_8c154e08(void);
extern int call_8c154584(S_c8c053d84 *);
void operation_8c138b48(Object *o)
{
    Frame frame;
    int v1;
    int v3;
    int v4;
    float v5;
    S_c8c053d84 *t3;
    int v9;
    int v11;
    int v13;
    int v17;
    int v16;
    int v21;
    int v19;
    int v7;
    int v30;
    int v34;
    int v43;
    int v47;
    int v54;
    int v57;
    int v61;
    int v71;
    int v75;
    int v83;
    int t1;
    int t2;
    int v28;
    float t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    float t18;
    int t19;
    t1 = operation_8c139ce0();
    if (t1 == 0) {
        return;
    }
    t2 = call_8c04a52c(o, 0, 400.0f);
    v1 = (int)0xffff;
    if ((unsigned short)t2 == (unsigned short)v1) {
        return;
    }
    if (o->f40e > 0) {
        o->f40e -= 1;
        return;
    }
    t3 = lookup_object_by_id((unsigned short)g_8c313118);
    if (t3 == 0) {
        return;
    }
    if (g_8c4d9b9c == 0) {
    } else {
        v3 = (int)t3->f3a4;
        v4 = !(v3 & 0x80000);
        v5 = (float)0.0f;
        v7 = (int)0;
        if (v4 != 0) {
            (&frame)->f78 = 0.27f;
            v5 = (float)(v5 + 0.27f);
            *(int *)((char *)frame.f8c + (0 << 2)) = 0;
            v7 = (int)(v7 + 1);
        }
        v9 = !(v3 & 0x20000);
        if (v9 != 0) {
            v5 = (float)(v5 + 0.15f);
            ((S_x42560 *)((v7 << 2) + (char *)&(&frame)->f78))->f00 = v5;
            *(int *)((char *)frame.f8c + (v7 << 2)) = 1;
            v5 = (float)(v5 + 0.2f);
            ((S_x39920 *)((v7 + 1 << 2) + (char *)&(&frame)->f78))->f00 = v5;
            *(int *)((char *)frame.f8c + (v7 + 1 << 2)) = 4;
            v7 = (int)(v7 + 2);
        }
        v11 = !(v3 & 0x40000);
        if (v11 != 0) {
            v5 = (float)(v5 + 0.18f);
            ((S_x60944 *)((v7 << 2) + (char *)&(&frame)->f78))->f00 = v5;
            *(int *)((char *)frame.f8c + (v7 << 2)) = 2;
            v7 = (int)(v7 + 1);
        }
        v13 = !(v3 & 0x10000);
        if (v13 != 0) {
            v5 = (float)(v5 + 0.2f);
            ((S_x41552 *)((v7 << 2) + (char *)&(&frame)->f78))->f00 = v5;
            *(int *)((char *)frame.f8c + (v7 << 2)) = 3;
            v7 = (int)(v7 + 1);
        }
        if (v7 == 0) {
            return;
        }
        t4 = object_random_fraction((void *)o);
        o->f40c = -1;
        v19 = (int)&(&frame)->f78;
        v21 = (int)0;
        goto L_8c138cfe;
        v16 = (int)0;
        v17 = (int)&(&frame)->f78;
        do {
            if (!((v5 * t4) > *(float *)((char *)((char *)v17 + 0x0) + (v16 << 2)))) {
                o->f40c = *(int *)((char *)frame.f8c + (v16 << 2));
                goto L_8c138d02;
            }
            v16 = (int)(v16 + 1);
            v19 = (int)v17;
            v21 = (int)v16;
L_8c138cfe:;
            v16 = (int)v21;
            v17 = (int)v19;
        } while (v7 > v21);
L_8c138d02:;
        *(int *)((char *)o + 0x420) += 1;
        if (o->f420 >= 3) {
            o->f420 = 0;
            v28 = operation_8c13a5bc();
        } else {
            v28 = operation_8c13a61c();
        }
        o->f354 = v28;
        switch (o->f40c) {
        case 0:
            v30 = !(t3->f3a4 & 0x80000);
            if (v30 != 0) {
                (&frame)->f6c = 0x15;
                (&frame)->f6d = 3;
                (&frame)->f6e = o->f20;
                (&frame)->f70 = 3;
                (&frame)->f72 = v28;
                operation_8c036840((int)(&(&frame)->f6c));
                t5 = operation_8c154d00((void *)t3);
                o->f40e = (int)((float)t5 * 30.0f + 30.0f);
            }
            o->f40c += 1;
            break;
        case 1:
            v34 = !(t3->f3a4 & 0x20000);
            if (v34 != 0) {
                if ((o->f354 & 0xffff) != 0xffff) {
                    (&frame)->f60 = 0x15;
                    (&frame)->f61 = 3;
                    (&frame)->f62 = o->f20;
                    (&frame)->f64 = 4;
                    if (g_8c4d9b9c != 0) {
                        operation_8c154e08();
                    }
                    (&frame)->f66 = v28;
                    operation_8c036840((int)(&(&frame)->f60));
                    t6 = operation_8c154d00((void *)t3);
                    o->f40e = (int)((float)t6 * 30.0f + 30.0f);
                }
            }
            o->f40c += 1;
            break;
        case 2:
            v43 = !(t3->f3a4 & 0x40000);
            if (v43 != 0) {
                (&frame)->f54 = 0x15;
                (&frame)->f55 = 3;
                (&frame)->f56 = o->f20;
                (&frame)->f58 = 5;
                operation_8c036840((int)(&(&frame)->f54));
                t7 = operation_8c154d00((void *)t3);
                o->f40e = (int)((float)t7 * 30.0f + 30.0f);
            }
            o->f40c += 1;
            break;
        case 3:
            v47 = !(t3->f3a4 & 0x10000);
            if (v47 != 0) {
                if ((unsigned short)v28 != 0xffff) {
                    (&frame)->f48 = 0x15;
                    (&frame)->f49 = 3;
                    (&frame)->f4a = o->f20;
                    (&frame)->f4c = 6;
                    (&frame)->f4e = v28;
                    operation_8c036840((int)(&(&frame)->f48));
                    t8 = operation_8c154d00((void *)t3);
                    o->f40e = (int)((float)t8 * 30.0f + 30.0f);
                }
            }
            o->f40c = 0;
            break;
        case 4:
            v54 = !(t3->f3a4 & 0x20000);
            if (v54 == 0) {
                return;
            }
            (&frame)->f3c = 0x15;
            (&frame)->f3d = 3;
            (&frame)->f3e = o->f20;
            (&frame)->f40 = 7;
            t9 = object_random_fraction((void *)o);
            (&frame)->f44 = (int)(t9 * 40.0f);
            operation_8c036840((int)(&(&frame)->f3c));
            t10 = operation_8c154d00((void *)t3);
            o->f40e = (int)((float)t10 * 30.0f + 30.0f);
            break;
        }
        return;
    }
    switch (o->f40c) {
    case 0:
        v57 = !(t3->f3a4 & 0x80000);
        if (v57 != 0) {
            (&frame)->f30 = 0x15;
            (&frame)->f31 = 3;
            (&frame)->f32 = o->f20;
            (&frame)->f34 = 3;
            t11 = call_8c154584(t3);
            (&frame)->f36 = t11;
            operation_8c036840((int)(&(&frame)->f30));
            t12 = operation_8c154d00((void *)t3);
            o->f40e = (int)((float)t12 * 30.0f + 30.0f);
        }
        o->f40c += 1;
        return;
    case 1:
        v61 = !(t3->f3a4 & 0x20000);
        if (v61 != 0) {
            t13 = call_8c04a52c(o, 0, 400.0f);
            if ((unsigned short)t13 != 0xffff) {
                (&frame)->f24 = 0x15;
                (&frame)->f25 = 3;
                (&frame)->f26 = o->f20;
                (&frame)->f28 = 4;
                if (g_8c4d9b9c != 0) {
                    operation_8c154e08();
                }
                (&frame)->f2a = t13;
                operation_8c036840((int)(&(&frame)->f24));
                t14 = operation_8c154d00((void *)t3);
                o->f40e = (int)((float)t14 * 30.0f + 30.0f);
            }
            v28 = (int)t13;
        }
        o->f40c += 1;
        return;
    case 2:
        v71 = !(t3->f3a4 & 0x40000);
        if (v71 != 0) {
            (&frame)->f18 = 0x15;
            (&frame)->f19 = 3;
            (&frame)->f1a = o->f20;
            (&frame)->f1c = 5;
            operation_8c036840((int)(&(&frame)->f18));
            t15 = operation_8c154d00((void *)t3);
            o->f40e = (int)((float)t15 * 30.0f + 30.0f);
        }
        o->f40c += 1;
        return;
    case 3:
        v75 = !(t3->f3a4 & 0x10000);
        if (v75 != 0) {
            t16 = call_8c04a52c(o, 0, 400.0f);
            if ((unsigned short)t16 != 0xffff) {
                (&frame)->f0c = 0x15;
                (&frame)->f0d = 3;
                (&frame)->f0e = o->f20;
                (&frame)->f10 = 6;
                (&frame)->f12 = t16;
                operation_8c036840((int)(&(&frame)->f0c));
                t17 = operation_8c154d00((void *)t3);
                o->f40e = (int)((float)t17 * 30.0f + 30.0f);
            }
        }
        o->f40c = 0;
        return;
    case 4:
        v83 = !(t3->f3a4 & 0x20000);
        if (v83 != 0) {
            (&frame)->f00 = 0x15;
            (&frame)->f01 = 3;
            (&frame)->f02 = o->f20;
            (&frame)->f04 = 7;
            t18 = object_random_fraction((void *)o);
            (&frame)->f08 = (int)(t18 * 40.0f);
            operation_8c036840((int)(&frame));
            t19 = operation_8c154d00((void *)t3);
            o->f40e = (int)((float)t19 * 30.0f + 30.0f);
        }
        return;
    }
}
