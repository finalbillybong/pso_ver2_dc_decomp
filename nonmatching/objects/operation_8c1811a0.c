/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1811a0
 * function: operation_8c1811a0
 * language: c
 * reference size: 1824 bytes
 * compiled size: 1852 bytes (+1.5%)
 * differing lines: 484 of 640 reference instruction lines
 * differing bytes: 1334
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +28 bytes
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
typedef struct S_vv13 S_vv13;
typedef struct S_vv15 S_vv15;
typedef struct S_vv17 S_vv17;
typedef struct S_vv4 S_vv4;
typedef struct S_vv7 S_vv7;
struct S_L8c4dbaf8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv13 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv15 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
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
struct S_vv4 {
    char unknown0[0xc];
    int f0c;
};
struct S_vv17 {
    int f00;
};
struct S_vv7 {
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
extern int operation_8c19b054(void);
extern int call_8c3727a0(int);
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
extern void call_8c17f3a8(int);
extern int compare_records_8c1819a8(void *, void *);
extern int operation_8c232480(void);
extern void call_8c011ed8(int);
extern void operation_8c17e194(void);
extern void call_8c027f34(void);
extern void operation_8c035388(void);
extern void call_8c36d4c0(void *, Frame *);
extern void call_8c36d3ca(void *);
extern void operation_8c177a90(void);
extern void call_8c17f024(S_g8c4db9ec *);
extern void call_8c18e720(void *, void *);
extern void call_8c377d84(void *, void *);
extern int save_system_file_8c1818c0(void);
int operation_8c1811a0(void)
{
    Frame frame;
    int t25;
    int v9;
    int v10;
    int t6;
    int v8;
    S_vv13 *v13;
    int v19;
    S_vv7 *v7;
    S_vv15 *v15;
    int v6;
    S_vv4 *v4;
    S_vv17 *v17;
    int v18;
    int v20;
    int t16;
    int v3;
    int v21;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int v12;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int v11;
    int t17;
    int t18;
    int v14;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t19;
    int t26;
    if (*(int *)0x8c4db9e0 != 0) {
        goto L_8c1811dc;
    }
    if (*(int *)0x8c4db9e4 != 0) {
        goto L_8c1811dc;
    }
    if (*(int *)0x8c4db9ec != 0) {
        goto L_8c1811dc;
    }
    return -0x10000;
L_8c1811dc:;
    t1 = operation_8c19b054();
    *(int *)0x8c4dbaf0 = (char)t1;
    t2 = call_8c3727a0((int)((char)t1));
    if (t2 != 1) {
        return -0x10000;
L_8c181208:;
        t3 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
        if (t3 == 1) {
            goto L_8c181228;
        }
        return -0x10000;
L_8c181228:;
        wait_vsync_and_flip_8c380516();
    }
    t4 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t4 != 0) {
        goto L_8c181208;
    }
    t5 = call_8c372d38((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870));
    if (t5 != 0) {
        return (int)(t5);
    }
    v11 = (int)(*(int *)0x8c4dbb08 << 9);
    t6 = game_malloc_buffer_8c011e9c(v11);
    v9 = (int)t6;
    memset_8c12b880(t6, 0, v11);
    v6 = (int)v11;
    goto L_8c1812c6;
L_8c181290:;
    t7 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t7 != 1) {
        if (v9 == 0) {
            goto L_8c1812a8;
        }
        game_free_8c011ec0(v9);
L_8c1812a8:;
        return -0x10000;
    }
    wait_vsync_and_flip_8c380516();
L_8c1812c6:;
    t8 = call_8c372ebc((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0), (void *)((void *)0x8c319870), v9, (void *)(*(S_g8c4dbb08 **)0x8c4dbb08));
    if (t8 != 0) {
        goto L_8c181290;
    }
    goto L_8c18132a;
L_8c1812f4:;
    t9 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t9 != 1) {
        if (v9 == 0) {
            goto L_8c18130c;
        }
        game_free_8c011ec0(v9);
L_8c18130c:;
        return -0x10000;
    }
    wait_vsync_and_flip_8c380516();
L_8c18132a:;
    t10 = bu_check_busy_8c372d98((void *)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t10 != 0) {
        goto L_8c1812f4;
    }
    t11 = operation_8c2324e0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t11);
    *(int *)0x8c4dbaf8 = (int)(t11);
    t25 = game_malloc_8c011ecc(0x16fc);
    v10 = (int)t25;
    if (v10 != 0) {
        operation_8c1acbc0((void *)(v10 + 0x3c4));
        operation_8c1acbc0((void *)(v10 + 0x3e8));
        v12 = (int)-1;
        v7 = (S_vv7 *)v12;
        v8 = (int)0;
        goto L_8c1813c0;
L_8c181398:;
        v13 = (S_vv13 *)((char *)(v10 + 4 + v8 * 0x1c) + 4);
        v13->f00 = 0;
        v13->f01 = -1;
        v13->f04 = 0;
        v13->f03 = 0;
        v13->f02 = 0;
        operation_1c7dd4((void *)((int)v13 + 8));
        v8 = (int)(v8 + 1);
L_8c1813c0:;
        if (0x1e > v8) {
            goto L_8c181398;
        }
    }
    memset_8c12b880(v10, 0, 0x16fc);
    memcpy_8c12b77c(v10, (int)(v9 + 0x280), 0x16fc);
    operation_8c17f210((void *)v10);
    t12 = compare_records_8c181968((void *)(v10 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t12 == 6) {
        goto L_8c1815a6;
    }
    t13 = operation_8c2324c0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t13);
    *(int *)0x8c4dbaf8 = (int)(t13);
    memcpy_8c12b77c(v10, (int)(v9 + 0x280), 0x16fc);
    operation_8c17f210((void *)v10);
    t14 = compare_records_8c181968((void *)(v10 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t14 == 6) {
        goto L_8c1815a6;
    }
    t15 = operation_8c2324a0();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t15);
    *(int *)0x8c4dbaf8 = (int)(t15);
    t16 = game_malloc_8c011ecc(0x1550);
    if (t16 != 0) {
        operation_8c1acbc0((void *)(t16 + 0x3c4));
        operation_8c1acbc0((void *)(t16 + 0x3e8));
        v14 = (int)-1;
        v6 = (int)v14;
        v7 = (S_vv7 *)0;
        v8 = (int)t16;
        goto L_8c1814d8;
L_8c1814b0:;
        v15 = (S_vv15 *)((char *)(v8 + 4 + (int)(v7) * 0x1c) + 4);
        v15->f00 = 0;
        v15->f01 = -1;
        v15->f04 = 0;
        v15->f03 = 0;
        v15->f02 = 0;
        operation_1c7dd4((void *)((int)v15 + 8));
        v7 = (S_vv7 *)((char *)v7 + 1);
L_8c1814d8:;
        if (0x1e > (int)v7) {
            goto L_8c1814b0;
        }
    } else {
        v8 = (int)t16;
    }
    memset_8c12b880(v8, 0, 0x1550);
    memcpy_8c12b77c(v8, (int)(v9 + 0x280), 0x1550);
    call_8c17f3a8(v8);
    t17 = compare_records_8c1819a8((void *)(v8 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t17 == 6) {
        goto L_8c18159c;
    }
    t18 = operation_8c232480();
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(t18);
    *(int *)0x8c4dbaf8 = (int)(t18);
    memcpy_8c12b77c(v8, (int)(v9 + 0x280), 0x1550);
    call_8c17f3a8(v8);
    t19 = compare_records_8c1819a8((void *)(v8 + 0x420), (void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    if (t19 == 6) {
        v6 = (int)t19;
        goto L_8c18159c;
    }
    if (v9 != 0) {
        game_free_8c011ec0(v9);
        v6 = (int)t19;
    } else {
        v6 = (int)t19;
    }
    if (v10 != 0) {
        call_8c011ed8(v10);
    }
    if (v8 != 0) {
        call_8c011ed8(v8);
    }
    return (int)(v6);
L_8c18159c:;
    if (v8 == 0) {
        goto L_8c1815a6;
    }
    call_8c011ed8(v8);
L_8c1815a6:;
    if (v9 != 0) {
        game_free_8c011ec0(v9);
    }
    if (v10 == 0) {
        goto L_8c1815fa;
    }
    call_8c011ed8(v10);
    goto L_8c1815fa;
L_8c1815c8:;
    operation_8c17e194();
    t20 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t20 != 1) {
        return -0x10000;
    }
    wait_vsync_and_flip_8c380516();
L_8c1815fa:;
    if (*(int *)0x8c4dbaec != 0) {
        goto L_8c1815c8;
    }
    memset_8c12b880((int)(*(S_g8c4db9ec **)0x8c4db9ec), 0, 0x16fc);
    call_8c027f34();
    operation_8c035388();
    if (*(int *)0x8c4db9e4 != 0) {
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)((&frame)));
        call_8c36d3ca((void *)((void *)0x8c4dbae0));
        call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)(&(&frame)->f04));
        v4 = (S_vv4 *)*(S_g8c4db9e4 **)0x8c4db9e4;
        v4->f0c += (&frame)->f04 - (&frame)->f00;
    } else {
        v4 = (S_vv4 *)/* ? clobbered */ 0;
    }
    operation_8c177a90();
    v17 = (S_vv17 *)*(S_g8c4db9e4 **)0x8c4db9e4;
    if (v17 != 0) {
        v17->f00 |= 1;
    }
    memcpy_8c12b77c((int)(&(*(S_g8c4db9ec **)0x8c4db9ec)->f04), (int)(*(S_g8c4db9e0 **)0x8c4db9e0), 0x41c);
    v18 = (int)((char *)*(S_g8c4db9ec **)0x8c4db9ec + 0x420);
    memcpy_8c12b77c(v18, (int)(*(S_g8c4db9e4 **)0x8c4db9e4), 0x12d8);
    if (*(int *)0x8c4dbb1c == 0) {
        v19 = (int)-1;
        v20 = (int)*(int *)0x8c4db9ec;
        v6 = (int)0;
        v7 = (S_vv7 *)(v20 + 8);
        v8 = (int)v19;
        goto L_8c1816f6;
L_8c1816e0:;
        v7->f00 = 0;
        v7->f01 = -1;
        v7->f04 = 0;
        operation_1c7dd4((void *)((int)v7 + 8));
        v6 = (int)(v6 + 1);
        v7 = (S_vv7 *)((char *)v7 + 28);
L_8c1816f6:;
        if (0x1e > v6) {
            goto L_8c1816e0;
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
        t26 = operation_8c2324c0();
        v3 = (int)t26;
    } else {
        v3 = (int)t21;
    }
    ((S_L8c4dbaf8 *)0x8c4dbaf8)->f04 = (int)(v3);
    *(int *)0x8c4dbaf8 = (int)(v3);
    call_8c17f024((S_g8c4db9ec *)(*(S_g8c4db9ec **)0x8c4db9ec));
    memset_8c12b880((int)(&(&frame)->f08), 0, 0x60);
    call_8c18e720((void *)(&(&frame)->f08), (void *)((void *)0x8c31987d));
    call_8c18e720((void *)(((char *)(&frame) + 0x1a)), (void *)((void *)0x8c31988f));
    memcpy_8c12b77c((int)(&(&frame)->f3c), (int)((void *)0x8c3198b1), 0x10);
    (&frame)->f4c = (void *)0x8c286818;
    (&frame)->f50 = (void *)0x8c286838;
    (&frame)->f54 = 1;
    (&frame)->f56 = 1;
    v21 = (int)*(int *)0x8c4db9ec;
    (&frame)->f58 = 0;
    (&frame)->f5c = 0;
    (&frame)->f60 = (int)(v21);
    (&frame)->f64 = 0x16fc;
    call_8c377d84((void *)(*(S_g8c4dbb10 **)0x8c4dbb10), (void *)(&(&frame)->f08));
    goto L_8c18184e;
L_8c18181c:;
    operation_8c17e194();
    t22 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t22 != 1) {
        return -0x10000;
    }
    wait_vsync_and_flip_8c380516();
L_8c18184e:;
    t23 = save_system_file_8c1818c0();
    if (t23 != 0) {
        goto L_8c18181c;
    }
    *(int *)0x8c4dbaec = 6;
    goto L_8c18189e;
L_8c18186c:;
    operation_8c17e194();
    t24 = call_8c3727a0((int)(*(S_g8c4dbaf0 **)0x8c4dbaf0));
    if (t24 != 1) {
        return -0x10000;
    }
    wait_vsync_and_flip_8c380516();
L_8c18189e:;
    if (*(int *)0x8c4dbaec != 0) {
        goto L_8c18186c;
    }
    return 6;
}
