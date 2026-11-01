/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03d610
 * function: operation_8c03d610
 * language: c
 * reference size: 1508 bytes
 * compiled size: 1500 bytes (-0.5%)
 * differing lines: 343 of 555 reference instruction lines
 * differing bytes: 1023
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_4 S_frame_4;
typedef struct S_g8c41cb60 S_g8c41cb60;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_42c Arg0_42c;
typedef struct Arg0_42c_c Arg0_42c_c;
typedef struct Arg0_430 Arg0_430;
typedef struct Arg2 Arg2;
typedef struct Arg2_0 Arg2_0;
typedef struct S_vv22 S_vv22;
typedef struct S_vv27 S_vv27;
typedef struct S_vv53 S_vv53;
typedef struct S_vv60 S_vv60;
typedef struct S_vv60_0 S_vv60_0;
typedef struct S_x23024 S_x23024;
typedef struct S_x23584 S_x23584;
typedef struct S_x24032 S_x24032;
struct Object {
    int tag;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    char unknown18[0x404];
    int f41c;
    int f420;
    int f424;
    char unknown428[0x4];
    Arg0_42c *f42c;
    Arg0_430 *f430;
    int f434;
    int f438;
};
struct Arg2 {
    Arg2_0 *f00;
    int f04;
    char unknown8[0x4];
    short f0c;
    short f0e;
};
struct Frame {
    int f00;
    S_frame_4 *f04;
    int f08;
    char unknownc[0x1c];
    int f28;
    char unknown2c[0x28];
};
struct S_vv22 {
    char unknown0[0x8];
    char f08;
    char f09;
};
struct S_vv27 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x8];
    int f2c;
};
struct S_x23024 {
    int f00;
};
struct S_x23584 {
    int f00;
};
struct S_x24032 {
    int f00;
};
struct S_vv53 {
    char unknown0[0x20];
    int f20;
};
struct S_vv60 {
    S_vv60_0 *f00;
};
extern char g_8c2ef0e4[];
extern void operation_8c03dbf4(void *);
extern int operator_new_8c18de4c(int);
extern void drain_file_task_queue(void);
extern void operation_8c1a7e14(void *, int, int);
extern int operation_8c1a8290(void *);
extern void debug_error_stub_8c03ef80(void *, ...);
extern void operation_8c1a7ef8(void *, int);
extern int call_8c18e768(int, int);
extern void operation_8c03ef84(void *, ...);
extern void call_8c1a7f48(void *, S_vv22 *, int);
extern int game_malloc_buffer_8c011e9c(int);
extern void operation_8c1a8060(int, int);
extern void call_8c0787cc(int, void *);
extern void game_free_8c011ec0(int);
extern void call_8c03df30(Object *, int, int, void *);
extern int call_8c3877a8(void *, void *);
extern void operation_8c03e010(Object *, int, void *);
extern void strncpy_8c12b154(void *, int, int);
extern void operation_8c03ebbc(void *, int, int);
extern void operation_8c03eb90(void *);
extern void create_named_file_task(void *, void *);
Object *operation_8c03d610(Object *o, int a1, Arg2 *a2, int a3, int a4, int a5)
{
    Frame frame;
    char *v86;
    int v1;
    int v5;
    char *v87;
    int v11;
    int v14;
    int v19;
    int v26;
    char *v28;
    int v23;
    S_vv27 *v27;
    int v50;
    S_vv53 *v53;
    int v61;
    int v29;
    int v37;
    int v52;
    char *v54;
    int v65;
    int t6;
    S_vv22 *v22;
    int v68;
    int v73;
    int v56;
    int v64;
    S_vv60 *v60;
    int v35;
    int v36;
    int v80;
    int v66;
    int t1;
    int t2;
    int t3;
    char *v67;
    int t4;
    int t5;
    int t7;
    int t8;
    operation_8c03dbf4((void *)o);
    o->tag = a1 | 0x100;
    o->f41c = a3;
    o->f420 = a4;
    o->f424 = a5;
    o->f434 = a2->f0c;
    o->f438 = a2->f0e;
    v86 = (char *)o->f434;
    if ((int)(v86) > 0) {
        t1 = operator_new_8c18de4c((int)((int)(v86) << 4));
        o->f42c = (Arg0_42c *)t1;
        v5 = (int)0;
        goto L_8c03d6c8;
        v1 = (int)0;
        do {
            *(int *)((char *)((char *)o->f42c + 0x0) + (v1 << 4)) = 0;
            *(int *)((char *)((char *)o->f42c + 0x8) + (v1 << 4)) = 0;
            *(int *)((char *)((char *)o->f42c + 0xc) + (v1 << 4)) = 0;
            v5 = (int)(v1 + 1);
L_8c03d6c8:;
            v1 = (int)v5;
        } while (o->f434 > v5);
    }
    v87 = (char *)o->f438;
    if ((int)(v87) > 0) {
        t2 = operator_new_8c18de4c((int)((int)(v87) << 3));
        o->f430 = (Arg0_430 *)t2;
        v14 = (int)0;
        goto L_8c03d70c;
        v11 = (int)0;
        do {
            *(int *)((char *)((char *)o->f430 + 0x4) + (v11 << 3)) = 0;
            v14 = (int)(v11 + 1);
L_8c03d70c:;
            v11 = (int)v14;
        } while (o->f438 > v14);
    }
    v19 = (int)o->tag;
    if (((v19 & 1)) == 0) {
        v80 = (int)v19;
        v60 = (S_vv60 *)a2;
        v22 = (S_vv22 *)(a1 | 0x100);
    } else {
        drain_file_task_queue();
        *(int *)0x8c462cec = 1;
        operation_8c1a7e14((void *)(&(&frame)->f28), (int)(a2->f00), 0);
        t3 = operation_8c1a8290((void *)(&(&frame)->f28));
        if (!(t3 > 0)) {
            debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x43)), (void *)(a2->f00));
            o->f438 = 0;
            o->f434 = 0;
            operation_8c1a7ef8((void *)(&(&frame)->f28), -1);
            return o;
        }
        t4 = call_8c18e768((int)(((int)o->f434 + (int)o->f438 + 1 << 6) + 0x7ff), 0x800);
        if (t4 > 0x4000) {
            operation_8c03ef84((void *)((g_8c2ef0e4 + 0x5c)), t4);
        }
        v22 = (S_vv22 *)(void *)0x8c462d20;
        v23 = (int)((int)v22 + 0x40);
        call_8c1a7f48((void *)(&(&frame)->f28), v22, (int)(t4 << 0xb));
        switch (v22->f08) {
        case 80:
            *(char *)0x8c462ce0 = 1;
            break;
        default:
            *(char *)0x8c462ce0 = 0;
            break;
        }
        (&frame)->f04 = (S_frame_4 *)0x800;
        if (v22->f09 != 0) {
            o->tag |= 0x800;
            (&frame)->f04 = (S_frame_4 *)0x20;
        }
        v26 = (int)0;
        (&frame)->f00 = (int)(a2->f04);
        v50 = (int)v23;
        goto L_8c03da4e;
        v27 = (S_vv27 *)v23;
        v28 = (char *)v26;
        do {
            v29 = (int)v27->f20;
            if (v29 > 0x40000) {
                debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x79)), (void *)(v29 + -0x40000));
            }
            switch (*(char *)0x8c462ce0) {
            case 1:
                t5 = game_malloc_buffer_8c011e9c((int)(v29 + 0x800));
                if (t5 != 0) {
                    *(int *)0x8c4d5b10 = (int)(a2->f00);
                    call_8c1a7f48((void *)(&(&frame)->f28), (S_vv22 *)t5, v29);
                    operation_8c1a8060((int)(&(&frame)->f28), (int)((&frame)->f04));
                    *(int *)0x8c4d5b10 = (int)(*(int *)0x8c30b600);
                    call_8c0787cc(t5, (void *)(*(S_g8c41cb60 **)0x8c41cb60));
                    game_free_8c011ec0(t5);
                    call_8c03df30(o, v29, (int)(v28), (void *)(*(S_g8c41cb60 **)0x8c41cb60));
                    goto L_8c03d944;
                }
                debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x98)), (void *)(a2->f00));
                break;
            default:
                debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0xb4)));
                break;
            }
L_8c03d944:;
            if (((o->tag & 0x800)) != 0) {
                v35 = (int)((int)(v28) << 2);
                v36 = (int)(v35 << 2);
                if (*(int *)((char *)((char *)o->f42c + 0xc) + (v36)) != 0) {
                    v37 = (int)v27->f2c;
                    if (v37 != 0) {
                        t6 = game_malloc_buffer_8c011e9c((int)(v37 + 0x800));
                        call_8c1a7f48((void *)(&(&frame)->f28), (S_vv22 *)t6, v37);
                        operation_8c1a8060((int)(&(&frame)->f28), (int)((&frame)->f04));
                        call_8c0787cc(t6, (void *)(*(S_g8c41cb60 **)0x8c41cb60));
                        game_free_8c011ec0(t6);
                        t7 = call_8c3877a8((void *)(*(S_g8c41cb60 **)0x8c41cb60), (void *)(*(Arg0_42c_c **)((char *)((char *)o->f42c + 0xc) + (v36))));
                        if (t7 > 0) {
                            ((S_x23024 *)((int)o->f42c + v36))->f00 |= 1;
                            goto L_8c03da44;
                        }
                        ((S_x23584 *)((int)o->f42c + v36))->f00 |= 2;
                        debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0xd4)));
                    } else {
                        ((S_x24032 *)((int)o->f42c + v36))->f00 |= 2;
                        if (((o->tag & 4)) == 0) {
                            debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0xf0)));
                        }
                    }
                }
            }
L_8c03da44:;
            (&frame)->f00 += 4;
            v50 = (int)((int)v27 + 0x40);
            v26 = (int)(v28 + 1);
L_8c03da4e:;
            v27 = (S_vv27 *)v50;
            v28 = (char *)v26;
        } while (o->f434 > v26);
        v52 = (int)0;
        v60 = (S_vv60 *)a2;
        v61 = (int)v27;
        goto L_8c03db2a;
        v53 = (S_vv53 *)v27;
        v54 = (char *)v52;
        do {
            v56 = (int)v53->f20;
            if (v56 > 0x40000) {
                debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x79)), (void *)(v56 + -0x40000));
            }
            switch (*(char *)0x8c462ce0) {
            case 1:
                t8 = game_malloc_buffer_8c011e9c((int)(v56 + 0x800));
                call_8c1a7f48((void *)(&(&frame)->f28), (S_vv22 *)t8, v56);
                operation_8c1a8060((int)(&(&frame)->f28), (int)((&frame)->f04));
                call_8c0787cc(t8, (void *)(*(S_g8c41cb60 **)0x8c41cb60));
                game_free_8c011ec0(t8);
                operation_8c03e010(o, (int)(v54), (void *)(*(S_g8c41cb60 **)0x8c41cb60));
                break;
            default:
                debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x10e)));
                break;
            }
            v60 = (S_vv60 *)v56;
            v52 = (int)(v54 + 1);
            v61 = (int)((int)v53 + 0x40);
L_8c03db2a:;
            v53 = (S_vv53 *)v61;
            v54 = (char *)v52;
        } while (o->f438 > v52);
        operation_8c1a7ef8((void *)(&(&frame)->f28), -1);
        if (((o->tag & 0x800)) == 0) {
            v64 = (int)0x42c;
            v65 = (int)0x434;
            v66 = (int)0;
            v73 = (int)((int)v22 + 0x40);
            goto L_8c03db9e;
            v67 = (char *)v66;
            v68 = (int)((int)v22 + 0x40);
            do {
                if (*(int *)((char *)((char *)*(Arg0_0 **)((char *)&o->tag + (v64)) + 0xc) + ((int)(v67) << 4)) != 0) {
                    strncpy_8c12b154((void *)(&(&frame)->f08), v68, 0x20);
                    operation_8c03ebbc((void *)o, (int)(&(&frame)->f08), (int)(v67));
                }
                v66 = (int)(v67 + 1);
                v73 = (int)(v68 + 0x40);
L_8c03db9e:;
                v67 = (char *)v66;
                v68 = (int)v73;
            } while (*(int *)((char *)&o->tag + (v65)) > v66);
            v60 = (S_vv60 *)v64;
            v22 = (S_vv22 *)v68;
        }
        operation_8c03eb90((void *)o);
        goto L_8c03dbd8;
        v80 = (int)/* ? clobbered */ 0;
    }
    if (((v80 & 2)) != 0) {
        o->f0c = 0;
        o->f08 = 0;
        o->f04 = 0;
        o->f10 = 0;
        o->f14 = 0;
        create_named_file_task((void *)o, (void *)(v60->f00));
    }
L_8c03dbd8:;
    return o;
}
