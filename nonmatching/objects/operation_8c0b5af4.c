/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b5af4
 * function: operation_8c0b5af4
 * language: c
 * reference size: 584 bytes
 * compiled size: 584 bytes (+0.0%)
 * differing lines: 40 of 257 reference instruction lines
 * differing bytes: 62
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
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_dc Arg0_0_dc;
typedef struct Arg1 Arg1;
typedef struct S_vv10 S_vv10;
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
struct S_vv10 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c467870;
extern int g_8c467874;
extern S_L8c46f2c0 g_8c46f2c0;
extern int get_current_area_8c032b10(void);
extern float njScalor_8c37e480(Vector3 *);
extern int operation_8c052648(void *, void *, float);
void *operation_8c0b5af4(Object *o, Arg1 *a1)
{
    Vector3 pos;
    Vector3 d;
    S_vv10 *v10;
    int v4;
    S_vv5 *v5;
    int v9;
    int v6;
    int v8;
    int v11;
    float v1;
    int v12;
    int v3;
    int v7;
    int t1;
    float t2;
    int t3;
    int t4;
    t1 = get_current_area_8c032b10();
    if (t1 == 0xe) {
        v1 = (float)62500.0f;
    } else {
        v1 = (float)10000.0f;
    }
    pos = *(Vector3 *)&o->f24;
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
    d.x = pos.x - v5->f00;
    d.y = pos.y - v5->f04;
    d.z = pos.z - v5->f08;
    t2 = njScalor_8c37e480(&d);
    v6 = (int)0x144;
    (*(Arg0_0 **)((char *)((char *)o + 0x0) + (v6)))->fdc->f10 = o->f148;
    (*(Arg0_0 **)((char *)((char *)o + 0x0) + (v6)))->fdc->f0c = t2 * 0.5f;
    v7 = (int)0x40000000;
    v8 = (int)-0x80000000;
    pos.x = (pos.x + v5->f00) * 0.5f;
    pos.y = (pos.y + v5->f04) * 0.5f;
    pos.z = (pos.z + v5->f08) * 0.5f;
    *(Vector3 *)&(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v6)))->f3c = pos;
    *(Vector3 *)&(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v6)))->f60 = *(Vector3 *)&o->f58;
    v9 = (int)g_8c467874;
    while (g_8c467870 > v9) {
        v10 = (S_vv10 *)*(S_g8c467240 **)((char *)0x8c467240 + (v9 << 2));
        if (v10 != 0) {
            v11 = (int)v10->f34;
            if (((v11 & 0x20000000)) != 0) {
                if (v10->f20 == a1->f20) {
                    goto L_8c0b5cd4;
                }
                t3 = operation_8c052648((void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v6))), (void *)v10, v1);
                if (t3 == 0) {
                    goto L_8c0b5cd4;
                }
                *(int *)((char *)&g_8c46f2c0.f40 + ((&g_8c46f2c0)->f80 << 2)) = (int)(t3);
                *(S_vv10 **)((char *)&g_8c46f2c0 + ((&g_8c46f2c0)->f80 << 2)) = v10;
                (&g_8c46f2c0)->f80 += 1;
                v12 = (int)(&g_8c46f2c0)->f80;
                if (!(v12 >= 0x10)) {
                    goto L_8c0b5cd4;
                }
                (&g_8c46f2c0)->f80 = 0xf;
                goto L_8c0b5cde;
            }
            if (((v11 & v7)) != 0 && ((v11 & v8)) == 0) {
                t4 = operation_8c052648((void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v6))), (void *)v10, 10000.0f);
                if (t4 != 0) {
                    return 0;
                }
            }
        }
L_8c0b5cd4:;
        v9 = (int)(v9 + 1);
    }
L_8c0b5cde:;
    return (void *)&g_8c46f2c0;
}
