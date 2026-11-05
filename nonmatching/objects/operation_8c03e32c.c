/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03e32c
 * function: operation_8c03e32c
 * language: c
 * reference size: 2148 bytes
 * compiled size: 2122 bytes (-1.2%)
 * differing lines: 287 of 717 reference instruction lines
 * differing bytes: 1751
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -26 bytes
 * runtime: DIVERGED on offline start: new character to Pioneer 2 (called 4309 times where the
 *   original is called 37 times); known incorrect
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c466d58 S_g8c466d58;
typedef struct S_g8c466d5c S_g8c466d5c;
typedef struct S_g8c466d60 S_g8c466d60;
typedef struct S_g8c466d60_28 S_g8c466d60_28;
typedef struct S_g8c466d68 S_g8c466d68;
typedef struct Object Object;
typedef struct Arg0_42c Arg0_42c;
typedef struct Arg0_42c_c Arg0_42c_c;
typedef struct Arg0_430 Arg0_430;
struct Object {
    int tag;
    int f04;
    int f08;
    int f0c;
    int f10;
    char unknown14[0x418];
    Arg0_42c *f42c;
    Arg0_430 *f430;
    int f434;
    int f438;
};
struct S_g8c466d5c {
    char unknown0[0x8];
    char f08;
};
struct S_g8c466d60 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    S_g8c466d60_28 *f28;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
};
extern char g_8c462ce0;
extern S_g8c466d58 *g_8c466d58;
extern S_g8c466d5c *g_8c466d5c;
extern S_g8c466d60 *g_8c466d60;
extern int g_8c466d64;
extern S_g8c466d68 *g_8c466d68;
extern char g_8c2ef0e4[];
extern char g_8c462d20[];
extern int operation_8c03ed10(int);
extern int call_8c34d35e(int, int);
extern void debug_error_stub_8c03ef80(void *, ...);
extern int call_8c18e768(int, int);
extern void operation_8c03ef84(void *, ...);
extern void ADXF_ReadNw32_8c34d6ae(void *, int);
extern void call_8c34d4e8(void *);
extern int ADXF_GetStat_8c34da3c(void *);
extern int game_malloc_buffer_8c011e9c(void *);
extern void call_8c0787cc(void *, int);
extern void call_8c03df30(Object *, int, int, int);
extern void game_free_8c011ec0(int);
extern int operation_8c03ec84(void *, int, int, int);
extern void operation_8c03ee90(int, int, int);
extern int ADXF_GetFsizeSct_8c34d9b8(int);
extern void operation_8c03eb90(void *);
extern void call_8c3877a8(void *, void *);
extern void operation_8c03ed70(int);
int operation_8c03e32c(Object *o, int a1)
{
    Frame frame;
    int v93;
    int v188;
    int v94;
    int v189;
    int v133;
    int v134;
    int v135;
    int v138;
    int v139;
    int v140;
    int v190;
    int v147;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    switch (o->f10) {
    case 0:
        g_8c466d5c = (S_g8c466d5c *)0;
        if (((o->tag & 0x200)) != 0) {
            o->f10 = 9;
            goto L_8c03eb80;
        }
        g_8c466d64 = 0;
        t1 = operation_8c03ed10((int)(g_8c2ef0e4 + 0x291));
        g_8c466d68 = (S_g8c466d68 *)(int)(t1);
        t2 = call_8c34d35e(a1, 0);
        g_8c466d58 = (S_g8c466d58 *)(int)(t2);
        if (t2 == 0) {
            debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x29d)), a1);
            o->f10 = 0xb;
            return -1;
        }
        t3 = call_8c18e768((int)(((int)o->f434 + (int)o->f438 + 1 << 6) + 0x7ff), 0x800);
        if (t3 > 0x4000) {
            operation_8c03ef84((void *)((g_8c2ef0e4 + 0x5c)), t3);
        }
        g_8c466d5c = (S_g8c466d5c *)(void *)g_8c462d20;
        g_8c466d60 = (S_g8c466d60 *)(g_8c462d20 + 0x40);
        ADXF_ReadNw32_8c34d6ae(g_8c466d58, t3);
        o->f10 = 1;
    case 1:
        if (((o->tag & 0x200)) != 0) {
            call_8c34d4e8(g_8c466d58);
            o->f10 = 9;
            goto L_8c03eb80;
        }
        t4 = ADXF_GetStat_8c34da3c(g_8c466d58);
        if (t4 != 3) {
            goto L_8c03eb80;
        }
        switch (g_8c466d5c->f08) {
        case 80:
            g_8c462ce0 = 1;
            break;
        default:
            g_8c462ce0 = 0;
            break;
        }
        o->f10 = 2;
        break;
    case 2:
        if (((o->tag & 0x200)) != 0) {
            call_8c34d4e8(g_8c466d58);
            o->f10 = 9;
            goto L_8c03eb80;
        }
        if (o->f04 < o->f434) {
            t5 = call_8c18e768((int)(g_8c466d60->f20 + 0x7ff), 0x800);
            switch (g_8c462ce0) {
            case 0:
            case 1:
                ((void (*)(void *, int, void *))ADXF_ReadNw32_8c34d6ae)(g_8c466d58, t5, g_8c466d68);
                break;
            default:
                debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x10e)));
                break;
            }
            o->f10 = 3;
            goto L_8c03eb80;
        }
        o->f10 = 4;
        break;
    case 3:
        if (((o->tag & 0x200)) != 0) {
            call_8c34d4e8(g_8c466d58);
            o->f10 = 9;
            goto L_8c03eb80;
        }
        t6 = ADXF_GetStat_8c34da3c(g_8c466d58);
        if (t6 != 3) {
            goto L_8c03eb80;
        }
        switch (g_8c462ce0) {
        case 1:
            t7 = game_malloc_buffer_8c011e9c((void *)(g_8c466d60->f28));
            if (t7 != 0) {
                call_8c0787cc(g_8c466d68, t7);
                v93 = (int)o->f04;
                v188 = (int)g_8c466d60->f28;
                o->f04 = v93 + 1;
                call_8c03df30(o, v188, v93, t7);
                game_free_8c011ec0(t7);
                goto L_8c03e694;
            }
            debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x2ba)));
            break;
        case 0:
            v94 = (int)o->f04;
            v189 = (int)g_8c466d60->f20;
            o->f04 = v94 + 1;
            call_8c03df30(o, v189, v94, (int)g_8c466d68);
        }
L_8c03e694:;
        g_8c466d60 = (S_g8c466d60 *)((int)g_8c466d60 + 0x40);
        o->f10 = 2;
        break;
    case 4:
        if (((o->tag & 0x200)) != 0) {
            call_8c34d4e8(g_8c466d58);
            o->f10 = 9;
            goto L_8c03eb80;
        }
        if (o->f08 < o->f438) {
            t8 = call_8c18e768((int)(g_8c466d60->f20 + 0x7ff), 0x800);
            switch (g_8c462ce0) {
            case 0:
            case 1:
                ((void (*)(void *, int, void *))ADXF_ReadNw32_8c34d6ae)(g_8c466d58, t8, g_8c466d68);
                break;
            default:
                debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x10e)));
                break;
            }
            o->f10 = 5;
            goto L_8c03eb80;
        }
        call_8c34d4e8(g_8c466d58);
        g_8c466d60 = (S_g8c466d60 *)(int)(((char *)g_8c466d5c + 0x40));
        o->f10 = 6;
        break;
    case 5:
        if (((o->tag & 0x200)) != 0) {
            call_8c34d4e8(g_8c466d58);
            o->f10 = 9;
            goto L_8c03eb80;
        }
        t9 = ADXF_GetStat_8c34da3c(g_8c466d58);
        if (t9 != 3) {
            goto L_8c03eb80;
        }
        switch (g_8c462ce0) {
        case 1:
            t10 = game_malloc_buffer_8c011e9c((void *)(g_8c466d60->f28));
            if (t10 != 0) {
                call_8c0787cc(g_8c466d68, t10);
                v133 = (int)o->f04;
                o->f04 = v133 + 1;
                v134 = (int)(v133 << 2);
                v135 = (int)(v134 << 1);
                *(int *)((char *)((char *)o->f430 + 0x4) + (v135)) = 0;
                (&frame)->f08 = 0;
                t11 = operation_8c03ec84((void *)o, t10, (int)(&(&frame)->f08), (int)(&(&frame)->f0c));
                if (t11 == 0) {
                    debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x1f3)));
                } else {
                    *(int *)((char *)((char *)o->f430 + 0x4) + (v135)) = (int)(t11);
                }
                game_free_8c011ec0(t10);
                goto L_8c03e906;
            }
            debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x2dd)));
            break;
        case 0:
            v138 = (int)o->f08;
            v190 = (int)g_8c466d68;
            o->f08 = v138 + 1;
            v139 = (int)(v138 << 2);
            v140 = (int)(v139 << 1);
            *(int *)((char *)((char *)o->f430 + 0x4) + (v140)) = 0;
            (&frame)->f00 = 0;
            t12 = operation_8c03ec84((void *)o, v190, (int)(&frame), (int)(&(&frame)->f04));
            if (t12 == 0) {
                debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x1f3)));
            } else {
                *(int *)((char *)((char *)o->f430 + 0x4) + (v140)) = (int)(t12);
            }
        }
L_8c03e906:;
        g_8c466d60 = (S_g8c466d60 *)((int)g_8c466d60 + 0x40);
        o->f10 = 4;
        break;
    case 6:
        while (*(int *)((char *)((char *)o->f42c + 0xc) + (g_8c466d64 << 4)) == 0) {
            g_8c466d64++;
            g_8c466d60 = (S_g8c466d60 *)((int)g_8c466d60 + 0x40);
            if (g_8c466d64 >= o->f434) {
                break;
            }
        }
        if (!(g_8c466d64 < o->f434)) {
        } else {
            operation_8c03ee90(0, (int)g_8c466d60, (int)(g_8c2ef0e4 + 0x215));
            t13 = call_8c34d35e((int)g_8c466d60, 0);
            g_8c466d58 = (S_g8c466d58 *)(int)(t13);
            if (t13 != 0) {
                t14 = ADXF_GetFsizeSct_8c34d9b8(t13);
                if (t14 > 0x80) {
                    debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x301)), g_8c466d60, t14 << 0xb);
                    g_8c466d64 += 1;
                    g_8c466d60 = (S_g8c466d60 *)((int)g_8c466d60 + 0x40);
                    goto L_8c03ea7c;
                }
                ((void (*)(void *, int, void *))ADXF_ReadNw32_8c34d6ae)(g_8c466d58, t14, g_8c466d68);
            } else {
                *(int *)((char *)((char *)o->f42c + 0x0) + (g_8c466d64 << 4)) |= 2;
                if (((o->tag & 4)) == 0) {
                    debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x321)), g_8c466d60);
                }
                g_8c466d64 += 1;
                g_8c466d60 = (S_g8c466d60 *)((int)g_8c466d60 + 0x40);
                goto L_8c03eb80;
            }
L_8c03ea7c:;
            o->f10 = 7;
            goto L_8c03eb80;
        }
        operation_8c03eb90((void *)o);
        o->f10 = 0xa;
        break;
    case 7:
        if (((o->tag & 0x200)) != 0) {
            call_8c34d4e8(g_8c466d58);
            o->f10 = 9;
            goto L_8c03eb80;
        }
        t15 = ADXF_GetStat_8c34da3c(g_8c466d58);
        if (t15 != 3) {
            goto L_8c03eb80;
        }
        call_8c3877a8(g_8c466d68, (void *)(*(Arg0_42c_c **)((char *)((char *)o->f42c + 0xc) + (g_8c466d64 << 4))));
        *(int *)((char *)((char *)o->f42c + 0x0) + (g_8c466d64 << 4)) |= 1;
        g_8c466d64 += 1;
        g_8c466d60 = (S_g8c466d60 *)((int)g_8c466d60 + 0x40);
        o->f0c += 1;
        o->f10 = 6;
        break;
    case 9:
        o->f10 = 0xa;
    case 10:
        operation_8c03ed70((int)(g_8c2ef0e4 + 0x291));
        g_8c466d5c = (S_g8c466d5c *)0;
        return 1;
    case 11:
        operation_8c03ed70((int)(g_8c2ef0e4 + 0x291));
        g_8c466d5c = (S_g8c466d5c *)0;
        return -1;
    case 8:
        break;
    }
L_8c03eb80:;
    return 0;
}
