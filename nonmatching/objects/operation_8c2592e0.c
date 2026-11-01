/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2592e0
 * function: operation_8c2592e0
 * language: c
 * reference size: 780 bytes
 * compiled size: 780 bytes (+0.0%)
 * differing lines: 22 of 340 reference instruction lines
 * differing bytes: 16
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_10 S_frame_10;
typedef struct S_frame_14 S_frame_14;
typedef struct S_frame_18 S_frame_18;
typedef struct S_frame_1c S_frame_1c;
typedef struct S_frame_20 S_frame_20;
typedef struct S_frame_4 S_frame_4;
typedef struct S_frame_8 S_frame_8;
typedef struct S_frame_c S_frame_c;
typedef struct S_g8c340274 S_g8c340274;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_53c S_g8c467180_2c_53c;
typedef struct S_g8c467180_2c_540 S_g8c467180_2c_540;
typedef struct S_g8c467180_2c_544 S_g8c467180_2c_544;
typedef struct Object Object;
struct Object {
    char unknown0[0x12c];
    int f12c;
    int f130;
    int f134;
    int f138;
    char f13c;
    char unknown13d[0xb];
    int f148;
    int f14c;
    char unknown150[0xc];
    int f15c;
};
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    S_frame_8 *f08;
    S_frame_c *f0c;
    S_frame_10 *f10;
    S_frame_14 *f14;
    S_frame_18 *f18;
    S_frame_1c *f1c;
    S_frame_20 *f20;
    int f24;
    char unknown28[0x2c];
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x53c];
    S_g8c467180_2c_53c *f53c;
    S_g8c467180_2c_540 *f540;
    S_g8c467180_2c_544 *f544;
    int f548;
    int f54c;
};
extern S_g8c467180 *g_8c467180;
extern char g_8c340284[];
extern void operation_8c238204(int, void *, void *, void *);
extern void sprintf_8c12b048(void *, void *, ...);
extern void call_8c12b0dc(void *, void *, int);
extern int strncmp(void *, void *, int);
void operation_8c2592e0(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    int v5;
    int v9;
    int v15;
    int v20;
    int v22;
    int v21;
    int t1;
    v2 = (int)0;
    v1 = (int)0x100;
    while (v1 > v2) {
        *(char *)((char *)((char *)o + 0x2c) + (v2)) = 0;
        v2 = (int)(v2 + 1);
    }
    if (o->f12c == 9) {
        v5 = (int)((int)o->f130 + 0x41);
    } else {
        v3 = (int)((int)o->f12c + 0x31);
        v5 = (int)v3;
    }
    operation_8c238204((int)(o->f14c), (void *)(&(&frame)->f20), (void *)(&(&frame)->f1c), (void *)(&(&frame)->f18));
    sprintf_8c12b048((void *)(&(&frame)->f24), (void *)((g_8c340284 + 0x15)), g_8c467180->f2c->f53c, (char)v5, (&frame)->f20, (&frame)->f1c, (&frame)->f18);
    call_8c12b0dc((void *)(((char *)o + 0x2c)), (void *)(&(&frame)->f24), 0x30);
    if (o->f12c != 9 && o->f134 != 0) {
        operation_8c238204((int)(o->f134), (void *)(&(&frame)->f14), (void *)(&(&frame)->f10), (void *)(&(&frame)->f0c));
        sprintf_8c12b048((void *)(&(&frame)->f24), (void *)((g_8c340284 + 0x36)), g_8c467180->f2c->f540, (&frame)->f14, (&frame)->f10, (&frame)->f0c);
        call_8c12b0dc((void *)(((char *)o + 0x2c)), (void *)(&(&frame)->f24), 0x30);
    }
    if (o->f138 == 0) {
        call_8c12b0dc((void *)(((char *)o + 0x2c)), (void *)((g_8c340284 + 0x4b)), 0x30);
        call_8c12b0dc((void *)(((char *)o + 0x2c)), (void *)(g_8c467180->f2c->f544), 0x30);
    } else {
        v9 = (int)((int)o->f14c - (int)o->f138);
        if (v9 == 0) {
            sprintf_8c12b048((void *)(&(&frame)->f24), (void *)((g_8c340284 + 0x50)));
        } else {
            if (v9 >= 0) {
                operation_8c238204(v9, (void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (void *)(&frame));
                sprintf_8c12b048((void *)(&(&frame)->f24), (void *)((g_8c340284 + 0x5c)), (&frame)->f08, (&frame)->f04, (&frame)->f00);
            } else {
                operation_8c238204((int)(-v9), (void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (void *)(&frame));
                sprintf_8c12b048((void *)(&(&frame)->f24), (void *)((g_8c340284 + 0x6e)), (&frame)->f08, (&frame)->f04, (&frame)->f00, g_8c467180->f2c->f544);
            }
        }
        call_8c12b0dc((void *)(((char *)o + 0x2c)), (void *)(&(&frame)->f24), 0x30);
    }
    call_8c12b0dc((void *)(((char *)o + 0x2c)), (void *)((g_8c340284 + 0x84)), 2);
    v15 = (int)g_8c467180->f2c->f548;
    if (o->f13c != 0) {
        t1 = strncmp((void *)(&o->f13c), (void *)(((char *)o + 0x150)), 0xc);
        if (t1 != 0) {
            goto L_8c2594cc;
        }
    }
    sprintf_8c12b048((void *)(&(&frame)->f24), (void *)((g_8c340284 + 0x86)), v15, ((char *)o + 0x150));
    goto L_8c2594f0;
L_8c2594cc:;
    sprintf_8c12b048((void *)(&(&frame)->f24), (void *)((g_8c340284 + 0x8f)), v15, &o->f13c, ((char *)o + 0x150));
L_8c2594f0:;
    call_8c12b0dc((void *)(((char *)o + 0x2c)), (void *)(&(&frame)->f24), 0x30);
    call_8c12b0dc((void *)(((char *)o + 0x2c)), (void *)((g_8c340284 + 0x84)), 2);
    v20 = (int)o->f15c;
    if (v20 != 0) {
        v21 = (int)g_8c467180->f2c->f54c;
        if (o->f148 != 0) {
            v22 = (int)o->f148;
            if (v22 != v20) {
                goto L_8c25954e;
            }
        }
        sprintf_8c12b048((void *)&(&frame)->f24, (void *)(g_8c340284 + 0x86), v21, *(S_g8c340274 **)((char *)0x8c340274 + (o->f15c << 2)));
        goto L_8c259570;
L_8c25954e:;
        sprintf_8c12b048((void *)&(&frame)->f24, (void *)(g_8c340284 + 0x8f), v21, *(S_g8c340274 **)((char *)0x8c340274 + (v22 << 2)), *(S_g8c340274 **)((char *)0x8c340274 + (v20 << 2)));
L_8c259570:;
        call_8c12b0dc((void *)(((char *)o + 0x2c)), (void *)(&(&frame)->f24), 0x30);
    }
}
