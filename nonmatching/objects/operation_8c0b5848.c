/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b5848
 * function: operation_8c0b5848
 * language: c
 * reference size: 684 bytes
 * compiled size: 684 bytes (+0.0%)
 * differing lines: 68 of 310 reference instruction lines
 * differing bytes: 98
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46f2c0 S_L8c46f2c0;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_dc Arg0_0_dc;
typedef struct Arg1 Arg1;
typedef struct S_vv11 S_vv11;
typedef struct S_vv5 S_vv5;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Frame {
    float f00;
    float f04;
    float f08;
    Block_frame_c f0c;
};
struct Object {
    char unknown0[0x24];
    Vector3 f24;
    char unknown30[0x28];
    Vector3 f58;
    char unknown64[0xe0];
    int f144;
    float f148;
};
struct S_L8c46f2c0 {
    char unknown0[0x40];
    int f40;
    char unknown44[0x3c];
    int f80;
};
struct S_vv5 {
    float f00;
    float f04;
    float f08;
};
struct Arg0_0 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x18];
    Vector3 f60;
    char unknown6c[0x70];
    Arg0_0_dc *fdc;
};
struct Arg0_0_dc {
    char unknown0[0xc];
    float f0c;
    float f10;
};
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_vv11 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
struct S_c8c053d84 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
extern int g_8c467870;
extern S_L8c46f2c0 g_8c46f2c0;
extern int get_current_area_8c032b10(void);
extern float njScalor_8c37e480(Frame *);
extern int operation_8c052648(void *, void *, float);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
void *operation_8c0b5848(Object *o, Arg1 *a1)
{
    Frame frame;
    int v10;
    int v12;
    float v6;
    int v9;
    int v32;
    S_vv11 *v11;
    int v33;
    int v7;
    float v1;
    int v4;
    int v3;
    S_vv5 *v5;
    int v8;
    int t1;
    float t2;
    int t3;
    S_c8c053d84 *t4;
    int t5;
    t1 = get_current_area_8c032b10();
    if (t1 == 0xe) {
        v1 = (float)62500.0f;
    } else {
        v1 = (float)10000.0f;
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f24;
    v3 = (int)0;
    while (0x10 > v3) {
        v4 = (int)(v3 << 2);
        *(int *)((char *)&g_8c46f2c0 + (v4)) = 0;
        *(int *)((char *)&g_8c46f2c0.f40 + (v4)) = 0;
        v3 = (int)(v3 + 1);
    }
    (&g_8c46f2c0)->f80 = 0;
    if (o->f144 == 0) {
        return (void *)&g_8c46f2c0;
    }
    v5 = (S_vv5 *)((char *)o + 0x7c);
    v6 = (float)(&frame)->f0c.f00;
    (&frame)->f00 = v6 - v5->f00;
    (&frame)->f04 = (&frame)->f0c.f04 - v5->f04;
    (&frame)->f08 = (&frame)->f0c.f08 - v5->f08;
    t2 = njScalor_8c37e480(&frame);
    v7 = (int)0x144;
    (*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7)))->fdc->f10 = o->f148;
    (*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7)))->fdc->f0c = t2 * 0.5f;
    (&frame)->f0c.f00 = (v6 + v5->f00) * 0.5f;
    (&frame)->f0c.f04 = ((&frame)->f0c.f04 + v5->f04) * 0.5f;
    (&frame)->f0c.f08 = ((&frame)->f0c.f08 + v5->f08) * 0.5f;
    *(Vector3 *)&(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7)))->f3c = *(Vector3 *)&(&frame)->f0c;
    *(Vector3 *)&(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7)))->f60 = *(Vector3 *)&o->f58;
    if ((unsigned int)4 > (unsigned int)a1->f20) {
        v9 = (int)g_8c467870;
        v10 = (int)0;
        v8 = (int)0x10000000;
        while (v9 > v10) {
            v11 = (S_vv11 *)*(S_g8c467240 **)((char *)0x8c467240 + (v10 << 2));
            if (v11 != 0 && v11->f20 != a1->f20) {
                t3 = operation_8c052648((void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7))), (void *)v11, v1);
                if (t3 != 0) {
                    v12 = (int)v11->f34;
                    if (((v12 & 0x20000000)) == 0 && ((v12 & v8)) == 0) {
                        goto L_8c0b5a16;
                    }
                    *(int *)((char *)&g_8c46f2c0.f40 + ((&g_8c46f2c0)->f80 << 2)) = (int)(t3);
                    *(S_vv11 **)((char *)&g_8c46f2c0 + ((&g_8c46f2c0)->f80 << 2)) = v11;
                    (&g_8c46f2c0)->f80 += 1;
                    if ((&g_8c46f2c0)->f80 >= 0x10) {
                        (&g_8c46f2c0)->f80 = 0xf;
                        goto L_8c0b5a9a;
                    }
                }
            }
L_8c0b5a16:;
            v10 = (int)(v10 + 1);
        }
        v33 = (int)v11;
    } else {
        v32 = (int)0x10000000;
        v33 = (int)0;
        while (4 > v33) {
            t4 = lookup_object_by_id((unsigned short)v33);
            if (t4 != 0 && t4->f20 != a1->f20) {
                t5 = operation_8c052648((void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7))), (void *)t4, 10000.0f);
                if (t5 != 0 && ((t4->f34 & v32)) != 0) {
                    *(int *)((char *)&g_8c46f2c0.f40 + ((&g_8c46f2c0)->f80 << 2)) = (int)(t5);
                    *(S_c8c053d84 **)((char *)&g_8c46f2c0 + ((&g_8c46f2c0)->f80 << 2)) = t4;
                    (&g_8c46f2c0)->f80 += 1;
                    if ((&g_8c46f2c0)->f80 >= 0x10) {
                        (&g_8c46f2c0)->f80 = 0xf;
                        goto L_8c0b5a9a;
                    }
                }
            }
            v33 = (int)(v33 + 1);
        }
    }
L_8c0b5a9a:;
    return (void *)&g_8c46f2c0;
}
