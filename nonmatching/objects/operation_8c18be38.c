/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18be38
 * function: operation_8c18be38
 * language: c
 * reference size: 1264 bytes
 * compiled size: 1264 bytes (+0.0%)
 * differing lines: 4 of 444 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c18c96c S_c8c18c96c;
typedef struct S_c8c18c96c_6c S_c8c18c96c_6c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_70 Arg0_70;
typedef struct Arg0_74 Arg0_74;
typedef struct Arg0_78 Arg0_78;
typedef struct S_vv26 S_vv26;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_6c S_vv7_6c;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x2e];
    short f52;
    short f54;
    char unknown56[0x1a];
    Arg0_70 *f70;
    Arg0_74 *f74;
    Arg0_78 *f78;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x62];
    short f68;
    short f6a;
    S_vv7_6c *f6c;
};
struct S_vv7_6c {
    char unknown0[0x19];
    unsigned char f19;
};
struct S_c8c18c96c {
    char unknown0[0x6a];
    short f6a;
    S_c8c18c96c_6c *f6c;
};
struct S_vv26 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c41cba0[];
extern int replicate_nibble_wrapper_2_8c01d8a8(void *, int);
extern void play_se_8c05fbf8(int, int, int, int);
extern void operation_8c18cb7c(Object *);
extern void request_resource_release(void *);
extern S_c8c18c96c *operation_8c18c96c(Object *, short, short);
extern void operation_8c18cd8c(void *, short);
extern void operation_8c18cdb4(void *, short);
extern void set_fields_8c18cddc(void *);
extern void operation_8c19a044(void *, int);
extern void operation_8c0dc610(void *, float);
extern void operation_8c18cb50(void *);
extern int operation_8c2097a8(int);
extern void operation_8c18c904(void *, void *, int);
extern void operation_8c18caac(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void initialize_object_8c1902c8(void *, void *);
extern void TWindowSubEquip_ctor_8c1d4790(void *, int);
extern void TWindowSubItem_ctor_8c1a2db4(void *, int);
extern void TWindowSubMag_ctor_8c190704(void *, int);
extern void TWindowSubAreaMap_ctor_8c1d576c(void *, int);
extern void TWindowSubQuestBoard_ctor_8c21e40c(void *, int);
extern void TWindowSubTechnique_ctor_8c1a8750(void *, int);
extern void TWindowSubSymbolChat_ctor_8c1d03c8(void *, int);
extern void TWindowSubComCard_ctor_8c1d24bc(void *, int);
extern void TWindowSubLog_ctor_8c1d9ed4(void *, int);
extern void operation_8c1a92c4(void *, int);
extern void TWindowSubShortMail_ctor_8c21696c(void *, int);
extern void operation_8c21a07c(void *, int);
extern void TWindowSubGameEnd_ctor_8c1986ec(void *, int);
void operation_8c18be38(Object *o)
{
    S_vv7 *v7;
    int v8;
    int v11;
    int v12;
    int v17;
    short v10;
    short v9;
    int v21;
    S_vv26 *v26;
    short v30;
    int t1;
    S_c8c18c96c *t2;
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
    if (((o->f20 & 1)) == 0) {
    } else {
        switch (o->f20 & 4) {
        case 0:
            if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
                t1 = replicate_nibble_wrapper_2_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
                if (t1 == 0) {
                    goto L_8c18c30c;
                }
            }
            v7 = (S_vv7 *)*(Arg0_58 **)((char *)((char *)o + 0x58) + (o->f54 << 2));
            v8 = !(v7->f6c->f19 & 1);
            if (v8 == 0) {
                play_se_8c05fbf8(0x50006, 0, 0, 0);
            } else {
                play_se_8c05fbf8(0x50001, 0, 0, 0);
                v10 = (short)v7->f68;
                v9 = (short)v7->f6a;
                v7->f04 |= 0x10;
                operation_8c18cb7c(o);
                v17 = (int)5;
                goto L_8c18bf1e;
                v11 = (int)5;
                do {
                    v12 = (int)(v11 << 2);
                    if (*(int *)((char *)((char *)o + 0x58) + (v12)) != 0) {
                        request_resource_release((void *)(*(Arg0_58 **)((char *)((char *)o + 0x58) + (v12))));
                        *(int *)((char *)((char *)o + 0x58) + (v12)) = 0;
                    }
                    v17 = (int)(v11 + -1);
L_8c18bf1e:;
                    v11 = (int)v17;
                } while (v17 >= o->f52);
                t2 = operation_8c18c96c(o, v10, v9);
                operation_8c18cd8c((void *)t2, o->f54);
                operation_8c18cdb4((void *)t2, o->f52);
                set_fields_8c18cddc((void *)t2);
                operation_8c19a044((void *)(t2->f6c), 2);
                operation_8c0dc610((void *)t2, 0.0f);
                *(S_c8c18c96c **)((char *)((char *)o + 0x58) + (o->f52 << 2)) = t2;
                v21 = (int)*(int *)((char *)((char *)o->f78 + 0x4) + ((short)v10 << 3));
                if (v21 != 0) {
                    o->f78 = (Arg0_78 *)v21;
                    o->f52 += 1;
                    operation_8c18cb50((void *)o);
                    t3 = operation_8c2097a8(4);
                    if (t3 != 0) {
                        o->f54 = o->f52;
                    }
                    operation_8c18c904((void *)o, (void *)(o->f78), (int)(o->f52));
                    operation_8c18caac((void *)o);
                } else {
                    if (o->f70 != 0) {
                        request_resource_release((void *)(o->f70));
                        o->f70 = (Arg0_70 *)0;
                    }
                    if (o->f74 != 0) {
                        v26 = (S_vv26 *)o->f74;
                        v26->f04 |= 1;
                        o->f74 = (Arg0_74 *)0;
                    }
                    v30 = (short)t2->f6a;
                    o->f20 |= 4;
                    switch (v30) {
                    case 0:
                        t4 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x34);
                        if (t4 != 0) {
                            initialize_object_8c1902c8((void *)t4, (void *)o);
                        }
                        o->f74 = (Arg0_74 *)t4;
                        break;
                    case 6:
                        t5 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x38);
                        if (t5 != 0) {
                            TWindowSubEquip_ctor_8c1d4790((void *)t5, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t5;
                        break;
                    case 7:
                        t6 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x40);
                        if (t6 != 0) {
                            TWindowSubItem_ctor_8c1a2db4((void *)t6, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t6;
                        break;
                    case 18:
                        t7 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x4c);
                        if (t7 != 0) {
                            TWindowSubMag_ctor_8c190704((void *)t7, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t7;
                        break;
                    case 8:
                    case 20:
                        t8 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x24);
                        if (t8 != 0) {
                            TWindowSubAreaMap_ctor_8c1d576c((void *)t8, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t8;
                        break;
                    case 10:
                    case 21:
                        t9 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
                        if (t9 != 0) {
                            TWindowSubQuestBoard_ctor_8c21e40c((void *)t9, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t9;
                        break;
                    case 2:
                    case 19:
                        t10 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x3c);
                        if (t10 != 0) {
                            TWindowSubTechnique_ctor_8c1a8750((void *)t10, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t10;
                        break;
                    case 12:
                        t11 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
                        if (t11 != 0) {
                            TWindowSubSymbolChat_ctor_8c1d03c8((void *)t11, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t11;
                        break;
                    case 9:
                        t12 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x84);
                        if (t12 != 0) {
                            TWindowSubComCard_ctor_8c1d24bc((void *)t12, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t12;
                        break;
                    case 14:
                        t13 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
                        if (t13 != 0) {
                            TWindowSubLog_ctor_8c1d9ed4((void *)t13, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t13;
                        break;
                    case 4:
                        t14 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
                        if (t14 != 0) {
                            operation_8c1a92c4((void *)t14, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t14;
                        break;
                    case 13:
                        t15 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x58);
                        if (t15 != 0) {
                            TWindowSubShortMail_ctor_8c21696c((void *)t15, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t15;
                        break;
                    case 11:
                        t16 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x80);
                        if (t16 != 0) {
                            operation_8c21a07c((void *)t16, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t16;
                        break;
                    case 5:
                    case 17:
                        t17 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
                        if (t17 != 0) {
                            TWindowSubGameEnd_ctor_8c1986ec((void *)t17, (int)o);
                        }
                        o->f74 = (Arg0_74 *)t17;
                    case 1:
                    case 3:
                    case 15:
                    case 16:
                        break;
                    }
                }
            }
        }
    }
L_8c18c30c:;
}
