/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25370c
 * function: operation_8c25370c
 * language: c
 * reference size: 1172 bytes
 * compiled size: 1192 bytes (+1.7%)
 * differing lines: 222 of 478 reference instruction lines
 * differing bytes: 1043
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_64 S_c8c021ef8_64;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_64 S_vv8_64;
typedef struct Block_frame_3c {
    float f00;
    float f04;
    float f08;
} Block_frame_3c;
typedef struct Block_frame_30 {
    float f00;
    float f04;
    float f08;
} Block_frame_30;
typedef struct Block_frame_24 {
    float f00;
    float f04;
    float f08;
} Block_frame_24;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    unsigned short f20;
    char unknown22[0xe];
    int f30;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    S_c8c021ef8_64 *f64;
    char unknown68[0x2a8];
    int f310;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Block_frame_18 f18;
    Block_frame_24 f24;
    Block_frame_30 f30;
    Block_frame_3c f3c;
};
struct S_vv8 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    S_vv8_64 *f64;
    char unknown68[0x90];
    float ff8;
};
extern Vector3 g_8c33fb5c;
extern Vector3 g_8c33fb68;
extern Vector3 g_8c33fb74;
extern Vector3 g_8c33fb80;
extern Vector3 g_8c33fb8c;
extern Vector3 g_8c33fb98;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c021ef8 *lookup_low_id(int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c253ba4(void *, void *, int);
void operation_8c25370c(Object *o)
{
    Frame frame;
    int v1;
    S_vv8 *v8;
    int v10;
    S_c8c021ef8 *t1;
    int v31;
    float v12;
    int v28;
    int v11;
    float v32;
    int v2;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = lookup_low_id((int)(o->f20));
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    if (t1 == 0) {
        return;
    }
    v1 = (int)t1->f310;
    v2 = (int)(((v1 & 2)) != 0);
    if (v2 == 0) {
        v10 = (int)v1;
        v8 = (S_vv8 *)t1;
    } else {
        v8 = (S_vv8 *)t1;
        if (o->f30 != 0) {
            *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&g_8c33fb5c;
            *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&g_8c33fb68;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (void *)(t1->f64));
            call_8c3be280(0, (void *)(&(&frame)->f3c), (void *)(&(&frame)->f3c));
            call_8c3be280(0, (void *)(&(&frame)->f30), (void *)(&(&frame)->f30));
            njPopMatrix_8c38accc(1);
            (&frame)->f3c.f00 += t1->f3c;
            (&frame)->f3c.f04 += t1->f40;
            (&frame)->f3c.f08 += t1->f44;
            (&frame)->f30.f00 += t1->f3c;
            (&frame)->f30.f04 += t1->f40;
            (&frame)->f30.f08 += t1->f44;
            t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
            if (t2 != 0) {
                operation_8c253ba4((void *)t2, (void *)(&(&frame)->f3c), (int)g_8c44be98);
            }
            t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
            if (t3 != 0) {
                operation_8c253ba4((void *)t3, (void *)(&(&frame)->f30), (int)g_8c44be98);
            }
            v8 = (S_vv8 *)&t1->f44;
        }
        o->f30 = 0;
        return;
    }
    v11 = (int)(((v10 & 4)) != 0);
    if (v11 == 0) {
        v28 = (int)v10;
    } else {
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&g_8c33fb74;
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&g_8c33fb80;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (void *)(v8->f64));
        call_8c3be280(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f24));
        call_8c3be280(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f18));
        njPopMatrix_8c38accc(1);
        (&frame)->f24.f00 += v8->f3c;
        (&frame)->f24.f04 += v8->f40;
        (&frame)->f24.f08 += v8->f44;
        (&frame)->f18.f00 += v8->f3c;
        (&frame)->f18.f04 += v8->f40;
        (&frame)->f18.f08 += v8->f44;
        v12 = (float)v8->ff8;
        if (!(12.0f > v12) && 13.0f > v12) {
            t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
            if (t4 == 0) {
                goto L_8c2539f0;
            }
            operation_8c253ba4((void *)t4, (void *)(&(&frame)->f24), (int)g_8c44be98);
            goto L_8c2539f0;
        }
        if (!(23.0f > v12) && 24.0f > v12) {
            t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
            if (t5 != 0) {
                operation_8c253ba4((void *)t5, (void *)(&(&frame)->f18), (int)g_8c44be98);
            }
        }
L_8c2539f0:;
        o->f30 = 1;
        return;
    }
    v31 = (int)(((v28 & 0x10)) != 0);
    if (v31 == 0) {
    } else {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c33fb8c;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c33fb98;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (void *)(v8->f64));
        call_8c3be280(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
        call_8c3be280(0, (void *)(&frame), (void *)(&frame));
        njPopMatrix_8c38accc(1);
        (&frame)->f0c.f00 += v8->f3c;
        (&frame)->f0c.f04 += v8->f40;
        (&frame)->f0c.f08 += v8->f44;
        (&frame)->f00.f00 += v8->f3c;
        (&frame)->f00.f04 += v8->f40;
        (&frame)->f00.f08 += v8->f44;
        v32 = (float)v8->ff8;
        if (!(5.0f > v32) && 6.2f > v32) {
            t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
            if (t6 == 0) {
                goto L_8c253b6e;
            }
            operation_8c253ba4((void *)t6, (void *)(&(&frame)->f0c), (int)g_8c44be98);
            goto L_8c253b6e;
        }
        if (!(15.0f > v32) && 16.2f > v32) {
            t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
            if (t7 != 0) {
                operation_8c253ba4((void *)t7, (void *)(&frame), (int)g_8c44be98);
            }
        }
L_8c253b6e:;
        o->f30 = 1;
        return;
    }
    o->f30 = 1;
}
