/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17fff4
 * function: operation_8c17fff4
 * language: c
 * reference size: 2744 bytes
 * compiled size: 2804 bytes (+2.2%)
 * differing lines: 1198 of 949 reference instruction lines
 * differing bytes: 2631
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +60 bytes
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
typedef struct S_vv27 S_vv27;
typedef struct S_vv32 S_vv32;
typedef struct S_vv33 S_vv33;
typedef struct S_vv34 S_vv34;
typedef struct S_vv37 S_vv37;
typedef struct S_vv41 S_vv41;
typedef struct S_vv43 S_vv43;
typedef struct S_vv45 S_vv45;
typedef struct S_vv49 S_vv49;
struct S_vv37 {
    char unknown0[0x20];
    int f20;
};
struct S_L8c4dbaf8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv41 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv43 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv32 {
    char unknown0[0x434];
    int f434;
};
struct S_g8c4db9e4 {
    char unknown0[0x14];
    int f14;
};
struct S_vv34 {
    char unknown0[0x434];
    int f434;
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
struct S_vv27 {
    char unknown0[0xc];
    int f0c;
};
struct S_vv45 {
    int f00;
};
struct S_vv33 {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
};
struct S_g8c4db9ec {
    char unknown0[0x4];
    char f04;
    char unknown5[0x65f];
    int f664;
    int f668;
};
struct S_vv49 {
    char unknown0[0x370];
    int f370;
};
extern int get_game_mode_8c01c25c(void);
extern int get_current_area_8c032b10(void);
extern int operation_2391f4(void *);
extern void operation_8c191504(int);
extern int operation_8c19b054(void);
extern int call_8c3727a0(int);
extern void operation_8c01b9e0(void);
extern void visit_hierarchy_10(void *);
extern void call_8c2280f0(void);
extern void wait_vsync_and_flip_8c380516(void);
extern int bu_check_busy_8c372d98(void *);
extern int call_8c372d38(void *, void *);
extern int game_malloc_buffer_8c011e9c(int);
extern void memset_8c12b880(int, int, int);
extern void game_free_8c011ec0(S_vv33 *);
extern int call_8c372ebc(void *, void *, S_vv33 *, void *);
extern int operation_8c2324e0(void);
extern int game_malloc_8c011ecc(int);
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
extern void memcpy_8c12b77c(S_vv34 *, void *, int);
extern void operation_8c17f210(void *);
extern int compare_records_8c181968(void *, void *);
extern int operation_8c2324c0(void);
extern int operation_8c2324a0(void);
extern void call_8c17f3a8(S_vv32 *);
extern int compare_records_8c1819a8(void *, void *);
extern int operation_8c232480(void);
extern void call_8c011ed8(S_vv34 *);
extern void call_8c027f34(void);
extern void operation_8c035388(void);
extern void call_8c36d4c0(void *, Frame *);
extern void call_8c36d3ca(void *);
extern void operation_8c177a90(void);
extern void call_8c17f024(S_g8c4db9ec *);
extern void call_8c18e720(void *, void *);
extern void call_8c377d84(void *, void *);
extern void operation_8c17e194(void);
extern int save_system_file_8c1818c0(void);
int operation_8c17fff4(int a0)
{
    Frame frame;
    int v26;
    int v36;
    S_vv37 *v37;
    int v25;
    int t29;
    int v29;
    int t9;
    S_vv33 *v33;
    S_vv34 *v34;
    int t18;
    S_vv32 *v32;
    S_vv41 *v41;
    int v31;
    S_vv43 *v43;
    S_vv27 *v27;
    S_vv45 *v45;
    int v46;
    int v40;
    int v48;
    S_vv49 *v49;
    int v50;
    int v24;
    int v51;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int v38;
    int v39;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int v47;
    int t16;
    int t8;
    int t15;
    int t19;
    int t17;
    int t21;
    int t20;
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t23;
    int t30;
    v26 = (int)a0;
    v36 = (int)v26;
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0xf) {
        goto L_8c18004e;
    }
    t2 = get_current_area_8c032b10();
    if (t2 == 0xf) {
        if (v36 != 1) {
            goto L_8c18004e;
        }
    }
    if (*(int *)0x8c41bd10 == 1) {
        goto L_8c18004e;
    }
    t3 = operation_2391f4((void *)((void *)0x8c41ce5c));
    if ((unsigned char)t3 == 1) {
        goto L_8c18004e;
    }
    v37 = (S_vv37 *)*(S_g8c510ba0 **)0x8c510ba0;
    if (v37 == 0) {
        v25 = (int)0;
        goto L_8c180048;
    }
    v25 = (int)0;
    if (v37->f20 != 2) {
        goto L_8c180048;
    }
    v25 = (int)1;
L_8c180048:;
    if (v25 == 1) {
L_8c18004e:;
        return -0x10000;
    }
    operation_8c191504(0);
    v38 = (int)-0x10000;
    if (*(int *)0x8c4db9e0 == 0) {
        v29 = (int)v38;
        goto L_8c180a7e;
    } else {
        v29 = (int)v38;
    }
    if (*(int *)0x8c4db9e4 == 0) {
        goto L_8c180a7e;
    }
    if (*(int *)0x8c4db9ec == 0) {
        goto L_8c180a7e;
    }
    t4 = operation_8c19b054();
    *(int *)0x8c4dbaf0 = (char)t4;
    t5 = call_8c3727a0((int)((char)t4));
    if (t5 != 1) {
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c1800c0;
        }
        operation_8c01b9e0();
L_8c1800c0:;
        return -0x10000;
L_8c1800f0:;
        t6 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
        if (t6 == 1) {
            goto L_8c180128;
        }
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c18010c;
        }
        operation_8c01b9e0();
L_8c18010c:;
        return -0x10000;
L_8c180128:;
        if (*(int *)0x8c46ee80 == 0) {
            goto L_8c180138;
        }
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
L_8c180138:;
        call_8c2280f0();
        wait_vsync_and_flip_8c380516();
    }
    t7 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t7 != 0) {
        goto L_8c1800f0;
    }
    if (v36 == 1) {
        goto L_8c1806e4;
    }
    t8 = call_8c372d38((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870));
    if (t8 != 0) {
        v29 = (int)t8;
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c18017c;
        }
        operation_8c01b9e0();
L_8c18017c:;
        return (int)(v29);
    }
    v39 = (int)(*(int *)0x8c4dbb08 << 9);
    t9 = game_malloc_buffer_8c011e9c(v39);
    v33 = (S_vv33 *)t9;
    memset_8c12b880(t9, 0, v39);
    v29 = (int)v39;
    goto L_8c180238;
L_8c1801d8:;
    t10 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t10 != 1) {
        if (v33 == 0) {
            goto L_8c1801f0;
        }
        game_free_8c011ec0(v33);
L_8c1801f0:;
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c1801fe;
        }
        operation_8c01b9e0();
L_8c1801fe:;
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    call_8c2280f0();
    wait_vsync_and_flip_8c380516();
L_8c180238:;
    t11 = call_8c372ebc((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870), v33, (void *)(*(S_g8c4dbb08 **)0x8c4dbb08));
    if (t11 != 0) {
        goto L_8c1801d8;
    }
    goto L_8c1802d4;
L_8c180274:;
    t12 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t12 != 1) {
        if (v33 == 0) {
            goto L_8c18028c;
        }
        game_free_8c011ec0(v33);
L_8c18028c:;
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c18029a;
        }
        operation_8c01b9e0();
L_8c18029a:;
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    call_8c2280f0();
    wait_vsync_and_flip_8c380516();
L_8c1802d4:;
    t13 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t13 != 0) {
        goto L_8c180274;
    }
    t14 = operation_8c2324e0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t14);
    *(int *)0x8c4dbaf8 = (int)(t14);
    t29 = game_malloc_8c011ecc(0x16fc);
    v34 = (S_vv34 *)t29;
    if (v34 != 0) {
        operation_8c1acbc0((void *)((int)v34 + 0x3c4));
        operation_8c1acbc0((void *)((int)v34 + 0x3e8));
        v40 = (int)-1;
        v31 = (int)v40;
        v32 = (S_vv32 *)0;
        goto L_8c18037c;
L_8c180354:;
        v41 = (S_vv41 *)((char *)((int)v34 + 4 + (int)(v32) * 0x1c) + 4);
        v41->f00 = 0;
        v41->f01 = -1;
        v41->f04 = 0;
        v41->f03 = 0;
        v41->f02 = 0;
        operation_1c7dd4((void *)((int)v41 + 8));
        v32 = (S_vv32 *)((char *)v32 + 1);
L_8c18037c:;
        if (0x1e > (int)v32) {
            goto L_8c180354;
        }
    }
    memset_8c12b880((int)v34, 0, 0x16fc);
    memcpy_8c12b77c(v34, (void *)((int)v33 + 0x280), 0x16fc);
    operation_8c17f210((void *)v34);
    t15 = compare_records_8c181968((void *)((int)v34 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t15 == 6) {
        v29 = (int)t15;
        goto L_8c180684;
    }
    t16 = operation_8c2324c0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t16);
    *(int *)0x8c4dbaf8 = (int)(t16);
    memcpy_8c12b77c(v34, (void *)((int)v33 + 0x280), 0x16fc);
    operation_8c17f210((void *)v34);
    t17 = compare_records_8c181968((void *)((int)v34 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t17 == 6) {
        v29 = (int)t17;
        goto L_8c180638;
    }
    t18 = game_malloc_8c011ecc(0x1550);
    if (t18 != 0) {
        operation_8c1acbc0((void *)(t18 + 0x3c4));
        operation_8c1acbc0((void *)(t18 + 0x3e8));
        v31 = (int)0;
        v32 = (S_vv32 *)t18;
        goto L_8c180488;
L_8c180460:;
        v43 = (S_vv43 *)((char *)((int)v32 + 4 + v31 * 0x1c) + 4);
        v43->f00 = 0;
        v43->f01 = -1;
        v43->f04 = 0;
        v43->f03 = 0;
        v43->f02 = 0;
        operation_1c7dd4((void *)((int)v43 + 8));
        v31 = (int)(v31 + 1);
L_8c180488:;
        if (0x1e > v31) {
            goto L_8c180460;
        }
    } else {
        v32 = (S_vv32 *)t18;
    }
    memset_8c12b880((int)v32, 0, 0x1550);
    memcpy_8c12b77c((S_vv34 *)v32, (void *)((int)v33 + 0x280), 0x1550);
    t19 = operation_8c2324a0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t19);
    *(int *)0x8c4dbaf8 = (int)(t19);
    call_8c17f3a8(v32);
    t20 = compare_records_8c1819a8((void *)((int)v32 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t20 != 6) {
        t21 = operation_8c232480();
        ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t21);
        *(int *)0x8c4dbaf8 = (int)(t21);
        memcpy_8c12b77c((S_vv34 *)v32, (void *)((int)v33 + 0x280), 0x1550);
        call_8c17f3a8(v32);
        t22 = compare_records_8c1819a8((void *)((int)v32 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
        v29 = (int)t22;
        if (v29 == 6) {
            goto L_8c180574;
        }
        if (v33 == 0) {
            goto L_8c18050e;
        }
        game_free_8c011ec0(v33);
L_8c18050e:;
        if (v34 == 0) {
            goto L_8c180518;
        }
        call_8c011ed8(v34);
L_8c180518:;
        if (v32 == 0) {
            goto L_8c180522;
        }
        call_8c011ed8((S_vv34 *)v32);
L_8c180522:;
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c180530;
        }
        operation_8c01b9e0();
L_8c180530:;
        return (int)(v29);
L_8c180574:;
        if (v32->f434 == (*(S_g8c4db9e4 **)0x8c4db9e4)->f14) {
            goto L_8c180624;
        }
        if (v33 == 0) {
            goto L_8c18058c;
        }
        game_free_8c011ec0(v33);
L_8c18058c:;
        if (v34 == 0) {
            goto L_8c180596;
        }
        call_8c011ed8(v34);
L_8c180596:;
        if (v32 == 0) {
            goto L_8c1805a0;
        }
        call_8c011ed8((S_vv34 *)v32);
L_8c1805a0:;
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c1805ae;
        }
        operation_8c01b9e0();
L_8c1805ae:;
        return 2;
    } else {
        v29 = (int)t20;
    }
    if (v32->f434 == (*(S_g8c4db9e4 **)0x8c4db9e4)->f14) {
        goto L_8c180624;
    }
    if (v33 != 0) {
        game_free_8c011ec0(v33);
    }
    if (v34 != 0) {
        call_8c011ed8(v34);
    }
    if (v32 != 0) {
        call_8c011ed8((S_vv34 *)v32);
    }
    if (*(int *)0x8c4dbb1c == 1) {
        operation_8c01b9e0();
    }
    return 2;
L_8c180624:;
    if (v32 == 0) {
        goto L_8c1806d0;
    }
    call_8c011ed8((S_vv34 *)v32);
    goto L_8c1806d0;
L_8c180638:;
    if (v34->f434 == (*(S_g8c4db9e4 **)0x8c4db9e4)->f14) {
        goto L_8c1806d0;
    }
    if (v33 != 0) {
        game_free_8c011ec0(v33);
    }
    if (v34 != 0) {
        call_8c011ed8(v34);
    }
    if (*(int *)0x8c4dbb1c == 1) {
        operation_8c01b9e0();
    }
    return 2;
L_8c180684:;
    if (v34->f434 == (*(S_g8c4db9e4 **)0x8c4db9e4)->f14) {
        goto L_8c1806d0;
    }
    if (v33 != 0) {
        game_free_8c011ec0(v33);
    }
    if (v34 != 0) {
        call_8c011ed8(v34);
    }
    if (*(int *)0x8c4dbb1c == 1) {
        operation_8c01b9e0();
    }
    return 2;
L_8c1806d0:;
    if (v33 != 0) {
        game_free_8c011ec0(v33);
    }
    if (v34 == 0) {
        goto L_8c1806e4;
    }
    call_8c011ed8(v34);
L_8c1806e4:;
    if (*(int *)0x8c4dbaec != 0) {
        goto L_8c180a7e;
    }
    t23 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t23 != 0) {
        v29 = (int)t23;
        goto L_8c180a7e;
    } else {
        v29 = (int)t23;
    }
    memset_8c12b880((int)(*(S_g8c4db9ec **)0x8c4db9ec), 0, 0x16fc);
    call_8c027f34();
    operation_8c035388();
    if (*(int *)0x8c4db9e4 != 0) {
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)((&frame)));
        call_8c36d3ca((void *)((void *)0x8c4dbae0));
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)(&(&frame)->f04));
        v27 = (S_vv27 *)*(S_g8c4db9e4 **)0x8c4db9e4;
        v27->f0c += (&frame)->f04 - (&frame)->f00;
    } else {
        v27 = (S_vv27 *)/* ? clobbered */ 0;
    }
    t24 = get_game_mode_8c01c25c();
    if (t24 != 0x10) {
        goto L_8c18086c;
    }
    v45 = (S_vv45 *)*(S_g8c4db9e4 **)0x8c4db9e4;
    if (v45 != 0) {
        v45->f00 |= 1;
    }
    memcpy_8c12b77c((S_vv34 *)(&(*(S_g8c4db9ec **)0x8c4db9ec)->f04), (void *)(*(S_g8c4db9e0 **)0x8c4db9e0), 0x41c);
    v46 = (int)((char *)*(S_g8c4db9ec **)0x8c4db9ec + 0x420);
    memcpy_8c12b77c((S_vv34 *)v46, (void *)(*(S_g8c4db9e4 **)0x8c4db9e4), 0x12d8);
    if (*(int *)0x8c4dbb1c == 0) {
        v47 = (int)-1;
        v48 = (int)*(int *)0x8c4db9ec;
        v29 = (int)v47;
        v32 = (S_vv32 *)0;
        v33 = (S_vv33 *)(v48 + 8);
        goto L_8c180812;
L_8c1807fc:;
        v33->f00 = 0;
        v33->f01 = -1;
        v33->f04 = 0;
        operation_1c7dd4((void *)((int)v33 + 8));
        v32 = (S_vv32 *)((char *)v32 + 1);
        v33 = (S_vv33 *)((char *)v33 + 28);
L_8c180812:;
        if (0x1e > (int)v32) {
            goto L_8c1807fc;
        }
        (*(S_g8c4db9ec **)0x8c4db9ec)->f04 = 0;
        memset_8c12b880((int)(((char *)*(S_g8c4db9ec **)0x8c4db9ec + 0x66c)), 0, 0x5a0);
        (*(S_g8c4db9ec **)0x8c4db9ec)->f664 = 0;
        (*(S_g8c4db9ec **)0x8c4db9ec)->f668 = 0;
    } else {
    }
    v49 = (S_vv49 *)*(S_g8c4db9ec **)0x8c4db9ec;
    v49->f370 = 0;
    goto L_8c180894;
L_8c18086c:;
    operation_8c177a90();
    memcpy_8c12b77c((S_vv34 *)(&(*(S_g8c4db9ec **)0x8c4db9ec)->f04), (void *)(*(S_g8c4db9e0 **)0x8c4db9e0), 0x41c);
    v50 = (int)((char *)*(S_g8c4db9ec **)0x8c4db9ec + 0x420);
    memcpy_8c12b77c((S_vv34 *)v50, (void *)(*(S_g8c4db9e4 **)0x8c4db9e4), 0x12d8);
L_8c180894:;
    if (v36 != 1) {
        t30 = operation_8c2324e0();
        v24 = (int)t30;
    } else {
        v24 = (int)0;
    }
    if (v24 == 0) {
        t25 = operation_8c2324c0();
        v24 = (int)t25;
    }
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(v24);
    *(int *)0x8c4dbaf8 = (int)(v24);
    call_8c17f024((S_g8c4db9ec *)(*(S_g8c4db9ec **)0x8c4db9ec));
    memset_8c12b880((int)(&(&frame)->f08), 0, 0x60);
    call_8c18e720((void *)(&(&frame)->f08), (void *)((void *)0x8c31987d));
    call_8c18e720((void *)(((char *)(&frame) + 0x1a)), (void *)((void *)0x8c31988f));
    memcpy_8c12b77c((S_vv34 *)(&(&frame)->f3c), (void *)((void *)0x8c3198b1), 0x10);
    (&frame)->f4c = (void *)0x8c286818;
    (&frame)->f50 = (void *)0x8c286838;
    (&frame)->f54 = 1;
    (&frame)->f56 = 1;
    v51 = (int)*(int *)0x8c4db9ec;
    (&frame)->f58 = 0;
    (&frame)->f5c = 0;
    (&frame)->f60 = (int)(v51);
    (&frame)->f64 = 0x16fc;
    call_8c377d84((void *)(*(S_g8c4dbb10 **)0x8c4dbb10), (void *)(&(&frame)->f08));
    goto L_8c1809e8;
L_8c18098c:;
    operation_8c17e194();
    t26 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t26 != 1) {
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c1809ae;
        }
        operation_8c01b9e0();
L_8c1809ae:;
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    call_8c2280f0();
    wait_vsync_and_flip_8c380516();
L_8c1809e8:;
    t27 = save_system_file_8c1818c0();
    if (t27 != 0) {
        goto L_8c18098c;
    }
    *(int *)0x8c4dbaec = 6;
    goto L_8c180a74;
L_8c180a18:;
    operation_8c17e194();
    t28 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t28 != 1) {
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c180a3a;
        }
        operation_8c01b9e0();
L_8c180a3a:;
        return -0x10000;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    call_8c2280f0();
    wait_vsync_and_flip_8c380516();
L_8c180a74:;
    if (*(int *)0x8c4dbaec != 0) {
        goto L_8c180a18;
    }
    v29 = (int)6;
L_8c180a7e:;
    return (int)(v29);
}
