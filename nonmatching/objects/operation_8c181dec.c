/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c181dec
 * function: operation_8c181dec
 * language: c
 * reference size: 2592 bytes
 * compiled size: 2644 bytes (+2.0%)
 * differing lines: 1130 of 905 reference instruction lines
 * differing bytes: 2425
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +52 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct Frame Frame;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9ec S_g8c4db9ec;
typedef struct S_g8c4dbaf0 S_g8c4dbaf0;
typedef struct S_g8c4dbb08 S_g8c4dbb08;
typedef struct S_g8c4dbb10 S_g8c4dbb10;
typedef struct S_g8c510ba0 S_g8c510ba0;
typedef struct S_vv25 S_vv25;
typedef struct S_vv26 S_vv26;
typedef struct S_vv27 S_vv27;
typedef struct S_vv28 S_vv28;
typedef struct S_vv30 S_vv30;
typedef struct S_vv32 S_vv32;
typedef struct S_vv36 S_vv36;
typedef struct S_vv39 S_vv39;
typedef struct S_vv45 S_vv45;
typedef struct S_vv51 S_vv51;
struct S_vv36 {
    char unknown0[0x20];
    int f20;
};
struct S_L8c4dbaf8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv39 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv32 {
    char unknown0[0x424];
    int f424;
    int f428;
    char unknown42c[0x8];
    int f434;
};
struct S_vv25 {
    char unknown0[0x4];
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
};
struct S_vv26 {
    char unknown0[0x4];
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
};
struct S_vv45 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv30 {
    char unknown0[0x424];
    int f424;
    int f428;
    char unknown42c[0x8];
    int f434;
};
struct S_vv27 {
    char unknown0[0x4];
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
};
struct S_vv28 {
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
struct S_vv51 {
    int f00;
};
struct S_g8c4db9ec {
    char unknown0[0x370];
    int f370;
};
extern int get_game_mode_8c01c25c(void);
extern int operation_2391f4(void *);
extern void operation_8c191504(int);
extern int operation_8c19b054(void);
extern int call_8c3727a0(int);
extern void operation_8c01b9e0(void);
extern void visit_hierarchy_10(void *);
extern void wait_vsync_and_flip_8c380516(void);
extern int bu_check_busy_8c372d98(void *);
extern int call_8c372d38(void *, void *);
extern int game_malloc_buffer_8c011e9c(int);
extern void memset_8c12b880(int, int, int);
extern void game_free_8c011ec0(int);
extern int call_8c372ebc(void *, void *, int, void *);
extern int operation_8c2324e0(void);
extern int game_malloc_8c011ecc(int);
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
extern void memcpy_8c12b77c(S_vv32 *, int, int);
extern void operation_8c17f210(void *);
extern int operation_8c2324c0(void);
extern int operation_8c2324a0(void);
extern void operation_8c17f3a8(S_vv30 *);
extern int operation_8c232480(void);
extern void call_8c011ed8(S_vv32 *);
extern void operation_8c035388(void);
extern void call_8c36d4c0(void *, Frame *);
extern void call_8c36d3ca(void *);
extern void call_8c17f024(S_g8c4db9ec *);
extern void call_8c18e720(void *, void *);
extern void call_8c377d84(void *, void *);
extern void word_operation_8c18490c(unsigned int);
extern int vmu_save_file_timestamped_overwrite_8c010298(int, int, int, int);
int operation_8c181dec(void)
{
    Frame frame;
    S_vv36 *v36;
    int v24;
    int v29;
    int v41;
    int v31;
    S_vv32 *v32;
    S_vv30 *v30;
    S_vv39 *v39;
    int v40;
    S_vv25 *v25;
    int v43;
    int v33;
    int v42;
    S_vv26 *v26;
    int v47;
    int v49;
    int v35;
    S_vv45 *v45;
    int v46;
    S_vv27 *v27;
    int v23;
    int v48;
    S_vv28 *v28;
    int t18;
    S_vv51 *v51;
    int v22;
    int v52;
    int v53;
    int t21;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t16;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int v37;
    int t17;
    int v44;
    int t19;
    int t20;
    int t7;
    int t22;
    int t23;
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0xf) {
        goto L_8c181e38;
    }
    if (*(int *)0x8c41bd10 == 1) {
        goto L_8c181e38;
    }
    t2 = operation_2391f4((void *)((void *)0x8c41ce5c));
    if ((unsigned char)t2 == 1) {
        goto L_8c181e38;
    }
    v36 = (S_vv36 *)*(S_g8c510ba0 **)0x8c510ba0;
    if (v36 == 0) {
        v24 = (int)0;
        goto L_8c181e2a;
    }
    v24 = (int)0;
    if (v36->f20 != 2) {
        goto L_8c181e2a;
    }
    v24 = (int)1;
L_8c181e2a:;
    if (v24 == 1) {
        goto L_8c181e38;
    }
    if (*(int *)0x8c4dbb1c == 0) {
L_8c181e38:;
        return -0x10000;
    }
    operation_8c191504(0);
    if (*(int *)0x8c4db9e0 == 0) {
        v33 = (int)-0x10000;
        goto L_8c182764;
    } else {
        v33 = (int)-0x10000;
    }
    if (*(int *)0x8c4db9e4 == 0) {
        goto L_8c182764;
    }
    if (*(int *)0x8c4db9ec == 0) {
        goto L_8c182764;
    }
    t3 = operation_8c19b054();
    *(int *)0x8c4dbaf0 = (char)t3;
    t4 = call_8c3727a0((int)((char)t3));
    if (t4 != 1) {
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c181eac;
        }
        operation_8c01b9e0();
L_8c181eac:;
        return -0x10000;
L_8c181edc:;
        t5 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
        if (t5 == 1) {
            goto L_8c181f14;
        }
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c181ef8;
        }
        operation_8c01b9e0();
L_8c181ef8:;
        return -0x10000;
L_8c181f14:;
        if (*(int *)0x8c46ee80 == 0) {
            goto L_8c181f24;
        }
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
L_8c181f24:;
        wait_vsync_and_flip_8c380516();
    }
    t6 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t6 != 0) {
        goto L_8c181edc;
    }
    t7 = call_8c372d38((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870));
    if (t7 != 0) {
        v29 = (int)t7;
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c181f58;
        }
        operation_8c01b9e0();
L_8c181f58:;
        return (int)(v29);
    }
    v37 = (int)(*(int *)0x8c4dbb08 << 9);
    t8 = game_malloc_buffer_8c011e9c(v37);
    v31 = (int)t8;
    memset_8c12b880(t8, 0, v37);
    v29 = (int)v37;
    goto L_8c18200a;
L_8c181fb0:;
    t9 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t9 != 1) {
        if (v31 == 0) {
            goto L_8c181fc8;
        }
        game_free_8c011ec0(v31);
L_8c181fc8:;
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c181fd6;
        }
        operation_8c01b9e0();
L_8c181fd6:;
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    wait_vsync_and_flip_8c380516();
L_8c18200a:;
    t10 = call_8c372ebc((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870), v31, (void *)(*(S_g8c4dbb08 **)0x8c4dbb08));
    if (t10 != 0) {
        goto L_8c181fb0;
    }
    goto L_8c18209e;
L_8c182044:;
    t11 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t11 != 1) {
        if (v31 == 0) {
            goto L_8c18205c;
        }
        game_free_8c011ec0(v31);
L_8c18205c:;
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c18206a;
        }
        operation_8c01b9e0();
L_8c18206a:;
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    wait_vsync_and_flip_8c380516();
L_8c18209e:;
    t12 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t12 != 0) {
        goto L_8c182044;
    }
    t13 = operation_8c2324e0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t13);
    *(int *)0x8c4dbaf8 = (int)(t13);
    t21 = game_malloc_8c011ecc(0x16fc);
    v32 = (S_vv32 *)t21;
    if (v32 != 0) {
        operation_8c1acbc0((void *)((int)v32 + 0x3c4));
        operation_8c1acbc0((void *)((int)v32 + 0x3e8));
        v30 = (S_vv30 *)0;
        goto L_8c182140;
L_8c182118:;
        v39 = (S_vv39 *)((char *)((int)v32 + 4 + (int)(v30) * 0x1c) + 4);
        v39->f00 = 0;
        v39->f01 = -1;
        v39->f04 = 0;
        v39->f03 = 0;
        v39->f02 = 0;
        operation_1c7dd4((void *)((int)v39 + 8));
        v30 = (S_vv30 *)((char *)v30 + 1);
L_8c182140:;
        if (0x1e > (int)v30) {
            goto L_8c182118;
        }
    }
    memset_8c12b880((int)v32, 0, 0x16fc);
    memcpy_8c12b77c(v32, (int)(v31 + 0x280), 0x16fc);
    operation_8c17f210((void *)v32);
    v40 = (int)*(int *)0x8c4db9e4;
    v25 = (S_vv25 *)v40;
    if (((int)v32 + 0x420) != 0) {
        if (v25 != 0) {
            goto L_8c18219c;
        }
    }
    v33 = (int)0;
    goto L_8c1821e2;
L_8c18219c:;
    if ((unsigned int)v32->f434 > (unsigned int)v25->f14) {
        v33 = (int)2;
        goto L_8c1821e2;
    }
    if (v32->f424 != v25->f04) {
        v33 = (int)4;
        goto L_8c1821e2;
    }
    if (v32->f428 == -0x5dfa4f9c) {
        if (v25->f08 == -0x5dfa4f9c) {
            goto L_8c1821e0;
        }
    }
    v33 = (int)5;
    goto L_8c1821e2;
L_8c1821e0:;
    v41 = (int)6;
    v33 = (int)v41;
L_8c1821e2:;
    if (v33 == 6) {
        goto L_8c182598;
    }
    t14 = operation_8c2324c0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t14);
    *(int *)0x8c4dbaf8 = (int)(t14);
    memcpy_8c12b77c(v32, (int)(v31 + 0x280), 0x16fc);
    operation_8c17f210((void *)v32);
    v42 = (int)*(int *)0x8c4db9e4;
    v26 = (S_vv26 *)v42;
    if (((int)v32 + 0x420) != 0) {
        if (v26 != 0) {
            goto L_8c182244;
        }
    }
    v33 = (int)0;
    goto L_8c18228a;
L_8c182244:;
    if ((unsigned int)v32->f434 > (unsigned int)v26->f14) {
        v33 = (int)2;
        goto L_8c18228a;
    }
    if (v32->f424 != v26->f04) {
        v33 = (int)4;
        goto L_8c18228a;
    }
    if (v32->f428 == -0x5dfa4f9c) {
        if (v26->f08 == -0x5dfa4f9c) {
            goto L_8c182288;
        }
    }
    v33 = (int)5;
    goto L_8c18228a;
L_8c182288:;
    v43 = (int)6;
    v33 = (int)v43;
L_8c18228a:;
    if (v33 == 6) {
        goto L_8c182554;
    }
    t15 = operation_8c2324a0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t15);
    *(int *)0x8c4dbaf8 = (int)(t15);
    t16 = game_malloc_8c011ecc(0x1550);
    if (t16 != 0) {
        operation_8c1acbc0((void *)(t16 + 0x3c4));
        operation_8c1acbc0((void *)(t16 + 0x3e8));
        v44 = (int)-1;
        v29 = (int)v44;
        v30 = (S_vv30 *)t16;
        v35 = (int)0;
        goto L_8c182310;
L_8c1822e8:;
        v45 = (S_vv45 *)((char *)((int)v30 + 4 + v35 * 0x1c) + 4);
        v45->f00 = 0;
        v45->f01 = -1;
        v45->f04 = 0;
        v45->f03 = 0;
        v45->f02 = 0;
        operation_1c7dd4((void *)((int)v45 + 8));
        v35 = (int)(v35 + 1);
L_8c182310:;
        if (0x1e > v35) {
            goto L_8c1822e8;
        }
    } else {
        v30 = (S_vv30 *)t16;
    }
    memset_8c12b880((int)v30, 0, 0x1550);
    memcpy_8c12b77c((S_vv32 *)v30, (int)(v31 + 0x280), 0x1550);
    operation_8c17f3a8(v30);
    v46 = (int)*(int *)0x8c4db9e4;
    v27 = (S_vv27 *)v46;
    if (((int)v30 + 0x420) != 0) {
        if (v27 != 0) {
            goto L_8c18236c;
        }
    }
    v33 = (int)0;
    goto L_8c1823b2;
L_8c18236c:;
    if ((unsigned int)v30->f434 > (unsigned int)v27->f14) {
        v33 = (int)2;
        goto L_8c1823b2;
    }
    if (v30->f424 != v27->f04) {
        v33 = (int)4;
        goto L_8c1823b2;
    }
    if (v30->f428 == -0x5dfa4f9c) {
        if (v27->f08 == -0x5dfa4f9c) {
            goto L_8c1823b0;
        }
    }
    v33 = (int)5;
    goto L_8c1823b2;
L_8c1823b0:;
    v47 = (int)6;
    v33 = (int)v47;
L_8c1823b2:;
    if (v33 == 6) {
        goto L_8c1824f0;
    }
    t17 = operation_8c232480();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t17);
    *(int *)0x8c4dbaf8 = (int)(t17);
    memcpy_8c12b77c((S_vv32 *)v30, (int)(v31 + 0x280), 0x1550);
    operation_8c17f3a8(v30);
    v48 = (int)*(int *)0x8c4db9e4;
    v28 = (S_vv28 *)v48;
    if (((int)v30 + 0x420) != 0) {
        if (v28 != 0) {
            goto L_8c182414;
        }
    }
    v33 = (int)0;
    goto L_8c18245a;
L_8c182414:;
    if ((unsigned int)v30->f434 > (unsigned int)v28->f14) {
        v33 = (int)2;
        goto L_8c18245a;
    }
    if (v30->f424 != v28->f04) {
        v33 = (int)4;
        goto L_8c18245a;
    }
    if (v30->f428 == -0x5dfa4f9c) {
        if (v28->f08 == -0x5dfa4f9c) {
            goto L_8c182458;
        }
    }
    v33 = (int)5;
    goto L_8c18245a;
L_8c182458:;
    v49 = (int)6;
    v33 = (int)v49;
L_8c18245a:;
    if (v33 != 6) {
        if (v31 == 0) {
            goto L_8c18246a;
        }
        game_free_8c011ec0(v31);
L_8c18246a:;
        if (v32 == 0) {
            goto L_8c182474;
        }
        call_8c011ed8(v32);
L_8c182474:;
        if (v30 == 0) {
            goto L_8c18247e;
        }
        call_8c011ed8((S_vv32 *)v30);
L_8c18247e:;
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c18248c;
        }
        operation_8c01b9e0();
L_8c18248c:;
        return (int)(v33);
    }
    if (v30->f434 == v28->f14) {
        goto L_8c182540;
    }
    if (v31 != 0) {
        game_free_8c011ec0(v31);
    }
    if (v32 != 0) {
        call_8c011ed8(v32);
    }
    if (v30 != 0) {
        call_8c011ed8((S_vv32 *)v30);
    }
    if (*(int *)0x8c4dbb1c == 1) {
        operation_8c01b9e0();
    }
    return 2;
L_8c1824f0:;
    if (v30->f434 == v27->f14) {
        goto L_8c182540;
    }
    if (v31 != 0) {
        game_free_8c011ec0(v31);
    }
    if (v32 != 0) {
        call_8c011ed8(v32);
    }
    if (v30 != 0) {
        call_8c011ed8((S_vv32 *)v30);
    }
    if (*(int *)0x8c4dbb1c == 1) {
        operation_8c01b9e0();
    }
    return 2;
L_8c182540:;
    if (v30 == 0) {
        goto L_8c1825dc;
    }
    call_8c011ed8((S_vv32 *)v30);
    goto L_8c1825dc;
L_8c182554:;
    if (v32->f434 == v26->f14) {
        goto L_8c1825dc;
    }
    if (v31 != 0) {
        game_free_8c011ec0(v31);
    }
    if (v32 != 0) {
        call_8c011ed8(v32);
    }
    if (*(int *)0x8c4dbb1c == 1) {
        operation_8c01b9e0();
    }
    return 2;
L_8c182598:;
    if (v32->f434 == v25->f14) {
        goto L_8c1825dc;
    }
    if (v31 != 0) {
        game_free_8c011ec0(v31);
    }
    if (v32 != 0) {
        call_8c011ed8(v32);
    }
    if (*(int *)0x8c4dbb1c == 1) {
        operation_8c01b9e0();
    }
    return 2;
L_8c1825dc:;
    if (v31 != 0) {
        game_free_8c011ec0(v31);
    }
    if (v32 != 0) {
        call_8c011ed8(v32);
    }
    if (*(int *)0x8c4dbaec != 0) {
        goto L_8c182764;
    }
    t18 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t18 != 0) {
        v33 = (int)t18;
        goto L_8c182764;
    }
    memset_8c12b880((int)(*(S_g8c4db9ec **)0x8c4db9ec), 0, 0x16fc);
    operation_8c035388();
    if (*(int *)0x8c4db9e4 != 0) {
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)((&frame)));
        call_8c36d3ca((void *)((void *)0x8c4dbae0));
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)(&(&frame)->f04));
        (*(S_g8c4db9e4 **)0x8c4db9e4)->f0c += (&frame)->f04 - (&frame)->f00;
    }
    v51 = (S_vv51 *)*(S_g8c4db9e4 **)0x8c4db9e4;
    if (v51 != 0) {
        v51->f00 |= 1;
    }
    memcpy_8c12b77c((S_vv32 *)(((char *)*(S_g8c4db9ec **)0x8c4db9ec + 0x4)), (int)(*(S_g8c4db9e0 **)0x8c4db9e0), 0x41c);
    memcpy_8c12b77c((S_vv32 *)(((char *)*(S_g8c4db9ec **)0x8c4db9ec + 0x420)), (int)(*(S_g8c4db9e4 **)0x8c4db9e4), 0x12d8);
    (*(S_g8c4db9ec **)0x8c4db9ec)->f370 = 0;
    t19 = operation_8c2324e0();
    if (t19 == 0) {
        t22 = operation_8c2324c0();
        v22 = (int)t22;
    } else {
        v22 = (int)t19;
    }
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(v22);
    *(int *)0x8c4dbaf8 = (int)(v22);
    call_8c17f024((S_g8c4db9ec *)(*(S_g8c4db9ec **)0x8c4db9ec));
    memset_8c12b880((int)(&(&frame)->f08), 0, 0x60);
    call_8c18e720((void *)(&(&frame)->f08), (void *)((void *)0x8c31987d));
    call_8c18e720((void *)(((char *)(&frame) + 0x1a)), (void *)((void *)0x8c31988f));
    memcpy_8c12b77c((S_vv32 *)(&(&frame)->f3c), (int)((void *)0x8c3198b1), 0x10);
    (&frame)->f4c = (void *)0x8c286818;
    (&frame)->f50 = (void *)0x8c286838;
    (&frame)->f54 = 1;
    (&frame)->f56 = 1;
    v52 = (int)*(int *)0x8c4db9ec;
    (&frame)->f58 = 0;
    (&frame)->f5c = 0;
    (&frame)->f60 = (int)(v52);
    (&frame)->f64 = 0x16fc;
    call_8c377d84((void *)(*(S_g8c4dbb10 **)0x8c4dbb10), (void *)(&(&frame)->f08));
    t20 = operation_8c19b054();
    *(int *)0x8c4dbaf0 = (char)t20;
    if (!((char)t20 >= 0)) {
        v23 = (int)-1;
        goto L_8c182758;
    }
    v23 = (int)-1;
    if (!(7 >= (char)t20)) {
        goto L_8c182758;
    }
    word_operation_8c18490c((unsigned int)((char)t20));
    v53 = (int)*(int *)0x8c4dbb08;
    *(int *)0x8c41cb3c = 1;
    t23 = vmu_save_file_timestamped_overwrite_8c010298((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (int)((void *)0x8c319870), (int)(*(S_g8c4dbb10 **)0x8c4dbb10), v53);
    v23 = (int)t23;
L_8c182758:;
    v33 = (int)v23;
    if (v33 != 0) {
        goto L_8c182764;
    }
    *(int *)0x8c4dbaec = 6;
L_8c182764:;
    return (int)(v33);
}
