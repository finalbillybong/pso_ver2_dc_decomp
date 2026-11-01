/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c183370
 * function: operation_8c183370
 * language: c
 * reference size: 3272 bytes
 * compiled size: 3176 bytes (-2.9%)
 * differing lines: 996 of 1121 reference instruction lines
 * differing bytes: 2711
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -96 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct S_g8c4dbaf0 S_g8c4dbaf0;
typedef struct S_g8c4dbaf4 S_g8c4dbaf4;
typedef struct S_g8c4dbb08 S_g8c4dbb08;
typedef struct S_g8c4dbb0c S_g8c4dbb0c;
typedef struct S_g8c4dbb10 S_g8c4dbb10;
typedef struct S_g8c4dbb14 S_g8c4dbb14;
typedef struct S_g8c4dbb30 S_g8c4dbb30;
typedef struct S_g8c4dbb34 S_g8c4dbb34;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv12 S_vv12;
typedef struct S_vv19 S_vv19;
typedef struct S_vv28 S_vv28;
typedef struct S_vv34 S_vv34;
typedef struct S_vv41 S_vv41;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    int f34;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x68];
    int f68;
    int f6c;
    int f70;
    char unknown74[0x4];
    int f78;
    int f7c;
    int f80;
};
struct S_L8c4dbaf8 {
    int f00;
    int f04;
};
struct S_vv5 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_c8c011ecc {
    char unknown0[0x424];
    int f424;
    int f428;
    char unknown42c[0x8];
    int f434;
};
struct S_vv12 {
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
struct S_vv28 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv34 {
    char unknown0[0x4];
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
};
struct S_vv41 {
    char unknown0[0x4];
    int f04;
    int f08;
    char unknownc[0x8];
    int f14;
};
struct S_g8c4dbb34 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
extern int g_8c41cb3c;
extern S_g8c44be84 *g_8c44be84;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db9e4 *g_8c4db9e4;
extern S_g8c4db9e8 *g_8c4db9e8;
extern int g_8c4dbaec;
extern S_g8c4dbaf0 *g_8c4dbaf0;
extern S_g8c4dbaf4 *g_8c4dbaf4;
extern S_g8c4dbb08 *g_8c4dbb08;
extern S_g8c4dbb0c *g_8c4dbb0c;
extern S_g8c4dbb10 *g_8c4dbb10;
extern S_g8c4dbb14 *g_8c4dbb14;
extern int g_8c4dbb24;
extern S_g8c4dbb30 *g_8c4dbb30;
extern S_g8c4dbb34 *g_8c4dbb34;
extern int g_8c4dbb38;
extern int g_8c4dbb3c;
extern S_L8c4dbaf8 g_8c4dbaf8;
extern int operation_8c19b054(void);
extern int bu_check_busy_8c372d98(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern int net_call_8c372910(void *, void *);
extern void operation_8c119764(int, int, int);
extern void call_8c184070(void);
extern int call_8c372d66(void *, void *, void *);
extern int call_8c372ebc(void *, void *, void *, void *);
extern void release_active_resource_8c184038(void);
extern int net_call_8c37293e(void *, int);
extern int operation_8c2324e0(void);
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
extern void memcpy_8c12b77c(S_c8c011ecc *, int, int);
extern void operation_8c17f210(S_c8c011ecc *);
extern int operation_8c2324c0(void);
extern int operation_8c2324a0(void);
extern void memset_8c12b880(S_c8c011ecc *, int, int);
extern void call_8c17f3a8(S_c8c011ecc *);
extern int operation_8c232480(void);
extern void call_8c011ed8(S_c8c011ecc *);
extern void word_operation_8c18490c(unsigned int);
extern int vmu_save_file_timestamped_overwrite_8c010298(int, int, int, int);
extern int call_8c372db2(void *);
extern void operation_8c191504(int);
extern void call_8c17f824(void *);
extern void build_guild_card_vmu_header_8c17ef78(void);
extern void decode_record_collection(void *);
extern int vmu_find_file_8c01018c(int);
extern void call_8c184024(int);
extern int call_8c372c46(void *, void *);
extern int vmu_save_file_timestamped_8c01024c(int, int, int, int);
extern void operation_8c184100(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
extern int operation_8c1571f4(void *);
extern void operation_8c1845a8();
void operation_8c183370(Object *o)
{
    int v4;
    S_vv5 *v5;
    int v3;
    int v7;
    int v2;
    S_vv12 *v12;
    int v14;
    int v16;
    int v18;
    S_vv19 *v19;
    int v21;
    int v23;
    int v25;
    int v27;
    S_vv28 *v28;
    int v26;
    int v30;
    S_vv34 *v34;
    int v36;
    int v38;
    int v40;
    S_vv41 *v41;
    int v43;
    int v45;
    int v47;
    int v48;
    int v62;
    int v64;
    int v66;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    S_c8c011ecc *t10;
    int t11;
    int t12;
    S_c8c011ecc *t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    switch (o->f34) {
    case 0:
        t1 = operation_8c19b054();
        o->f2c = (Arg0_2c *)(char)t1;
        t2 = bu_check_busy_8c372d98((void *)(o->f2c));
        if (t2 != 0) {
            return;
        }
        o->f34 = 1;
        t3 = create_fitted_pair_grid_view((void *)((void *)0x8c287264), (void *)((void *)0x8c28726c));
        g_8c4dbb30 = (S_g8c4dbb30 *)(int)(t3);
        operation_8c0dc610((void *)t3, 1.0f);
        g_8c4dbb38 |= 1;
        return;
    case 1:
        t4 = net_call_8c372910((void *)(o->f2c), (void *)(o->f24));
        if (-0xff != t4) {
            if (-0xfd != t4) {
                if (t4 != 0) {
                    return;
                }
                o->f34 = 2;
                return;
            }
        }
        o->f34 = 0x14;
        g_8c4dbb38 = (unsigned int)g_8c4dbb38 >> 1 << 1;
        operation_8c119764((int)g_8c4dbb30, (int)(g_8c467180->f2c->f68), 1);
        operation_8c119764((int)g_8c4dbb30, (int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + ((int)o->f2c + 0x23 << 2))), 8);
        call_8c184070();
        return;
    case 2:
        t5 = call_8c372d66((void *)(o->f2c), (void *)((void *)0x8c319870), (void *)(o->f28));
        if (-0xfb != t5) {
            if (t5 == -1) {
                return;
            }
            switch (t5) {
            case 0:
                if (o->f20 == 0) {
                    return;
                }
                t6 = call_8c372ebc((void *)(o->f2c), (void *)((void *)0x8c319870), (void *)(o->f20), (void *)(o->f30));
                switch (t6) {
                case 0:
                    o->f34 = 4;
                    return;
                }
                o->f34 = 0;
                release_active_resource_8c184038();
                return;
            default:
                o->f34 = 0;
                release_active_resource_8c184038();
                return;
            }
        }
        o->f34 = 0x16;
        g_8c4dbb38 = (unsigned int)g_8c4dbb38 >> 1 << 1;
        operation_8c119764((int)g_8c4dbb30, (int)(g_8c467180->f2c->f78), 1);
        operation_8c119764((int)g_8c4dbb30, (int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + ((int)o->f2c + 0x23 << 2))), 8);
        call_8c184070();
        return;
    case 3:
        t7 = net_call_8c37293e((void *)(o->f2c), 0);
        if (t7 >= (int)(o->f30)) {
            o->f34 = 6;
            return;
        }
        o->f34 = 0x15;
        g_8c4dbb38 = (unsigned int)g_8c4dbb38 >> 1 << 1;
        operation_8c119764((int)g_8c4dbb30, (int)(g_8c467180->f2c->f6c), 1);
        operation_8c119764((int)g_8c4dbb30, (int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + ((int)o->f2c + 0x23 << 2))), 8);
        call_8c184070();
        return;
    case 4:
        t8 = bu_check_busy_8c372d98((void *)(o->f2c));
        if (t8 != 0) {
            return;
        }
        o->f34 = 5;
        return;
    case 5:
        t9 = operation_8c2324e0();
        (&g_8c4dbaf8)->f04 = (int)(t9);
        (&g_8c4dbaf8)->f00 = (int)(t9);
        v2 = (int)o->f20;
        t10 = game_malloc_8c011ecc(0x16fc);
        if (t10 != 0) {
            operation_8c1acbc0((void *)(((char *)t10 + 0x3c4)));
            operation_8c1acbc0((void *)(((char *)t10 + 0x3e8)));
            v3 = (int)-1;
            v7 = (int)0;
            goto L_8c1836c8;
            v4 = (int)0;
            do {
                v5 = (S_vv5 *)((char *)((char *)(int *)((char *)t10 + 0x4) + v4 * 0x1c) + 4);
                v5->f00 = 0;
                v5->f01 = v3;
                v5->f04 = 0;
                v5->f03 = 0;
                v5->f02 = 0;
                operation_1c7dd4((void *)((int)v5 + 8));
                v4 = (int)(v4 + 1);
                v7 = (int)v4;
L_8c1836c8:;
                v4 = (int)v7;
            } while (0x1e > v7);
        }
        memcpy_8c12b77c(t10, (int)(v2 + 0x280), 0x16fc);
        operation_8c17f210(t10);
        v12 = (S_vv12 *)g_8c4db9e4;
        if (((char *)t10 + 0x420) != 0) {
            if (v12 != 0) {
                goto L_8c183714;
            }
        }
        v18 = (int)0;
        goto L_8c18375a;
L_8c183714:;
        if ((unsigned int)t10->f434 > (unsigned int)v12->f14) {
            v16 = (int)2;
        } else {
            if (t10->f424 != v12->f04) {
                v14 = (int)4;
            } else {
                if (t10->f428 == -0x5dfa4f9c) {
                    if (v12->f08 == -0x5dfa4f9c) {
                        goto L_8c183758;
                    }
                }
                v18 = (int)5;
                goto L_8c18375a;
L_8c183758:;
                v14 = (int)6;
            }
            v16 = (int)v14;
        }
        v18 = (int)v16;
L_8c18375a:;
        if (v18 == 6) {
        } else {
            t11 = operation_8c2324c0();
            (&g_8c4dbaf8)->f04 = (int)(t11);
            (&g_8c4dbaf8)->f00 = (int)(t11);
            memcpy_8c12b77c(t10, (int)(v2 + 0x280), 0x16fc);
            operation_8c17f210(t10);
            v19 = (S_vv19 *)g_8c4db9e4;
            if (((char *)t10 + 0x420) != 0) {
                if (v19 != 0) {
                    goto L_8c1837b8;
                }
            }
            v25 = (int)0;
            goto L_8c1837fe;
L_8c1837b8:;
            if ((unsigned int)t10->f434 > (unsigned int)v19->f14) {
                v23 = (int)2;
            } else {
                if (t10->f424 != v19->f04) {
                    v21 = (int)4;
                } else {
                    if (t10->f428 == -0x5dfa4f9c) {
                        if (v19->f08 == -0x5dfa4f9c) {
                            goto L_8c1837fc;
                        }
                    }
                    v25 = (int)5;
                    goto L_8c1837fe;
L_8c1837fc:;
                    v21 = (int)6;
                }
                v23 = (int)v21;
            }
            v25 = (int)v23;
L_8c1837fe:;
            if (v25 == 6) {
            } else {
                t12 = operation_8c2324a0();
                (&g_8c4dbaf8)->f04 = (int)(t12);
                (&g_8c4dbaf8)->f00 = (int)(t12);
                t13 = game_malloc_8c011ecc(0x1550);
                if (t13 != 0) {
                    operation_8c1acbc0((void *)(((char *)t13 + 0x3c4)));
                    operation_8c1acbc0((void *)(((char *)t13 + 0x3e8)));
                    v26 = (int)-1;
                    v30 = (int)0;
                    goto L_8c183884;
                    v27 = (int)0;
                    do {
                        v28 = (S_vv28 *)((char *)((char *)(int *)((char *)t13 + 0x4) + v27 * 0x1c) + 4);
                        v28->f00 = 0;
                        v28->f01 = v26;
                        v28->f04 = 0;
                        v28->f03 = 0;
                        v28->f02 = 0;
                        operation_1c7dd4((void *)((int)v28 + 8));
                        v27 = (int)(v27 + 1);
                        v30 = (int)v27;
L_8c183884:;
                        v27 = (int)v30;
                    } while (0x1e > v30);
                    v3 = (int)v27;
                }
                memset_8c12b880(t13, 0, 0x1550);
                memcpy_8c12b77c(t13, (int)(v2 + 0x280), 0x1550);
                call_8c17f3a8(t13);
                v34 = (S_vv34 *)g_8c4db9e4;
                if (((char *)t13 + 0x420) != 0) {
                    if (v34 != 0) {
                        goto L_8c1838e0;
                    }
                }
                v40 = (int)0;
                goto L_8c183926;
L_8c1838e0:;
                if ((unsigned int)t13->f434 > (unsigned int)v34->f14) {
                    v38 = (int)2;
                } else {
                    if (t13->f424 != v34->f04) {
                        v36 = (int)4;
                    } else {
                        if (t13->f428 == -0x5dfa4f9c) {
                            if (v34->f08 == -0x5dfa4f9c) {
                                goto L_8c183924;
                            }
                        }
                        v40 = (int)5;
                        goto L_8c183926;
L_8c183924:;
                        v36 = (int)6;
                    }
                    v38 = (int)v36;
                }
                v40 = (int)v38;
L_8c183926:;
                if (v40 == 6) {
                } else {
                    t14 = operation_8c232480();
                    (&g_8c4dbaf8)->f04 = (int)(t14);
                    (&g_8c4dbaf8)->f00 = (int)(t14);
                    memcpy_8c12b77c(t13, (int)(v2 + 0x280), 0x1550);
                    call_8c17f3a8(t13);
                    v41 = (S_vv41 *)g_8c4db9e4;
                    if (((char *)t13 + 0x420) != 0) {
                        if (v41 != 0) {
                            goto L_8c183984;
                        }
                    }
                    v47 = (int)0;
                    goto L_8c1839ca;
L_8c183984:;
                    if ((unsigned int)t13->f434 > (unsigned int)v41->f14) {
                        v45 = (int)2;
                    } else {
                        if (t13->f424 != v41->f04) {
                            v43 = (int)4;
                        } else {
                            if (t13->f428 == -0x5dfa4f9c) {
                                if (v41->f08 == -0x5dfa4f9c) {
                                    goto L_8c1839c8;
                                }
                            }
                            v47 = (int)5;
                            goto L_8c1839ca;
L_8c1839c8:;
                            v43 = (int)6;
                        }
                        v45 = (int)v43;
                    }
                    v47 = (int)v45;
L_8c1839ca:;
                    if (v47 != 6) {
                        v48 = (int)g_8c4dbb3c;
                        g_8c4dbb3c = v48 + 1;
                        if (v48 >= (unsigned int)5) {
                            o->f34 = 6;
                            goto L_8c183a4a;
                        }
                        o->f34 = 0x17;
                        g_8c4dbb38 = (unsigned int)g_8c4dbb38 >> 1 << 1;
                        operation_8c119764((int)g_8c4dbb30, (int)(g_8c467180->f2c->f78), 1);
                        operation_8c119764((int)g_8c4dbb30, (int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + ((int)o->f2c + 0x23 << 2))), 8);
                        call_8c184070();
                        goto L_8c183a4a;
                    }
                    o->f34 = 6;
                    goto L_8c183a4a;
                }
                o->f34 = 6;
L_8c183a4a:;
                if (t13 == 0) {
                    goto L_8c183a66;
                }
                call_8c011ed8(t13);
                goto L_8c183a66;
            }
            o->f34 = 6;
            goto L_8c183a66;
        }
        o->f34 = 6;
L_8c183a66:;
        if (t10 == 0) {
            return;
        }
        call_8c011ed8(t10);
        return;
    case 6:
        t15 = operation_8c19b054();
        g_8c4dbaf0 = (S_g8c4dbaf0 *)(char)t15;
        v64 = (int)-1;
        if ((char)t15 >= 0) {
            v62 = (int)-1;
            if (7 >= (char)t15) {
                word_operation_8c18490c((unsigned int)((char)t15));
                g_8c41cb3c = 1;
                t36 = vmu_save_file_timestamped_overwrite_8c010298((int)g_8c4dbaf0, (int)((void *)0x8c319870), (int)g_8c4dbb10, (int)g_8c4dbb08);
                v62 = (int)t36;
            }
            v64 = (int)v62;
        }
        if (v64 != 0) {
            return;
        }
        o->f34 = 7;
        g_8c4dbaec = 6;
        operation_8c119764((int)g_8c4dbb30, (int)(g_8c467180->f2c->f80), 1);
        g_8c4dbb3c = 0;
        return;
    case 7:
        if (g_8c4dbaec != 0) {
            return;
        }
        o->f34 = 8;
        return;
    case 8:
        t16 = bu_check_busy_8c372d98((void *)(o->f2c));
        if (t16 != 0) {
            return;
        }
        t17 = call_8c372db2((void *)(o->f2c));
        switch (t17) {
        case 0:
            o->f34 = 9;
            t18 = operation_8c19b054();
            o->f2c = (Arg0_2c *)(char)t18;
            o->f30 = (Arg0_30 *)g_8c4dbb0c;
            operation_8c191504(0);
            if (g_8c4db9e8 == 0) {
                return;
            }
            if (g_8c4dbb14 == 0) {
                return;
            }
            t19 = operation_8c2324e0();
            v66 = (int)t19;
            if (t19 == 0) {
                t35 = operation_8c2324c0();
                v66 = (int)t35;
            }
            (&g_8c4dbaf8)->f04 = (int)(v66);
            (&g_8c4dbaf8)->f00 = (int)(v66);
            call_8c17f824(g_8c4db9e8);
            build_guild_card_vmu_header_8c17ef78();
            decode_record_collection(g_8c4db9e8);
            return;
        }
        o->f34 = 0x18;
        g_8c4dbb38 = (unsigned int)g_8c4dbb38 >> 1 << 1;
        operation_8c119764((int)g_8c4dbb30, (int)(g_8c467180->f2c->f7c), 1);
        call_8c184070();
        return;
    case 9:
        t20 = call_8c372d66((void *)(o->f2c), (void *)((void *)0x8c319912), (void *)(o->f28));
        if (t20 == -1) {
            return;
        }
        switch (t20) {
        case 0:
            o->f34 = 0x11;
            return;
        }
        o->f34 = 0xa;
        return;
    case 10:
        t21 = call_8c372d66((void *)(o->f2c), (void *)((void *)0x8c3198c1), (void *)(o->f28));
        if (t21 == -1) {
            return;
        }
        switch (t21) {
        case 0:
            o->f34 = 0xf;
            return;
        }
        o->f34 = 0xb;
        return;
    case 11:
        t22 = vmu_find_file_8c01018c((int)((void *)0x8c319912));
        if (!(t22 > -2)) {
            if (t22 >= -2) {
                call_8c184024(t22);
                return;
            }
        }
        o->f34 = 0xc;
        return;
    case 12:
        t23 = vmu_find_file_8c01018c((int)((void *)0x8c3198c1));
        if (!(t23 > -2)) {
            if (t23 >= -2) {
                call_8c184024(t23);
                return;
            }
        }
        o->f34 = 0xe;
        t24 = operation_8c19b054();
        o->f2c = (Arg0_2c *)(char)t24;
        return;
    case 13:
        t25 = bu_check_busy_8c372d98((void *)(o->f2c));
        if (t25 != 0) {
            return;
        }
        o->f34 = 0x11;
        return;
    case 14:
        t26 = net_call_8c37293e((void *)(o->f2c), 0);
        if (t26 >= (int)(o->f30)) {
            o->f34 = 0x11;
            return;
        }
        o->f34 = 0x15;
        g_8c4dbb38 = (unsigned int)g_8c4dbb38 >> 1 << 1;
        operation_8c119764((int)g_8c4dbb30, (int)(g_8c467180->f2c->f70), 1);
        call_8c184070();
        return;
    case 15:
        t27 = call_8c372c46((void *)(o->f2c), (void *)((void *)0x8c3198c1));
        if (t27 != 0) {
            return;
        }
        o->f34 = 0x10;
        return;
    case 16:
        t28 = bu_check_busy_8c372d98((void *)(o->f2c));
        if (t28 == -1) {
            return;
        }
        switch (t28) {
        case 0:
            o->f34 = 0x11;
            return;
        }
        o->f34 = 0x14;
        g_8c4dbb38 = (unsigned int)g_8c4dbb38 >> 1 << 1;
        operation_8c119764((int)g_8c4dbb30, (int)(g_8c467180->f2c->f68), 1);
        operation_8c119764((int)g_8c4dbb30, (int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + ((int)o->f2c + 0x23 << 2))), 8);
        call_8c184070();
        return;
    case 17:
        g_8c4dbaf4 = (S_g8c4dbaf4 *)(int)(o->f2c);
        word_operation_8c18490c((unsigned int)(o->f2c));
        g_8c41cb3c = 1;
        t29 = vmu_save_file_timestamped_8c01024c((int)g_8c4dbaf4, (int)((void *)0x8c319912), (int)g_8c4dbb14, (int)g_8c4dbb0c);
        if (t29 != 0) {
            return;
        }
        o->f34 = 0x12;
        g_8c4dbaec = 0xc;
        return;
    case 18:
        if (g_8c4dbaec != 0) {
            return;
        }
        o->f34 = 0x13;
        return;
    case 19:
        t30 = bu_check_busy_8c372d98((void *)(o->f2c));
        if (t30 != 0) {
            return;
        }
        t31 = call_8c372db2((void *)(o->f2c));
        switch (t31) {
        case 0:
            o->f34 = 0x19;
            release_active_resource_8c184038();
            operation_8c184100();
            t32 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
            if (t32 == 0) {
                return;
            }
            initialize_color_rise(t32, g_8c44be84, operation_8c1845a8);
            return;
        }
        o->f34 = 0x18;
        g_8c4dbb38 = (unsigned int)g_8c4dbb38 >> 1 << 1;
        operation_8c119764((int)g_8c4dbb30, (int)(g_8c467180->f2c->f7c), 1);
        call_8c184070();
        return;
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
        if (((g_8c4dbb34->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t33 = operation_8c1571f4((void *)g_8c4dbb34);
        switch (t33) {
        case 0:
            o->f34 = 0;
            release_active_resource_8c184038();
            operation_8c184100();
            return;
        default:
            o->f34 = 0x19;
            release_active_resource_8c184038();
            operation_8c184100();
            t34 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
            if (t34 != 0) {
                initialize_color_rise(t34, g_8c44be84, operation_8c1845a8);
                return;
            }
            return;
        }
    case 25:
        o->f04 |= 1;
        g_8c4dbb24 = 0;
        return;
    }
}
