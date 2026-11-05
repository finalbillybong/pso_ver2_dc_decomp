/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05f9e4
 * function: operation_8c05f9e4
 * language: c
 * reference size: 504 bytes
 * compiled size: 504 bytes (+0.0%)
 * differing lines: 28 of 213 reference instruction lines
 * differing bytes: 29
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2; offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B:
 *   RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46885c S_L8c46885c;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467a78 S_g8c467a78;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_x1552 S_x1552;
typedef struct S_x24784 S_x24784;
typedef struct S_x95200 S_x95200;
typedef struct S_x9936 S_x9936;
typedef struct Block_L8c46885c_0 {
    float f00;
    float f04;
    float f08;
} Block_L8c46885c_0;
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    Vector3 f90;
};
struct S_L8c46885c {
    Block_L8c46885c_0 f00;
};
struct S_x9936 {
    int f00;
};
struct S_x95200 {
    int f00;
};
struct S_x1552 {
    int f00;
};
struct S_x24784 {
    int f00;
};
extern S_g8c418248 *g_8c418248;
extern char g_8c467a41;
extern int g_8c4687f8;
extern S_g8c46ee80 *g_8c46ee80;
extern S_L8c46885c g_8c46885c;
extern char g_8c467b50[];
extern char g_8c468138[];
extern S_c8c021ef8 *lookup_low_id(int);
extern void get_info_8c34508c(void *, int);
extern int prepare_emit_slot(int, int);
extern void call_8c345918(void *);
extern void operation_8c1002d0(void);
void operation_8c05f9e4(void)
{
    char *v17;
    int v20;
    int v16;
    int v12;
    int v13;
    int v14;
    int v15;
    int v10;
    int v11;
    S_c8c021ef8 *t1;
    if (g_8c4687f8 == 0) {
        return;
    }
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        *(Vector3 *)&(&g_8c46885c)->f00 = *(Vector3 *)&t1->f3c;
    } else {
        if (g_8c46ee80 != 0) {
            *(Vector3 *)&(&g_8c46885c)->f00 = *(Vector3 *)&g_8c46ee80->f90;
        } else {
            (&g_8c46885c)->f00.f08 = 0.0f;
            (&g_8c46885c)->f00.f04 = 0.0f;
            (&g_8c46885c)->f00.f00 = 0.0f;
        }
    }
    v10 = (int)0;
    while (0x36 > v10) {
        get_info_8c34508c((void *)(*(S_g8c467a78 **)((char *)0x8c467a78 + (v10 << 2))), (int)(v10 * 0x1c + g_8c467b50));
        v10 = (int)(v10 + 1);
    }
    if (g_8c467a41 == 0) {
        v11 = (int)-0x201;
        v12 = (int)0x1000;
        v13 = (int)-0x401;
        v14 = (int)0x200;
        v15 = (int)-0x601;
        v16 = (int)0;
        while (0x36 > v16) {
            if (((*(int *)((char *)(g_8c467b50 + 0x18) + (v16 * 0x1c)) & 1)) != 0) {
                v17 = (char *)v16;
                v20 = (int)((int)(v17) << 5);
                ((S_x9936 *)(v20 + g_8c468138))->f00 &= v11;
                if (*(int *)((char *)(g_8c468138 + 0xc) + (v20)) > 0) {
                    ((S_x95200 *)(v20 + (char *)(g_8c468138 + 0xc)))->f00 -= 1;
                    if ((((S_x1552 *)(v20 + g_8c468138))->f00 & v12) != 0 && *(int *)((char *)(g_8c468138 + 0x8) + (v20)) != 0 && prepare_emit_slot(v16, 1) == 0) {
                        *(int *)((char *)(g_8c468138 + 0xc) + (v20)) = 0;
                        call_8c345918((void *)(*(S_g8c467a78 **)((char *)0x8c467a78 + (v16 << 2))));
                        ((S_x1552 *)(v20 + g_8c468138))->f00 &= v13;
                    }
                } else {
                    call_8c345918((void *)(*(S_g8c467a78 **)((char *)0x8c467a78 + (v16 << 2))));
                    ((S_x24784 *)(v20 + g_8c468138))->f00 &= v13;
                }
            } else {
                if ((((S_x1552 *)((v16 << 5) + g_8c468138))->f00 & v14) == 0) {
                    *(int *)((char *)g_8c468138 + (v16 << 5)) &= v13;
                } else {
                    *(int *)((char *)(g_8c468138 + 0xc) + (v16 << 5)) -= 1;
                    if (!(*(int *)((char *)(g_8c468138 + 0xc) + (v16 << 5)) > 0)) {
                        *(int *)((char *)g_8c468138 + (v16 << 5)) &= v15;
                        call_8c345918((void *)(*(S_g8c467a78 **)((char *)0x8c467a78 + (v16 << 2))));
                    }
                }
            }
            v16 = (int)(v16 + 1);
        }
    }
    operation_8c1002d0();
}
