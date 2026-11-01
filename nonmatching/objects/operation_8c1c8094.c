/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c8094
 * function: operation_8c1c8094
 * language: c
 * reference size: 1656 bytes
 * compiled size: 1780 bytes (+7.5%)
 * differing lines: 512 of 729 reference instruction lines
 * differing bytes: 1596
 * provenance: generator draft (mode uctern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +124 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
typedef struct Arg5 Arg5;
struct Object {
    unsigned char tag;
    char f01;
    char f02;
    char f03;
};
struct Arg2 {
    short f00;
    short f02;
    short f04;
};
struct S_c8c1c7658 {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    char unknowna[0x3];
    char f0d;
    char f0e;
    char f0f;
    char f10;
    char f11;
    char unknown12[0x1];
    unsigned char f13;
};
struct Arg3 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x10];
    int f1c;
};
struct Arg4 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
};
struct Arg5 {
    short f00;
    short f02;
};
struct Frame {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x4];
};
extern int lookup_low_id(int);
extern float operation_8c1c870c(void *, int);
extern S_c8c1c7658 *operation_8c1c7658(void *);
extern int operation_8c1c933c(void *);
extern int operation_8c1c9348(void *);
extern int operation_8c1c9354(void *);
extern void initialize_fields_8c207358(void *);
extern void call_8c1c8ce4(Object *, Frame *);
extern int call_8c18e768(int, int);
extern int operation_8c1587e4(int, char, char);
void operation_8c1c8094(Object *o, int a1, Arg2 *a2, Arg3 *a3, register Arg4 *a4, Arg5 *a5)
{
    Frame frame;
    int v2;
    unsigned char v7;
    short v8;
    int v9;
    int v10;
    int v11;
    int v15;
    unsigned char v16;
    short v17;
    int v18;
    S_c8c1c7658 *t9;
    unsigned char v51;
    int v52;
    int v56;
    int v60;
    int v63;
    int t1;
    S_c8c1c7658 *t2;
    float t3;
    S_c8c1c7658 *t4;
    int t5;
    S_c8c1c7658 *t6;
    int t7;
    short v28;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    v2 = (int)a1;
    if (a1 == 0) {
        t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t1 == 0) {
            return;
        }
        v2 = (int)t1;
    }
    if (a2 == 0 || a3 == 0) {
        return;
    }
    t3 = operation_8c1c870c((void *)o, v2);
    v7 = (unsigned char)o->tag;
    if (v7 != 0) {
        if (v7 == 1) {
            goto L_8c1c81a0;
        }
        if (v7 == 2) {
            goto L_8c1c8420;
        }
    } else {
        t2 = operation_8c1c7658((void *)o);
        if (t2 == 0) {
        } else {
            v8 = (short)a2->f00;
            v9 = (int)(int)((float)((unsigned short)t2->f08 + (short)((short)((unsigned char)o->f03) << 1)) * t3);
            a2->f00 = (int)((float)((unsigned short)t2->f06 + (short)((short)((unsigned char)o->f03) << 1)) * t3) + v8;
            a2->f02 += v9;
            a2->f04 += t2->f13 * 0xa;
            v15 = (int)0;
            goto L_8c1c8196;
            v10 = (int)0;
            do {
                v11 = (int)(v10 << 1);
                if (*(unsigned char *)((char *)((char *)o + 0x6) + (v11)) == 5) {
                    a2->f04 += *(char *)((char *)((char *)o + 0x7) + (v11)) * 0xa;
                }
                v10 = (int)(v10 + 1);
                v15 = (int)v10;
L_8c1c8196:;
                v10 = (int)v15;
            } while (v15 != 3);
            goto L_8c1c8486;
L_8c1c81a0:;
            v16 = (unsigned char)((unsigned char)o->f01);
            if (v16 != 1) {
                if (v16 == 2) {
                    goto L_8c1c8248;
                }
                if (v16 == 3) {
                    goto L_8c1c82d8;
                }
            } else {
                t4 = operation_8c1c7658((void *)o);
                if (t4 == 0) {
                } else {
                    t16 = operation_8c1c933c((void *)o);
                    t5 = operation_8c1c9348((void *)o);
                    v17 = (short)a3->f00;
                    v18 = (int)(short)((int)((float)t4->f04 * t3) + t16);
                    a3->f00 = t4->f06 + t5 + v17;
                    a3->f1c += v18;
                    a3->f02 += t4->f0d;
                    a3->f04 += t4->f0f;
                    a3->f06 += t4->f0e;
                    a3->f08 += t4->f11;
                    a3->f0a += t4->f10;
                    goto L_8c1c8486;
L_8c1c8248:;
                    t6 = operation_8c1c7658((void *)o);
                    if (t6 == 0) {
                    } else {
                        t8 = operation_8c1c933c((void *)o);
                        t7 = operation_8c1c9348((void *)o);
                        a3->f00 += (int)((float)t6->f06 * t3) + t7;
                        a3->f1c += (short)(t6->f04 + t8);
                        a3->f02 += t6->f0d;
                        a3->f04 += t6->f0f;
                        a3->f06 += t6->f0e;
                        a3->f08 += t6->f11;
                        a3->f0a += t6->f10;
                        goto L_8c1c8486;
L_8c1c82d8:;
                        t9 = operation_8c1c7658((void *)o);
                        if (t9 == 0) {
                        } else {
                            if (a4 == 0) {
                            } else {
                                v28 = (short)t9->f04;
                                t10 = operation_8c1c9354((void *)o);
                                switch (v28) {
                                case 0:
                                    a4->f00 += t10 + t9->f06;
                                    break;
                                case 1:
                                    a4->f02 += t10 + t9->f06;
                                    break;
                                case 2:
                                    a4->f0a += (t10 + t9->f06) * 0xa;
                                    break;
                                case 3:
                                    a4->f04 += t10 + t9->f06;
                                    break;
                                case 4:
                                    if (a5 == 0) {
                                        goto L_8c1c8486;
                                    }
                                    a5->f00 += t10 + t9->f06;
                                    break;
                                case 5:
                                    if (a5 == 0) {
                                        goto L_8c1c8486;
                                    }
                                    a5->f02 += t10 + t9->f06;
                                    break;
                                case 6:
                                    a4->f08 += t10 + t9->f06;
                                    break;
                                case 7:
                                    a4->f0c += t10 + t9->f06;
                                    break;
                                case 8:
                                    a4->f00 += t10 + t9->f06;
                                    a4->f02 += t10 + t9->f06;
                                    a4->f0a += t10 + t9->f06;
                                    a4->f04 += t10 + t9->f06;
                                    a4->f08 += t10 + t9->f06;
                                    a4->f0c += t10 + t9->f06;
                                    break;
                                case 9:
                                    a3->f02 += t10 + t9->f06;
                                    break;
                                case 10:
                                    a3->f04 += t10 + t9->f06;
                                    break;
                                case 11:
                                    a3->f06 += t10 + t9->f06;
                                    break;
                                case 12:
                                    a3->f08 += t10 + t9->f06;
                                    break;
                                case 13:
                                    a3->f0a += t10 + t9->f06;
                                    break;
                                case 14:
                                    a3->f02 += t10 + t9->f06;
                                    a3->f04 += t10 + t9->f06;
                                    a3->f06 += t10 + t9->f06;
                                    a3->f08 += t10 + t9->f06;
                                    a3->f0a += t10 + t9->f06;
                                    goto L_8c1c8486;
L_8c1c8420:;
                                    initialize_fields_8c207358((void *)(&frame));
                                    call_8c1c8ce4(o, (Frame *)((&frame)));
                                    if (a4 != 0) {
                                        t11 = call_8c18e768((int)((&frame)->f06), 0x64);
                                        a4->f00 += (short)t11 << 1;
                                        t12 = call_8c18e768((int)((&frame)->f08), 0x64);
                                        a4->f0a += (short)t12 * 0xa >> 1;
                                        t13 = call_8c18e768((int)((&frame)->f04), 0x64);
                                        a4->f08 += t13;
                                        t14 = call_8c18e768((int)((&frame)->f0a), 0x64);
                                        a4->f02 += (short)t14 << 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_8c1c8486:;
    v51 = (unsigned char)((unsigned char)o->tag);
    if ((unsigned char)v51 != 0 && (unsigned char)v51 != 1) {
        return;
    }
    t15 = operation_8c1587e4(v51, o->f01, o->f02);
    if (t15 == 0) {
        return;
    }
    v63 = (int)0;
    goto L_8c1c86ec;
    v52 = (int)0;
    do {
        switch ((unsigned char)*(unsigned char *)((char *)((char *)t15 + 0x0) + (v52))) {
        case 1:
            a2->f00 += *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            a2->f02 += *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 2:
            a2->f04 += *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1)) * 0xa;
            break;
        case 3:
            a3->f00 += *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 4:
            a3->f1c += *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 5:
            a4->f02 += *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 6:
            a4->f06 += *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 7:
            a4->f0c += *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 8:
            v56 = (int)(v52 << 1);
            a2->f00 += *(short *)((char *)((char *)t15 + 0x2) + (v56));
            a2->f02 += *(short *)((char *)((char *)t15 + 0x2) + (v56));
            a2->f04 += *(short *)((char *)((char *)t15 + 0x2) + (v56)) * 0xa;
            a3->f00 += *(short *)((char *)((char *)t15 + 0x2) + (v56));
            a3->f1c += *(short *)((char *)((char *)t15 + 0x2) + (v56));
            a4->f02 += *(short *)((char *)((char *)t15 + 0x2) + (v56));
            a4->f0c += *(short *)((char *)((char *)t15 + 0x2) + (v56));
            break;
        case 9:
            a2->f00 -= *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            a2->f02 -= *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 10:
            a2->f04 -= *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1)) * 0xa;
            break;
        case 11:
            a3->f00 -= *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 12:
            a3->f1c -= *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 13:
            a4->f02 -= *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 14:
            a4->f06 -= *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 15:
            a4->f0c -= *(short *)((char *)((char *)t15 + 0x2) + (v52 << 1));
            break;
        case 16:
            v60 = (int)(v52 << 1);
            a2->f00 -= *(short *)((char *)((char *)t15 + 0x2) + (v60));
            a2->f02 -= *(short *)((char *)((char *)t15 + 0x2) + (v60));
            a2->f04 -= *(short *)((char *)((char *)t15 + 0x2) + (v60)) * 0xa;
            a3->f00 -= *(short *)((char *)((char *)t15 + 0x2) + (v60));
            a3->f1c -= *(short *)((char *)((char *)t15 + 0x2) + (v60));
            a4->f02 -= *(short *)((char *)((char *)t15 + 0x2) + (v60));
            a4->f0c -= *(short *)((char *)((char *)t15 + 0x2) + (v60));
        }
        v52 = (int)(v52 + 1);
        v63 = (int)v52;
L_8c1c86ec:;
        v52 = (int)v63;
    } while (v63 != 1);
}
