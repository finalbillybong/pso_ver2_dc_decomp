/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c118528
 * function: load_pvm_file_tls_8c118528
 * language: c
 * reference size: 564 bytes
 * compiled size: 568 bytes (+0.7%)
 * differing lines: 96 of 247 reference instruction lines
 * differing bytes: 315
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011eb4 S_c8c011eb4;
typedef struct Frame Frame;
typedef struct S_g8c4d82c0 S_g8c4d82c0;
typedef struct S_vv10 S_vv10;
typedef struct S_vv11 S_vv11;
typedef struct S_vv12 S_vv12;
typedef struct S_vv14 S_vv14;
typedef struct S_vv19 S_vv19;
typedef struct S_vv20 S_vv20;
typedef struct S_vv5 S_vv5;
typedef struct S_vv7 S_vv7;
typedef struct S_vv8 S_vv8;
struct Frame {
    char unknown0[0x4];
    int f04;
    unsigned short f08;
    unsigned short f0a;
};
struct S_g8c4d82c0 {
    char unknown0[0x4];
    char f04;
};
struct S_vv8 {
    char f00;
};
struct S_vv5 {
    unsigned char f00;
};
struct S_vv7 {
    unsigned char f00;
};
struct S_vv11 {
    char f00;
};
struct S_vv10 {
    unsigned char f00;
};
struct S_vv12 {
    unsigned char f00;
};
struct S_vv14 {
    unsigned char f00;
};
struct S_c8c011eb4 {
    int f00;
    int f04;
};
struct S_vv19 {
    S_vv20 *f00;
};
struct S_vv20 {
    char unknown0[0x1c];
    char f1c;
};
extern unsigned char *g_8c4d82c0;
extern char g_8c310538[];
extern void drain_file_task_queue(void);
extern int call_8c1a86d0(int);
extern void debug_error_stub_8c03ef80(void *, ...);
extern int call_8c18e768(int, int);
extern int game_malloc_buffer_8c011e9c(int);
extern int operation_8c03ed10(int);
extern void operation_8c1a8310(int, int);
extern void call_8c3889a4(Frame *, int, int);
extern void game_free_8c011ec0(int);
extern void operation_8c03ed70(int);
extern S_c8c011eb4 *call_8c011eb4(int, int);
extern void call_8c3877a8(int, S_c8c011eb4 *);
S_c8c011eb4 *load_pvm_file_tls_8c118528(int a0)
{
    Frame frame;
    int v3;
    int v15;
    int v22;
    S_vv7 *v7;
    S_vv8 *v8;
    S_vv11 *v11;
    S_vv10 *v10;
    int v6;
    int v9;
    S_vv12 *v12;
    S_vv5 *v5;
    int v13;
    int v21;
    S_vv19 *v19;
    S_c8c011eb4 *t4;
    int v18;
    S_vv20 *v20;
    S_vv14 *v14;
    int v34;
    int t1;
    int t2;
    int v1;
    int acc;
    v1 = (int)0;
    drain_file_task_queue();
    t1 = call_8c1a86d0(a0);
    if (!(t1 > 0)) {
        debug_error_stub_8c03ef80((void *)((void *)g_8c310538), a0);
        return (S_c8c011eb4 *)(v1);
    }
    t2 = call_8c18e768((int)(t1 + 0x7ff), 0x800);
    if ((t2 << 0xb) > 0x40000) {
        v1 = game_malloc_buffer_8c011e9c((int)(t2 << 0xb));
        v3 = (int)v1;
    } else {
        v3 = operation_8c03ed10((int)(g_8c310538 + 0x1e));
    }
    operation_8c1a8310(a0, v3);
    g_8c4d82c0 = (unsigned char *)v3;
    call_8c3889a4((Frame *)((&frame)), v3, 4);
    g_8c4d82c0 += 4;
    acc = (unsigned char)*g_8c4d82c0++;
    acc |= (unsigned char)*g_8c4d82c0++ << 8;
    acc |= (unsigned char)*g_8c4d82c0++ << 0x10;
    acc |= (unsigned char)*g_8c4d82c0++ << 0x18;
    (&frame)->f04 = acc;
    acc = (unsigned char)*g_8c4d82c0++;
    acc |= (unsigned char)*g_8c4d82c0++ << 8;
    (&frame)->f08 = acc;
    acc = (unsigned char)*g_8c4d82c0++;
    acc |= (unsigned char)*g_8c4d82c0++ << 8;
    (&frame)->f0a = acc;
    v15 = (int)((&frame)->f0a & 0xffff);
    if (v15 == 0) {
        if (v1 != 0) {
            game_free_8c011ec0(v1);
        } else {
            operation_8c03ed70((int)(g_8c310538 + 0x1e));
        }
        return 0;
    }
    t4 = call_8c011eb4(1, (int)(v15 * 0x2c + 8));
    t4->f04 = (int)(v15);
    v19 = (S_vv19 *)((char *)t4 + 0x8);
    v18 = (int)((int)v19 + v15 * 0xc);
    t4->f00 = (int)(((char *)t4 + 0x8));
    v20 = (S_vv20 *)v18;
    v21 = (int)0;
    while (v15 > v21) {
        v19->f00 = v20;
        v22 = (int)((char *)g_8c4d82c0 + 0x2);
        g_8c4d82c0 = (unsigned char *)(int)(v22);
        if ((((&frame)->f08 & 0xffff & 1)) != 0) {
            call_8c3889a4((Frame *)v20, v22, 0x1c);
            g_8c4d82c0 = (unsigned char *)((int)g_8c4d82c0 + 0x1c);
            v20->f1c = 0;
        }
        v34 = (int)((&frame)->f08 & 0xffff);
        if (((v34 & 2)) != 0) {
            g_8c4d82c0 = (unsigned char *)((int)g_8c4d82c0 + 2);
        }
        if (((v34 & 4)) != 0) {
            g_8c4d82c0 = (unsigned char *)((int)g_8c4d82c0 + 2);
        }
        if (((v34 & 8)) != 0) {
            g_8c4d82c0 = (unsigned char *)((int)g_8c4d82c0 + 4);
        }
        v21 = (int)(v21 + 1);
        v20 = (S_vv20 *)((char *)v20 + 32);
        v19 = (S_vv19 *)((char *)v19 + 12);
    }
    call_8c3877a8(v3, t4);
    if (v1 != 0) {
        game_free_8c011ec0(v1);
    } else {
        operation_8c03ed70((int)(g_8c310538 + 0x1e));
    }
    return t4;
}
