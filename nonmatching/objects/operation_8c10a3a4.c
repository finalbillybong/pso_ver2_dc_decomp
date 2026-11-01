/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10a3a4
 * function: operation_8c10a3a4
 * language: c
 * reference size: 472 bytes
 * compiled size: 472 bytes (+0.0%)
 * differing lines: 54 of 210 reference instruction lines
 * differing bytes: 38
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct S_vv44 S_vv44;
typedef struct S_vv46 S_vv46;
typedef struct S_vv47 S_vv47;
typedef struct S_vv49 S_vv49;
typedef struct S_vv9 S_vv9;
typedef struct S_x91984 S_x91984;
typedef struct Block_frame_10 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_10;
typedef struct Block_frame_0 {
    int f00;
    char unknown4[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x3ac];
    int f3e4;
};
struct S_vv9 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
struct Frame {
    Block_frame_0 f00;
    Block8 f08;
    Block_frame_10 f10;
};
struct S_x91984 {
    Vector3 f00;
};
struct S_vv44 {
    Block8 f00;
};
struct S_vv46 {
    float f00;
};
struct S_vv47 {
    Block8 f00;
};
struct S_vv49 {
    Block8 f00;
};
extern char gc_8c4d7c5c[];
extern void vector_sub_in_place_8c37f6f0(void *, int);
extern int query_capped_segment(void *, void *);
void operation_8c10a3a4(Object *o)
{
    Frame frame;
    S_vv9 *v9;
    int v1;
    int v8;
    int v7;
    int v6;
    int v2;
    float v10;
    float v11;
    int v5;
    int v43;
    S_vv44 *v44;
    int v45;
    S_vv46 *v46;
    int v48;
    S_vv47 *v47;
    S_vv49 *v49;
    int v52;
    int t1;
    *(int *)gc_8c4d7c5c = 0xffff;
    *(float *)(gc_8c4d7c5c + 0x4) = 0.0f;
    v1 = (int)0;
    if (((o->f34 & 0x10)) != 0) {
        v5 = (int)(*(int *)0x8c467874 + *(int *)0x8c467878);
    } else {
        v2 = (int)*(int *)0x8c467874;
        v5 = (int)v2;
    }
    v6 = (int)0x2000800;
    v8 = (int)0;
    v7 = (int)0x324;
    while (v5 > v8) {
        v9 = (S_vv9 *)*(S_g8c467240 **)((char *)0x8c467240 + (v8 << 2));
        if (v9 != (void *)o && v9 != 0 && ((v9->f34 & v6)) == 0) {
            *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&((S_x91984 *)((int)v9 + v7))->f00;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f10), (int)((int)o + v7));
            v11 = (float)((&frame)->f10.f00 * (&frame)->f10.f00 + (&frame)->f10.f08 * (&frame)->f10.f08);
            if (90000.0f > v11) {
                t1 = query_capped_segment((void *)o, (void *)((int)v9 + v7));
                if (t1 != 1) {
                    *(float *)((char *)(gc_8c4d7c5c + 0x4) + (v1 << 3)) = v11;
                    *(int *)((char *)gc_8c4d7c5c + (v1 << 3)) = v9->f20;
                    v1 = (int)(v1 + 1);
                    if (v1 >= 4) {
                        goto L_8c10a468;
                    }
                }
            }
        }
        v8 = (int)(v8 + 1);
    }
L_8c10a468:;
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c30bb08;
    if (v1 > 0) {
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)((char *)(gc_8c4d7c5c - 0x8) + (v1 << 3));
    }
    v43 = (int)v1;
    while (4 > v43) {
        v44 = (S_vv44 *)&*(int *)((char *)gc_8c4d7c5c + (v43 << 3));
        *(Block8 *)&v44->f00 = *(Block8 *)&(&frame)->f08;
        v43 = (int)(v43 + 1);
    }
    o->f3e4 = (int)(v1);
    for (v45 = 0; v45 < 3; v45++) {
        for (v48 = v45 + 1; v48 < 4; v48++) {
            if (*(float *)((char *)(gc_8c4d7c5c + 0x4) + (v45 << 3)) > *(float *)((char *)(gc_8c4d7c5c + 0x4) + (v48 << 3))) {
                *(Block8 *)&(&frame)->f00 = *(Block8 *)((char *)gc_8c4d7c5c + (v45 << 3));
                *(Block8 *)((char *)gc_8c4d7c5c + (v45 << 3)) = *(Block8 *)((char *)gc_8c4d7c5c + (v48 << 3));
                *(Block8 *)((char *)gc_8c4d7c5c + (v48 << 3)) = *(Block8 *)&(&frame)->f00;
            }
        }
    }
    v52 = (int)0;
    while (4 > v52) {
        *(int *)((char *)((char *)o + 0x3d4) + (v52 << 2)) = (int)(*(int *)((char *)gc_8c4d7c5c + (v52 << 3)));
        v52 = (int)(v52 + 1);
    }
}
