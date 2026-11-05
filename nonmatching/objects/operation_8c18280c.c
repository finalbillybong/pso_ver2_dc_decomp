/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18280c
 * function: operation_8c18280c
 * language: c
 * reference size: 2512 bytes
 * compiled size: 2544 bytes (+1.3%)
 * differing lines: 870 of 851 reference instruction lines
 * differing bytes: 2142
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +32 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct Frame Frame;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9ec S_g8c4db9ec;
typedef struct S_g8c4dbaf0 S_g8c4dbaf0;
typedef struct S_g8c4dbb08 S_g8c4dbb08;
typedef struct S_g8c4dbb10 S_g8c4dbb10;
typedef struct S_vv18 S_vv18;
typedef struct S_vv19 S_vv19;
typedef struct S_vv20 S_vv20;
typedef struct S_vv21 S_vv21;
typedef struct S_vv27 S_vv27;
typedef struct S_vv29 S_vv29;
typedef struct S_vv33 S_vv33;
typedef struct S_vv39 S_vv39;
typedef struct S_vv45 S_vv45;
struct S_L8c4dbaf8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv33 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv29 {
    char unknown0[0x424];
    int f424;
    int f428;
    char unknown42c[0x8];
    int f434;
};
struct S_vv18 {
    char unknown0[0x4];
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
};
struct S_vv19 {
    char unknown0[0x4];
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
};
struct S_vv39 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv27 {
    char unknown0[0x424];
    int f424;
    int f428;
    char unknown42c[0x8];
    int f434;
};
struct S_vv20 {
    char unknown0[0x4];
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
};
struct S_vv21 {
    char unknown0[0x4];
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    char unknownc[0x30];
    int f3c;
    char unknown40[0xc];
    void *f4c;
    void *f50;
    short f54;
    short f56;
    int f58;
    short f5c;
    char unknown5e[0x2];
    int f60;
    int f64;
};
struct S_g8c4db9e4 {
    char unknown0[0xc];
    int f0c;
};
struct S_vv45 {
    int f00;
};
extern int get_game_mode_8c01c25c(void);
extern int operation_2391f4(void *);
extern void operation_8c191504(int);
extern void memset_8c12b880(int, int, int);
extern int operation_8c19b054(void);
extern int call_8c3727a0(int);
extern void operation_8c01b9e0(void);
extern void visit_hierarchy_10(void *);
extern void call_8c2280f0(void);
extern void wait_vsync_and_flip_8c380516(void);
extern int bu_check_busy_8c372d98(void *);
extern int call_8c372d38(void *, void *);
extern int game_malloc_buffer_8c011e9c(int);
extern void game_free_8c011ec0(int);
extern int call_8c372ebc(void *, void *, int, void *);
extern int operation_8c2324e0(void);
extern int game_malloc_8c011ecc(int);
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
extern void memcpy_8c12b77c(S_vv29 *, int, int);
extern void operation_8c17f210(void *);
extern int operation_8c2324c0(void);
extern int operation_8c2324a0(void);
extern void operation_8c17f3a8(S_vv27 *);
extern int operation_8c232480(void);
extern void call_8c011ed8(S_vv29 *);
extern void call_8c36d4c0(void *, Frame *);
extern void call_8c36d3ca(void *);
extern void call_8c17f024(void *);
extern void call_8c18e720(void *, void *);
extern void call_8c377d84(void *, void *);
extern void operation_8c17e194(void);
extern void word_operation_8c18490c(unsigned int);
extern int vmu_save_file_timestamped_overwrite_8c010298(int, int, int, int);
int operation_8c18280c(void)
{
    Frame frame;
    int t23;
    int v22;
    int v24;
    int t8;
    int v28;
    S_vv29 *v29;
    int t16;
    S_vv27 *v27;
    S_vv33 *v33;
    int v34;
    S_vv18 *v18;
    int v32;
    int v36;
    S_vv19 *v19;
    int v30;
    int v26;
    S_vv39 *v39;
    int v40;
    S_vv20 *v20;
    int v31;
    int v42;
    S_vv21 *v21;
    int v35;
    S_vv45 *v45;
    int v16;
    int v46;
    int v37;
    int v49;
    int v48;
    int v17;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int v41;
    int v43;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int v47;
    int t17;
    int t7;
    int t19;
    int t20;
    int t21;
    int t22;
    int t18;
    int t24;
    int t25;
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0xf) {
        goto L_8c182838;
    }
    if (*(int *)0x8c41bd10 == 1) {
        goto L_8c182838;
    }
    t2 = operation_2391f4((void *)((void *)0x8c41ce5c));
    if ((unsigned char)t2 != 1) {
L_8c182838:;
        return -0x10000;
    }
    operation_8c191504(0);
    v30 = (int)-0x10000;
    if (*(int *)0x8c4db9e0 == 0) {
        v24 = (int)v30;
        goto L_8c1831c8;
    } else {
        v24 = (int)v30;
    }
    if (*(int *)0x8c4db9e4 == 0) {
        goto L_8c1831c8;
    }
    v22 = (int)*(int *)0x8c4db9ec;
    if (v22 == 0) {
        goto L_8c1831c8;
    }
    memset_8c12b880(v22, 0, 0x16fc);
    t3 = operation_8c19b054();
    *(int *)0x8c4dbaf0 = (char)t3;
    t4 = call_8c3727a0((int)((char)t3));
    if (t4 != 1) {
        operation_8c01b9e0();
        return (int)(v24);
L_8c1828d4:;
        t5 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
        if (t5 == 1) {
            goto L_8c182900;
        }
        operation_8c01b9e0();
        return -0x10000;
L_8c182900:;
        if (*(int *)0x8c46ee80 == 0) {
            goto L_8c182910;
        }
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
L_8c182910:;
        call_8c2280f0();
        wait_vsync_and_flip_8c380516();
    }
    t6 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t6 != 0) {
        goto L_8c1828d4;
    }
    t7 = call_8c372d38((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870));
    if (t7 != 0) {
        operation_8c01b9e0();
        return (int)(t7);
    }
    v31 = (int)(*(int *)0x8c4dbb08 << 9);
    t8 = game_malloc_buffer_8c011e9c(v31);
    v28 = (int)t8;
    memset_8c12b880(t8, 0, v31);
    v24 = (int)v31;
    goto L_8c1829f0;
L_8c18299c:;
    t9 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t9 != 1) {
        if (v28 == 0) {
            goto L_8c1829b4;
        }
        game_free_8c011ec0(v28);
L_8c1829b4:;
        operation_8c01b9e0();
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    call_8c2280f0();
    wait_vsync_and_flip_8c380516();
L_8c1829f0:;
    t10 = call_8c372ebc((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870), v28, (void *)(*(S_g8c4dbb08 **)0x8c4dbb08));
    if (t10 != 0) {
        goto L_8c18299c;
    }
    goto L_8c182a80;
L_8c182a2c:;
    t11 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t11 != 1) {
        if (v28 == 0) {
            goto L_8c182a44;
        }
        game_free_8c011ec0(v28);
L_8c182a44:;
        operation_8c01b9e0();
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    call_8c2280f0();
    wait_vsync_and_flip_8c380516();
L_8c182a80:;
    t12 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t12 != 0) {
        goto L_8c182a2c;
    }
    t13 = operation_8c2324e0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t13);
    *(int *)0x8c4dbaf8 = (int)(t13);
    t23 = game_malloc_8c011ecc(0x16fc);
    v29 = (S_vv29 *)t23;
    if (v29 != 0) {
        operation_8c1acbc0((void *)((int)v29 + 0x3c4));
        operation_8c1acbc0((void *)((int)v29 + 0x3e8));
        v32 = (int)-1;
        v26 = (int)v32;
        v27 = (S_vv27 *)0;
        goto L_8c182b28;
L_8c182b00:;
        v33 = (S_vv33 *)((char *)((int)v29 + 4 + (int)(v27) * 0x1c) + 4);
        v33->f00 = 0;
        v33->f01 = -1;
        v33->f04 = 0;
        v33->f03 = 0;
        v33->f02 = 0;
        operation_1c7dd4((void *)((int)v33 + 8));
        v27 = (S_vv27 *)((char *)v27 + 1);
L_8c182b28:;
        if (0x1e > (int)v27) {
            goto L_8c182b00;
        }
    }
    memset_8c12b880((int)v29, 0, 0x16fc);
    memcpy_8c12b77c(v29, (int)(v28 + 0x280), 0x16fc);
    operation_8c17f210((void *)v29);
    v34 = (int)*(int *)0x8c4db9e4;
    v18 = (S_vv18 *)v34;
    if (((int)v29 + 0x420) != 0) {
        if (v18 != 0) {
            goto L_8c182b84;
        }
    }
    v24 = (int)0;
    goto L_8c182bca;
L_8c182b84:;
    if ((unsigned int)v29->f434 > (unsigned int)v18->f14) {
        v24 = (int)2;
        goto L_8c182bca;
    }
    if (v29->f424 != v18->f04) {
        v24 = (int)4;
        goto L_8c182bca;
    }
    if (v29->f428 == -0x5dfa4f9c) {
        if (v18->f08 == -0x5dfa4f9c) {
            goto L_8c182bc8;
        }
    }
    v24 = (int)5;
    goto L_8c182bca;
L_8c182bc8:;
    v35 = (int)6;
    v24 = (int)v35;
L_8c182bca:;
    if (v24 == 6) {
        goto L_8c182ee8;
    }
    t14 = operation_8c2324c0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t14);
    *(int *)0x8c4dbaf8 = (int)(t14);
    memcpy_8c12b77c(v29, (int)(v28 + 0x280), 0x16fc);
    operation_8c17f210((void *)v29);
    v36 = (int)*(int *)0x8c4db9e4;
    v19 = (S_vv19 *)v36;
    if (((int)v29 + 0x420) != 0) {
        if (v19 != 0) {
            goto L_8c182c2c;
        }
    }
    v24 = (int)0;
    goto L_8c182c72;
L_8c182c2c:;
    if ((unsigned int)v29->f434 > (unsigned int)v19->f14) {
        v24 = (int)2;
        goto L_8c182c72;
    }
    if (v29->f424 != v19->f04) {
        v24 = (int)4;
        goto L_8c182c72;
    }
    if (v29->f428 == -0x5dfa4f9c) {
        if (v19->f08 == -0x5dfa4f9c) {
            goto L_8c182c70;
        }
    }
    v24 = (int)5;
    goto L_8c182c72;
L_8c182c70:;
    v37 = (int)6;
    v24 = (int)v37;
L_8c182c72:;
    if (v24 == 6) {
        goto L_8c182ec8;
    }
    t15 = operation_8c2324a0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t15);
    *(int *)0x8c4dbaf8 = (int)(t15);
    t16 = game_malloc_8c011ecc(0x1550);
    if (t16 != 0) {
        operation_8c1acbc0((void *)(t16 + 0x3c4));
        operation_8c1acbc0((void *)(t16 + 0x3e8));
        v26 = (int)0;
        v27 = (S_vv27 *)t16;
        goto L_8c182cf8;
L_8c182cd0:;
        v39 = (S_vv39 *)((char *)((int)v27 + 4 + v26 * 0x1c) + 4);
        v39->f00 = 0;
        v39->f01 = -1;
        v39->f04 = 0;
        v39->f03 = 0;
        v39->f02 = 0;
        operation_1c7dd4((void *)((int)v39 + 8));
        v26 = (int)(v26 + 1);
L_8c182cf8:;
        if (0x1e > v26) {
            goto L_8c182cd0;
        }
    } else {
        v27 = (S_vv27 *)t16;
    }
    memset_8c12b880((int)v27, 0, 0x1550);
    memcpy_8c12b77c((S_vv29 *)v27, (int)(v28 + 0x280), 0x1550);
    operation_8c17f3a8(v27);
    v40 = (int)*(int *)0x8c4db9e4;
    v20 = (S_vv20 *)v40;
    if (((int)v27 + 0x420) != 0) {
        if (v20 != 0) {
            goto L_8c182d54;
        }
    }
    v24 = (int)0;
    goto L_8c182d9a;
L_8c182d54:;
    if ((unsigned int)v27->f434 > (unsigned int)v20->f14) {
        v24 = (int)2;
        goto L_8c182d9a;
    }
    if (v27->f424 != v20->f04) {
        v24 = (int)4;
        goto L_8c182d9a;
    }
    if (v27->f428 == -0x5dfa4f9c) {
        if (v20->f08 == -0x5dfa4f9c) {
            goto L_8c182d98;
        }
    }
    v24 = (int)5;
    goto L_8c182d9a;
L_8c182d98:;
    v41 = (int)6;
    v24 = (int)v41;
L_8c182d9a:;
    if (v24 != 6) {
        t17 = operation_8c232480();
        ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t17);
        *(int *)0x8c4dbaf8 = (int)(t17);
        memcpy_8c12b77c((S_vv29 *)v27, (int)(v28 + 0x280), 0x1550);
        operation_8c17f3a8(v27);
        v42 = (int)*(int *)0x8c4db9e4;
        v21 = (S_vv21 *)v42;
        if (((int)v27 + 0x420) == 0) {
            goto L_8c182dd2;
        }
        if (v21 != 0) {
            goto L_8c182df8;
        }
L_8c182dd2:;
        v24 = (int)0;
        goto L_8c182e3e;
L_8c182df8:;
        if (!((unsigned int)v27->f434 > (unsigned int)v21->f14)) {
            goto L_8c182e0c;
        }
        v24 = (int)2;
        goto L_8c182e3e;
L_8c182e0c:;
        if (v27->f424 == v21->f04) {
            goto L_8c182e20;
        }
        v24 = (int)4;
        goto L_8c182e3e;
L_8c182e20:;
        if (v27->f428 != -0x5dfa4f9c) {
            goto L_8c182e30;
        }
        if (v21->f08 == -0x5dfa4f9c) {
            goto L_8c182e3c;
        }
L_8c182e30:;
        v24 = (int)5;
        goto L_8c182e3e;
L_8c182e3c:;
        v43 = (int)6;
        v24 = (int)v43;
L_8c182e3e:;
        if (v24 == 6) {
            goto L_8c182e78;
        }
        if (v28 == 0) {
            goto L_8c182e4e;
        }
        game_free_8c011ec0(v28);
L_8c182e4e:;
        if (v29 == 0) {
            goto L_8c182e58;
        }
        call_8c011ed8(v29);
L_8c182e58:;
        if (v27 == 0) {
            goto L_8c182e62;
        }
        call_8c011ed8((S_vv29 *)v27);
L_8c182e62:;
        operation_8c01b9e0();
        return (int)(v24);
L_8c182e78:;
        memcpy_8c12b77c((S_vv29 *)(*(int *)0x8c4db9ec + 4), (int)((int)v27 + 4), 0x41c);
        goto L_8c182ea8;
    }
    memcpy_8c12b77c((S_vv29 *)(*(int *)0x8c4db9ec + 4), (int)((int)v27 + 4), 0x41c);
L_8c182ea8:;
    if (v27 == 0) {
        goto L_8c182ef8;
    }
    call_8c011ed8((S_vv29 *)v27);
    goto L_8c182ef8;
L_8c182ec8:;
    memcpy_8c12b77c((S_vv29 *)(*(int *)0x8c4db9ec + 4), (int)((int)v29 + 4), 0x41c);
    goto L_8c182ef8;
L_8c182ee8:;
    memcpy_8c12b77c((S_vv29 *)(*(int *)0x8c4db9ec + 4), (int)((int)v29 + 4), 0x41c);
L_8c182ef8:;
    if (v28 != 0) {
        game_free_8c011ec0(v28);
    }
    if (v29 != 0) {
        call_8c011ed8(v29);
    }
    if (*(int *)0x8c4dbaec != 0) {
        goto L_8c1831c8;
    }
    t18 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t18 != 0) {
        v24 = (int)t18;
        goto L_8c1831c8;
    }
    if (*(int *)0x8c4db9e4 != 0) {
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)((&frame)));
        call_8c36d3ca((void *)((void *)0x8c4dbae0));
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)(&(&frame)->f04));
        (*(S_g8c4db9e4 **)0x8c4db9e4)->f0c += (&frame)->f04 - (&frame)->f00;
    }
    v45 = (S_vv45 *)*(S_g8c4db9e4 **)0x8c4db9e4;
    if (v45 != 0) {
        v45->f00 |= 1;
    }
    memcpy_8c12b77c((S_vv29 *)(*(int *)0x8c4db9ec + 0x420), (int)(*(S_g8c4db9e4 **)0x8c4db9e4), 0x12d8);
    t19 = operation_8c2324e0();
    if (t19 == 0) {
        t24 = operation_8c2324c0();
        v16 = (int)t24;
    } else {
        v16 = (int)t19;
    }
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(v16);
    *(int *)0x8c4dbaf8 = (int)(v16);
    call_8c17f024((void *)(*(S_g8c4db9ec **)0x8c4db9ec));
    memset_8c12b880((int)(&(&frame)->f08), 0, 0x60);
    call_8c18e720((void *)(&(&frame)->f08), (void *)((void *)0x8c31987d));
    call_8c18e720((void *)(((char *)(&frame) + 0x1a)), (void *)((void *)0x8c31988f));
    memcpy_8c12b77c((S_vv29 *)(&(&frame)->f3c), (int)((void *)0x8c3198b1), 0x10);
    (&frame)->f4c = (void *)0x8c286818;
    (&frame)->f50 = (void *)0x8c286838;
    (&frame)->f54 = 1;
    (&frame)->f56 = 1;
    v46 = (int)*(int *)0x8c4db9ec;
    (&frame)->f58 = 0;
    (&frame)->f5c = 0;
    (&frame)->f60 = (int)(v46);
    (&frame)->f64 = 0x16fc;
    call_8c377d84((void *)(*(S_g8c4dbb10 **)0x8c4dbb10), (void *)(&(&frame)->f08));
    v47 = (int)-1;
    v24 = (int)v47;
    goto L_8c1830d8;
L_8c183088:;
    operation_8c17e194();
    t20 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t20 != 1) {
        operation_8c01b9e0();
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    call_8c2280f0();
    wait_vsync_and_flip_8c380516();
L_8c1830d8:;
    t21 = operation_8c19b054();
    *(int *)0x8c4dbaf0 = (char)t21;
    if (!((char)t21 >= 0)) {
        v17 = (int)v24;
        goto L_8c18310e;
    }
    v17 = (int)v24;
    if (!(7 >= (char)t21)) {
        goto L_8c18310e;
    }
    word_operation_8c18490c((unsigned int)((char)t21));
    v48 = (int)*(int *)0x8c4dbb08;
    *(int *)0x8c41cb3c = 1;
    v49 = (int)*(int *)0x8c4dbaf0;
    t25 = vmu_save_file_timestamped_overwrite_8c010298(v49, (int)((void *)0x8c319870), (int)(*(S_g8c4dbb10 **)0x8c4dbb10), v48);
    v17 = (int)t25;
L_8c18310e:;
    if (v17 != 0) {
        goto L_8c183088;
    }
    *(int *)0x8c4dbaec = 6;
    goto L_8c1831a4;
L_8c183154:;
    operation_8c17e194();
    t22 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t22 != 1) {
        operation_8c01b9e0();
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    call_8c2280f0();
    wait_vsync_and_flip_8c380516();
L_8c1831a4:;
    if (*(int *)0x8c4dbaec != 0) {
        goto L_8c183154;
    }
    return 6;
L_8c1831c8:;
    return (int)(v24);
}
