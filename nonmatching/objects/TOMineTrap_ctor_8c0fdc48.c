/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fdc48
 * function: TOMineTrap_ctor_8c0fdc48
 * language: c
 * reference size: 1352 bytes
 * compiled size: 1352 bytes (+0.0%)
 * differing lines: 410 of 473 reference instruction lines
 * differing bytes: 741
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TOMineTrap.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4706a0 S_g8c4706a0;
typedef struct S_g8c4706a0_42c S_g8c4706a0_42c;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv5 S_vv5;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    short f2c;
    char unknown2e[0x4];
    short f32;
    int f34;
    int f38;
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x28];
    int f88;
    int f8c;
    char unknown90[0xc8];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    char unknown30c[0x48];
    int f354;
    char unknown358[0x4];
    float f35c;
    float f360;
    int f364;
    float f368;
    unsigned short f36c;
    char unknown36e[0x12];
    int f380;
    int f384;
    int f388;
    char unknown38c[0x4];
    unsigned short f390;
    short f392;
    int f394;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
    char unknown22[0xa];
    short f2c;
    char unknown2e[0x4];
    short f32;
    char unknown34[0x8];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
struct S_vv5 {
    char unknown0[0x37c];
    int f37c;
};
struct S_g8c4706a0 {
    char unknown0[0x42c];
    S_g8c4706a0_42c *f42c;
};
struct S_g8c4706a0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
    char unknown10[0x8];
    int f18;
    int f1c;
    char unknown20[0x28];
    int f48;
    int f4c;
    char unknown50[0x8];
    int f58;
    int f5c;
};
extern int g_8c2e2ad8;
extern int g_8c30ab08;
extern float g_8c30ab0c;
extern int g_8c30ab10;
extern int g_8c44be04;
extern S_g8c44be98 *g_8c44be98;
extern int g_8c4703c0;
extern S_g8c4706a0 *g_8c4706a0;
extern int g_8c4706a4;
extern void TOMine_ctor_8c0fcd7c(Object *, void *);
extern int lookup_low_id(int);
extern int get_current_area_8c032b10(void);
extern int operation_2391f4(void *);
extern void update_object_center(void *);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
Object *TOMineTrap_ctor_8c0fdc48(Object *o, Arg1 *a1, int a2, int a3)
{
    Object **home = &o;
    int v4;
    S_vv5 *v5;
    int v11;
    int v10;
    int t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    TOMine_ctor_8c0fcd7c(o, g_8c44be98);
    o->dispatch = (void *)0x8c2690a0;
    o->tag = (int)(g_8c30ab10);
    o->size = 0x398;
    o->f394 = 0;
    if (a1 != 0) {
        o->f390 = a1->f20;
    } else {
        o->f390 = 0xffff;
    }
    v5 = (S_vv5 *)0;
    v4 = (int)0xffff;
    if ((o->f390 & 0xffff) != (unsigned short)v4 && (unsigned int)0x1000 > (unsigned int)(o->f390 & 0xffff)) {
        v5 = (S_vv5 *)lookup_low_id((int)(o->f390 & 0xffff));
    }
    t1 = get_current_area_8c032b10();
    if (g_8c2e2ad8 != 1) {
    } else {
        if (a1 == 0) {
        } else {
            if (v5 == 0) {
            } else {
                if (g_8c44be04 != v5->f37c) {
                } else {
                    if (t1 == 0) {
                    } else {
                        if (t1 == 0xf) {
                        } else {
                            if (t1 == 0xb) {
                            } else {
                                if (t1 == 0xc) {
                                } else {
                                    if (t1 == 0xd) {
                                    } else {
                                        if (t1 == 0xe) {
                                        } else {
                                            v10 = (int)a2;
                                            if ((short)a2 != 0) {
                                                if ((short)a2 == 1) {
                                                    goto L_8c0fde74;
                                                }
                                                if ((short)a2 == 2) {
                                                    goto L_8c0fde90;
                                                }
                                                if ((short)a2 == 3) {
                                                    goto L_8c0fdeac;
                                                }
                                                v10 = (int)0;
                                            }
                                            o->f364 = 1;
                                            t2 = operation_2391f4((void *)((void *)0x8c41ce5c));
                                            if ((unsigned char)t2 == 1) {
                                                o->f368 = g_8c30ab0c;
                                            } else {
                                                t3 = get_current_area_8c032b10();
                                                v11 = (int)/* ? clobbered */ 0;
                                                switch (t3) {
                                                case 1:
                                                case 2:
                                                    v11 = (int)1.0f;
                                                    break;
                                                case 3:
                                                case 4:
                                                case 5:
                                                    v11 = (int)1.15f;
                                                    break;
                                                case 6:
                                                case 7:
                                                    v11 = (int)1.3f;
                                                    break;
                                                case 8:
                                                case 9:
                                                case 10:
                                                    v11 = (int)1.45f;
                                                    break;
                                                default:
                                                    v11 = (int)0.0f;
                                                    break;
                                                }
                                                o->f368 = ((float)g_8c4703c0 * 2.0f + 1.0f) * (v11 * 700.0f);
                                            }
                                            if (0.0f > o->f368) {
                                                o->f368 = 0.0f;
                                                goto L_8c0fdebe;
L_8c0fde74:;
                                                o->f364 = 2;
                                                o->f368 = 0.0f;
                                                v10 = (int)a2;
                                                goto L_8c0fdebe;
L_8c0fde90:;
                                                o->f364 = 0x11;
                                                o->f368 = 0.0f;
                                                v10 = (int)a2;
                                                goto L_8c0fdebe;
L_8c0fdeac:;
                                                o->f364 = 0x12;
                                                o->f368 = 0.0f;
                                                v10 = (int)a2;
                                            }
L_8c0fdebe:;
                                            o->f392 = a3 + v10 * 0x14 + o->f390 * 0x50;
                                            *(Vector3 *)&o->f3c = *(Vector3 *)&a1->f3c;
                                            *(Vector3 *)&o->f54 = *(Vector3 *)&a1->f3c;
                                            *(Vector3 *)&o->f164 = *(Vector3 *)&o->f3c;
                                            *(Vector3 *)&o->f158 = *(Vector3 *)&o->f3c;
                                            *(Vector3 *)&o->f164 = *(Vector3 *)&o->f3c;
                                            *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
                                            update_object_center((void *)o);
                                            o->f380 = (int)(a1->f64);
                                            o->f32 = a1->f32;
                                            o->f2c = a1->f2c;
                                            switch (o->f364) {
                                            case 6:
                                            case 7:
                                            case 8:
                                            case 9:
                                            case 10:
                                            case 11:
                                            case 12:
                                            case 13:
                                            case 14:
                                            default:
                                                o->f364 = 1;
                                            case 0:
                                            case 1:
                                            case 2:
                                            case 3:
                                            case 4:
                                            case 5:
                                            case 19:
                                                o->f38 = (int)(g_8c4706a0->f42c->f48);
                                                o->f28 = (int)(g_8c4706a0->f42c->f4c);
                                                o->f384 = (int)(g_8c4706a0->f42c->f18);
                                                o->f388 = (int)(g_8c4706a0->f42c->f1c);
                                                break;
                                            case 15:
                                            case 16:
                                            case 17:
                                            case 18:
                                                o->f38 = (int)(g_8c4706a0->f42c->f58);
                                                o->f28 = (int)(g_8c4706a0->f42c->f5c);
                                                o->f384 = (int)(g_8c4706a0->f42c->f08);
                                                o->f388 = (int)(g_8c4706a0->f42c->f0c);
                                            }
                                            o->f30a = 0;
                                            o->f35c = 50.0f;
                                            o->f360 = 50.0f;
                                            o->f88 = 0x96;
                                            o->f8c = 0x1e;
                                            if (g_8c4703c0 == 3) {
                                                t4 = operation_2391f4((void *)((void *)0x8c41ce5c));
                                                if ((unsigned char)t4 == 0) {
                                                    o->f88 = 0x3c;
                                                    o->f360 = 80.0f;
                                                    g_8c4706a4 = 0;
                                                    g_8c30ab08 = 1;
                                                }
                                            }
                                            o->f354 = 0;
                                            o->f36c = 0xffff;
                                            o->f34 |= 0x60040000;
                                            copy_actor_records((void *)o, (void *)((void *)0x8c30aad8), 1);
                                            attach_and_insert_object((void *)o);
                                            goto L_8c0fe180;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    o->f04 |= 1;
L_8c0fe180:;
    return o;
}
