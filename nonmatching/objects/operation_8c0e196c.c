/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e196c
 * function: operation_8c0e196c
 * language: c
 * reference size: 592 bytes
 * compiled size: 672 bytes (+13.5%)
 * differing lines: 148 of 239 reference instruction lines
 * differing bytes: 562
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +80 bytes
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2;
 *   offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B: RAM, trace and sampled
 *   call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv9 S_vv9;
struct Object {
    int tag;
    int f04;
};
struct Arg1 {
    int f00;
    int f04;
};
struct S_vv9 {
    unsigned int f00;
};
struct S_vv10 {
    int f00;
};
extern int operator_new_8c18de4c(int);
extern int game_malloc_8c011ecc(int);
extern int initialize_rectangle_view_node(void *, void *);
extern int initialize_record_8c0e14f0(void *, void *);
extern int operation_8c0f725c(void *, void *);
extern int operation_8c0e2020(void *, void *);
extern int initialize_number_view_node(void *, void *);
extern int operation_8c0fcba4(void *, int);
extern int call_8c1048b0(int, S_vv9 *);
extern int call_8c104958(int, S_vv9 *);
extern int operation_8c17bb38(void *, void *);
extern int operation_8c19e20c(void *, S_vv9 *);
extern int operation_8c1db85c(void *, S_vv9 *);
extern int operation_8c1d586c(void *, void *);
extern int operation_8c1e5cbc(void *, void *);
int operation_8c0e196c(Object *o, Arg1 *a1)
{
    int v8;
    char *v11;
    int v46;
    int v3;
    int v1;
    char *v5;
    char *v7;
    int v49;
    int v12;
    int v14;
    int v16;
    int v18;
    int v20;
    int v22;
    int v24;
    int v26;
    int v28;
    int v30;
    int v32;
    int v34;
    int v36;
    int v38;
    char *v4;
    char *v6;
    S_vv10 *v10;
    int v45;
    int v41;
    S_vv9 *v9;
    int v44;
    int v48;
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
    if (a1 == 0) {
        o->tag = 0;
        o->f04 = 0;
        return 0;
    }
    v1 = (int)a1->f04;
    o->tag = a1->f00 * v1;
    if (o->tag == 0) {
        o->tag = 0;
        o->f04 = 0;
        return 0;
    }
    t1 = operator_new_8c18de4c((int)(o->tag << 2));
    o->f04 = (int)(t1);
    v48 = (int)t1;
    v45 = (int)o->f04;
    v49 = (int)v1;
    goto L_8c0e1b64;
    v3 = (int)t1;
    v4 = (char *)o->f04;
    v5 = (char *)v1;
    for (;;) {
        v6 = (char *)v4;
        v7 = (char *)v5;
L_8c0e19ae:;
        v8 = (int)a1->f00;
        v41 = (int)v3;
        v44 = (int)((char *)a1 + 0x8);
        v45 = (int)v6;
        v46 = (int)v8;
        goto L_8c0e1b5a;
        v9 = (S_vv9 *)((char *)a1 + 0x8);
        v10 = (S_vv10 *)v6;
        v11 = (char *)v8;
L_8c0e19b6:;
        v38 = (int)0xc;
        switch (v9->f00) {
        case 0:
            t2 = game_malloc_8c011ecc(0x18);
            v12 = (int)t2;
            if (t2 != 0) {
                t15 = initialize_rectangle_view_node((void *)t2, (void *)v9);
                v12 = (int)t15;
            }
            v10->f00 = (int)(t2);
            v38 = (int)v12;
            v9 = (S_vv9 *)((char *)v9 + 20);
            break;
        case 1:
            t3 = game_malloc_8c011ecc(0x28);
            v14 = (int)t3;
            if (t3 != 0) {
                t16 = initialize_record_8c0e14f0((void *)t3, (void *)v9);
                v14 = (int)t16;
            }
            v10->f00 = (int)(t3);
            v38 = (int)v14;
            v9 = (S_vv9 *)((char *)v9 + 36);
            break;
        case 2:
            t4 = game_malloc_8c011ecc(0x68);
            v16 = (int)t4;
            if (t4 != 0) {
                t17 = operation_8c0f725c((void *)t4, (void *)v9);
                v16 = (int)t17;
            }
            v10->f00 = (int)(t4);
            v38 = (int)v16;
            v9 = (S_vv9 *)((char *)v9 + 44);
            break;
        case 3:
            t5 = game_malloc_8c011ecc(0x2c);
            v18 = (int)t5;
            if (t5 != 0) {
                t18 = operation_8c0e2020((void *)t5, (void *)v9);
                v18 = (int)t18;
            }
            v10->f00 = (int)(t5);
            v38 = (int)v18;
            v9 = (S_vv9 *)((char *)v9 + 28);
            break;
        case 4:
            t6 = game_malloc_8c011ecc(0x24);
            v20 = (int)t6;
            if (t6 != 0) {
                t19 = initialize_number_view_node((void *)t6, (void *)v9);
                v20 = (int)t19;
            }
            v10->f00 = (int)(t6);
            v38 = (int)v20;
            v9 = (S_vv9 *)((char *)v9 + 28);
            break;
        case 5:
            t7 = game_malloc_8c011ecc(0x30);
            v22 = (int)t7;
            if (t7 != 0) {
                t20 = operation_8c0fcba4((void *)t7, (int)v9);
                v22 = (int)t20;
            }
            v10->f00 = (int)(t7);
            v38 = (int)v22;
            v9 = (S_vv9 *)((char *)v9 + 28);
            break;
        case 6:
            t8 = game_malloc_8c011ecc(0x38);
            v24 = (int)t8;
            if (t8 != 0) {
                t21 = call_8c1048b0(t8, v9);
                v24 = (int)t21;
            }
            v10->f00 = (int)(t8);
            v38 = (int)v24;
            v9 = (S_vv9 *)((char *)v9 + 48);
            break;
        case 7:
            t9 = game_malloc_8c011ecc(0x38);
            v26 = (int)t9;
            if (t9 != 0) {
                t22 = call_8c104958(t9, v9);
                v26 = (int)t22;
            }
            v10->f00 = (int)(t9);
            v38 = (int)v26;
            v9 = (S_vv9 *)((char *)v9 + 56);
            break;
        case 8:
            t10 = game_malloc_8c011ecc(0x20);
            v28 = (int)t10;
            if (t10 != 0) {
                t23 = operation_8c17bb38((void *)t10, (void *)v9);
                v28 = (int)t23;
            }
            v10->f00 = (int)(t10);
            v38 = (int)v28;
            v9 = (S_vv9 *)((char *)v9 + 28);
            break;
        case 9:
            t11 = game_malloc_8c011ecc(0x38);
            v30 = (int)t11;
            if (t11 != 0) {
                t24 = operation_8c19e20c((void *)t11, v9);
                v30 = (int)t24;
            }
            v10->f00 = (int)(t11);
            v38 = (int)v30;
            v9 = (S_vv9 *)((char *)v9 + 4);
            break;
        case 10:
            t12 = game_malloc_8c011ecc(0x28);
            v32 = (int)t12;
            if (t12 != 0) {
                t25 = operation_8c1db85c((void *)t12, v9);
                v32 = (int)t25;
            }
            v10->f00 = (int)(t12);
            v38 = (int)v32;
            v9 = (S_vv9 *)((char *)v9 + 4);
            break;
        case 11:
            t13 = game_malloc_8c011ecc(0x14);
            v34 = (int)t13;
            if (t13 != 0) {
                t26 = operation_8c1d586c((void *)t13, (void *)v9);
                v34 = (int)t26;
            }
            v10->f00 = (int)(t13);
            v38 = (int)v34;
            v9 = (S_vv9 *)((char *)v9 + 12);
            break;
        case 12:
            t14 = game_malloc_8c011ecc(0x24);
            v36 = (int)t14;
            if (t14 != 0) {
                t27 = operation_8c1e5cbc((void *)t14, (void *)v9);
                v36 = (int)t27;
            }
            v10->f00 = (int)(t14);
            v38 = (int)v36;
            v9 = (S_vv9 *)((char *)v9 + 12);
        }
        v41 = (int)v38;
        v44 = (int)v9;
        v45 = (int)((int)v10 + 4);
        v46 = (int)v11;
L_8c0e1b5a:;
        if (v46-- != 0) {
            v9 = (S_vv9 *)v44;
            v10 = (S_vv10 *)v45;
            v11 = (char *)v46;
            goto L_8c0e19b6;
        }
        v48 = (int)v41;
        v49 = (int)v7;
L_8c0e1b64:;
        if (v49 == 0) {
            v3 = (int)v48;
            v4 = (char *)v45;
            v5 = (char *)(v49 + -1);
            break;
        }
        v3 = (int)v48;
        v4 = (char *)v45;
        v5 = (char *)(v49 + -1);
    }
    return (int)(v3);
}
