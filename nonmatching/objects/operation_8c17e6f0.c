/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17e6f0
 * function: operation_8c17e6f0
 * language: c
 * reference size: 1780 bytes
 * compiled size: 1800 bytes (+1.1%)
 * differing lines: 592 of 627 reference instruction lines
 * differing bytes: 1535
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +20 bytes
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
typedef struct S_vv47 S_vv47;
typedef struct S_vv51 S_vv51;
typedef struct S_vv52 S_vv52;
typedef struct S_vv55 S_vv55;
typedef struct S_vv57 S_vv57;
typedef struct S_vv59 S_vv59;
typedef struct S_vv63 S_vv63;
struct S_vv51 {
    char unknown0[0x14];
    int f14;
};
struct S_vv52 {
    char unknown0[0x14];
    int f14;
};
struct S_L8c4dbaf8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv55 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv57 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct Frame {
    int f00;
    int f04;
};
struct S_g8c4db9e4 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
    int f14;
};
struct S_vv59 {
    int f00;
};
struct S_vv47 {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
};
struct S_g8c4db9ec {
    char unknown0[0x4];
    char f04;
    char unknown5[0x36b];
    int f370;
    char unknown374[0x2f0];
    int f664;
    int f668;
};
struct S_vv63 {
    char unknown0[0x14];
    int f14;
};
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
extern void memcpy_8c12b77c(int, int, int);
extern void operation_8c17f210(void *);
extern int compare_records_8c181968(void *, void *);
extern int operation_8c2324c0(void);
extern int operation_8c2324a0(void);
extern void operation_8c17f3a8(int);
extern int compare_records_8c1819a8(void *, void *);
extern int operation_8c232480(void);
extern void call_8c011ed8(int);
extern void call_8c027f34(void);
extern void operation_8c035388(void);
extern void call_8c36d4c0(void *, Frame *);
extern void call_8c36d3ca(void *);
extern void call_8c17f024(S_g8c4db9ec *);
extern void build_main_data_vmu_header_8c17eecc(void);
extern int save_system_file_8c1818c0(void);
int operation_8c17e6f0(void)
{
    Frame frame;
    S_vv51 *v51;
    S_vv52 *v52;
    int t23;
    int v49;
    int v50;
    int t6;
    int v48;
    S_vv55 *v55;
    int v61;
    S_vv47 *v47;
    S_vv57 *v57;
    S_vv59 *v59;
    int v60;
    int v62;
    int t16;
    int v46;
    int v44;
    S_vv63 *v63;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int v54;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int v53;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int v56;
    int t24;
    if (*(int *)0x8c41bd10 == 1) {
        v51 = (S_vv51 *)*(S_g8c4db9e4 **)0x8c4db9e4;
        if (v51 == 0) {
            goto L_8c17e724;
        }
        v51->f14 += 1;
        v52 = (S_vv52 *)*(S_g8c4db9e4 **)0x8c4db9e4;
        return (int)(v52->f14);
L_8c17e724:;
        return 0;
    }
    if (*(int *)0x8c4db9e0 == 0) {
        goto L_8c17edd0;
    }
    if (*(int *)0x8c4db9e4 == 0) {
        goto L_8c17edd0;
    }
    if (*(int *)0x8c4db9ec == 0) {
        goto L_8c17edd0;
    }
    operation_8c191504(0);
    t1 = operation_8c19b054();
    *(int *)0x8c4dbaf0 = (char)t1;
    t2 = call_8c3727a0((int)((char)t1));
    if (t2 != 1) {
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c17e776;
        }
        operation_8c01b9e0();
L_8c17e776:;
        return 0;
L_8c17e7a0:;
        t3 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
        if (t3 == 1) {
            goto L_8c17e7d0;
        }
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c17e7bc;
        }
        operation_8c01b9e0();
L_8c17e7bc:;
        return 0;
L_8c17e7d0:;
        if (*(int *)0x8c46ee80 == 0) {
            goto L_8c17e7e0;
        }
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
L_8c17e7e0:;
        wait_vsync_and_flip_8c380516();
    }
    t4 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t4 != 0) {
        goto L_8c17e7a0;
    }
    t5 = call_8c372d38((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870));
    if (t5 != 0) {
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c17e812;
        }
        operation_8c01b9e0();
L_8c17e812:;
        return 0;
    }
    v53 = (int)(*(int *)0x8c4dbb08 << 9);
    t6 = game_malloc_buffer_8c011e9c(v53);
    v49 = (int)t6;
    memset_8c12b880(t6, 0, v53);
    v46 = (int)v53;
    goto L_8c17e8c2;
L_8c17e86c:;
    t7 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t7 != 1) {
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c17e888;
        }
        operation_8c01b9e0();
L_8c17e888:;
        if (v49 == 0) {
            goto L_8c17e892;
        }
        game_free_8c011ec0(v49);
L_8c17e892:;
        return 0;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    wait_vsync_and_flip_8c380516();
L_8c17e8c2:;
    t8 = call_8c372ebc((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870), v49, (void *)(*(S_g8c4dbb08 **)0x8c4dbb08));
    if (t8 != 0) {
        goto L_8c17e86c;
    }
    goto L_8c17e952;
L_8c17e8fc:;
    t9 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t9 != 1) {
        if (*(int *)0x8c4dbb1c != 1) {
            goto L_8c17e918;
        }
        operation_8c01b9e0();
L_8c17e918:;
        if (v49 == 0) {
            goto L_8c17e922;
        }
        game_free_8c011ec0(v49);
L_8c17e922:;
        return 0;
    }
    if (*(int *)0x8c46ee80 != 0) {
        visit_hierarchy_10((void *)((void *)0x8c44bec8));
    }
    wait_vsync_and_flip_8c380516();
L_8c17e952:;
    t10 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t10 != 0) {
        goto L_8c17e8fc;
    }
    t11 = operation_8c2324e0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t11);
    *(int *)0x8c4dbaf8 = (int)(t11);
    t23 = game_malloc_8c011ecc(0x16fc);
    v50 = (int)t23;
    if (v50 != 0) {
        operation_8c1acbc0((void *)(v50 + 0x3c4));
        operation_8c1acbc0((void *)(v50 + 0x3e8));
        v54 = (int)-1;
        v47 = (S_vv47 *)v54;
        v48 = (int)0;
        goto L_8c17e9f4;
L_8c17e9cc:;
        v55 = (S_vv55 *)((char *)(v50 + 4 + v48 * 0x1c) + 4);
        v55->f00 = 0;
        v55->f01 = -1;
        v55->f04 = 0;
        v55->f03 = 0;
        v55->f02 = 0;
        operation_1c7dd4((void *)((int)v55 + 8));
        v48 = (int)(v48 + 1);
L_8c17e9f4:;
        if (0x1e > v48) {
            goto L_8c17e9cc;
        }
    }
    memset_8c12b880(v50, 0, 0x16fc);
    memcpy_8c12b77c(v50, (int)(v49 + 0x280), 0x16fc);
    operation_8c17f210((void *)v50);
    t12 = compare_records_8c181968((void *)(v50 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t12 == 6) {
        goto L_8c17ebee;
    }
    t13 = operation_8c2324c0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t13);
    *(int *)0x8c4dbaf8 = (int)(t13);
    memcpy_8c12b77c(v50, (int)(v49 + 0x280), 0x16fc);
    operation_8c17f210((void *)v50);
    t14 = compare_records_8c181968((void *)(v50 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t14 == 6) {
        goto L_8c17ebee;
    }
    t15 = operation_8c2324a0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t15);
    *(int *)0x8c4dbaf8 = (int)(t15);
    t16 = game_malloc_8c011ecc(0x1550);
    if (t16 != 0) {
        operation_8c1acbc0((void *)(t16 + 0x3c4));
        operation_8c1acbc0((void *)(t16 + 0x3e8));
        v56 = (int)-1;
        v46 = (int)v56;
        v47 = (S_vv47 *)0;
        v48 = (int)t16;
        goto L_8c17eb0c;
L_8c17eae4:;
        v57 = (S_vv57 *)((char *)(v48 + 4 + (int)(v47) * 0x1c) + 4);
        v57->f00 = 0;
        v57->f01 = -1;
        v57->f04 = 0;
        v57->f03 = 0;
        v57->f02 = 0;
        operation_1c7dd4((void *)((int)v57 + 8));
        v47 = (S_vv47 *)((char *)v47 + 1);
L_8c17eb0c:;
        if (0x1e > (int)v47) {
            goto L_8c17eae4;
        }
    } else {
        v48 = (int)t16;
    }
    memset_8c12b880(v48, 0, 0x1550);
    memcpy_8c12b77c(v48, (int)(v49 + 0x280), 0x1550);
    operation_8c17f3a8(v48);
    t17 = compare_records_8c1819a8((void *)(v48 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t17 == 6) {
        goto L_8c17ebe4;
    }
    t18 = operation_8c232480();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t18);
    *(int *)0x8c4dbaf8 = (int)(t18);
    memcpy_8c12b77c(v48, (int)(v49 + 0x280), 0x1550);
    operation_8c17f3a8(v48);
    t19 = compare_records_8c1819a8((void *)(v48 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t19 == 6) {
        goto L_8c17ebe4;
    }
    if (v49 != 0) {
        game_free_8c011ec0(v49);
    }
    if (v50 != 0) {
        call_8c011ed8(v50);
    }
    if (v48 != 0) {
        call_8c011ed8(v48);
    }
    if (*(int *)0x8c4dbb1c == 1) {
        operation_8c01b9e0();
    }
    return 0;
L_8c17ebe4:;
    if (v48 == 0) {
        goto L_8c17ebee;
    }
    call_8c011ed8(v48);
L_8c17ebee:;
    if (v49 != 0) {
        game_free_8c011ec0(v49);
    }
    if (v50 != 0) {
        call_8c011ed8(v50);
    }
    if (*(int *)0x8c4dbaec != 0) {
        goto L_8c17ed88;
    }
    t20 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t20 != 0) {
        goto L_8c17ed88;
    }
    memset_8c12b880((int)(*(S_g8c4db9ec **)0x8c4db9ec), 0, 0x16fc);
    call_8c027f34();
    operation_8c035388();
    if (*(int *)0x8c4db9e4 != 0) {
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)((&frame)));
        call_8c36d3ca((void *)((void *)0x8c4dbae0));
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)(&(&frame)->f04));
        (*(S_g8c4db9e4 **)0x8c4db9e4)->f0c += (&frame)->f04 - (&frame)->f00;
    }
    v59 = (S_vv59 *)*(S_g8c4db9e4 **)0x8c4db9e4;
    if (v59 != 0) {
        v59->f00 |= 1;
    }
    (*(S_g8c4db9e4 **)0x8c4db9e4)->f14 += 1;
    memcpy_8c12b77c((int)(&(*(S_g8c4db9ec **)0x8c4db9ec)->f04), (int)(*(S_g8c4db9e0 **)0x8c4db9e0), 0x41c);
    v60 = (int)((char *)*(S_g8c4db9ec **)0x8c4db9ec + 0x420);
    memcpy_8c12b77c(v60, (int)(*(S_g8c4db9e4 **)0x8c4db9e4), 0x12d8);
    if (*(int *)0x8c4dbb1c == 0) {
        v61 = (int)-1;
        v62 = (int)*(int *)0x8c4db9ec;
        v46 = (int)0;
        v47 = (S_vv47 *)(v62 + 8);
        v48 = (int)v61;
        goto L_8c17ed1e;
L_8c17ed08:;
        v47->f00 = 0;
        v47->f01 = -1;
        v47->f04 = 0;
        operation_1c7dd4((void *)((int)v47 + 8));
        v46 = (int)(v46 + 1);
        v47 = (S_vv47 *)((char *)v47 + 28);
L_8c17ed1e:;
        if (0x1e > v46) {
            goto L_8c17ed08;
        }
        (*(S_g8c4db9ec **)0x8c4db9ec)->f04 = 0;
        memset_8c12b880((int)(((char *)*(S_g8c4db9ec **)0x8c4db9ec + 0x66c)), 0, 0x5a0);
        (*(S_g8c4db9ec **)0x8c4db9ec)->f664 = 0;
        (*(S_g8c4db9ec **)0x8c4db9ec)->f668 = 0;
    } else {
    }
    (*(S_g8c4db9ec **)0x8c4db9ec)->f370 = 0;
    t21 = operation_8c2324e0();
    if (t21 == 0) {
        t24 = operation_8c2324c0();
        v44 = (int)t24;
    } else {
        v44 = (int)t21;
    }
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(v44);
    *(int *)0x8c4dbaf8 = (int)(v44);
    call_8c17f024((S_g8c4db9ec *)(*(S_g8c4db9ec **)0x8c4db9ec));
    build_main_data_vmu_header_8c17eecc();
    t22 = save_system_file_8c1818c0();
    if (t22 != 0) {
        goto L_8c17ed88;
    }
    *(int *)0x8c4dbaec = 6;
L_8c17ed88:;
    v63 = (S_vv63 *)*(S_g8c4db9e4 **)0x8c4db9e4;
    return (int)(v63->f14);
L_8c17edd0:;
    return 0;
}
