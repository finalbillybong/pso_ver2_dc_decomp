typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_78_94 Arg0_78_94;
typedef struct Arg0_7c Arg0_7c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv33 S_vv33;
typedef struct S_vv52 S_vv52;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x10];
    float f4c;
    char unknown50[0x1a];
    short f6a;
    char unknown6c[0x4];
    short f70;
    char unknown72[0x6];
    Arg0_78 *f78;
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
    int f88;
    char unknown8c[0xa];
    short f96;
    char unknown98[0x48];
    Vector3 fe0;
};
struct S_vv1 {
    int f00;
    S_vv1_4 *f04;
    char unknown8[0x84];
    int f8c;
};
struct Arg0_78 {
    char unknown0[0x8c];
    int f8c;
    int f90;
    Arg0_78_94 *f94;
};
struct Arg0_7c {
    char unknown0[0x8c];
    int f8c;
    int f90;
    int f94;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_vv33 {
    char unknown0[0x90];
    int f90;
};
struct Arg0_78_94 {
    char unknown0[0x324];
    Vector3 f324;
};
struct S_vv52 {
    char unknown0[0x90];
    int f90;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern float squared_distance_xz(void *, void *);
extern int operation_8c10e7b0(void *, int, int);
extern void operation_8c110278(void *, int);
int operation_8c10cfbc(Object *o, int a1)
{
    S_vv1 *v1;
    S_c8c053d84 *t1;
    int v9;
    float v73;
    S_vv33 *v33;
    int v34;
    int v37;
    int v3;
    char *v32;
    int v39;
    S_vv52 *v52;
    int v53;
    int v56;
    int v38;
    float t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    v1 = (S_vv1 *)o->f7c;
    v3 = (int)0;
    if (((v1->f8c & 4)) != 0) {
        v3 = (int)(v3 | 1);
    }
    if (a1 != 0 && ((o->f78->f8c & 4)) != 0 && o->f88 == 0) {
        v3 = (int)(v3 | 2);
    }
    if (a1 != 0 && v1->f00 != 0 && (((unsigned char)v3 & 2)) != 0) {
        o->f6a += 1;
        if (o->f6a >= 0x1e) {
            o->f6a = 0;
            v9 = (int)1;
        } else {
            v9 = (int)0;
        }
        if (v9 != 0) {
            t1 = lookup_object_by_id((unsigned short)(v1->f04));
            o->f84 &= -0x8001;
            if (t1 != 0) {
                t2 = squared_distance_xz((void *)(&t1->f3c), (void *)(o->f7c->f94 + 0x3c));
                v73 = (float)o->f4c;
                if ((v73 * v73) > t2) {
                    *(Vector3 *)&o->fe0 = *(Vector3 *)&t1->f3c;
                    o->f84 |= 0x8080;
                    return 1;
                }
            }
        }
    }
    v32 = (char *)v3;
    switch ((unsigned char)v3) {
    case 3:
        o->f84 |= 0x200;
        v33 = (S_vv33 *)o->f7c;
        v34 = (int)v33->f90;
        if (((v34 & 2)) != 0) {
            t3 = operation_8c10e7b0((void *)v33, 2, 1);
            if (t3 == 0) {
                break;
            }
            if (((o->f7c->f90 & 0x20)) != 0) {
                o->f96 = 2;
                return 1;
            }
            if (((o->f38 & 0x40)) != 0) {
                break;
            }
            o->f96 = 2;
            return 1;
        }
        if (((v34 & 8)) != 0) {
            t4 = operation_8c10e7b0((void *)v33, 0, 1);
            if (t4 != 0) {
                if (((o->f7c->f90 & 0x20)) != 0) {
                    o->f96 = 0;
                    return 1;
                }
                if (((o->f38 & 0x40)) != 0) {
                    break;
                }
                o->f96 = 0;
                return 1;
            }
            if (o->f70 == 0) {
                operation_8c110278((void *)o, 0x14);
            }
            o->f70 += 1;
            v37 = (int)o->f70;
            if (!(v37 >= 0x5dc)) {
                break;
            }
            o->f70 = 0;
            break;
        }
        if (((v34 & 0x10)) != 0) {
            t5 = operation_8c10e7b0((void *)v33, 1, 1);
            if (t5 == 0) {
                break;
            }
            o->f96 = 1;
            return 1;
        }
        v38 = (int)2;
        v32 = (char *)v38;
    }
    switch ((unsigned char)v32) {
    case 2:
        if (((o->f7c->f8c & 2)) != 0) {
            return 0;
        }
        *(Vector3 *)&o->fe0 = *(Vector3 *)&o->f78->f94->f324;
        o->f84 |= 0x20;
        v39 = (int)o->f78->f90;
        if (((v39 & 2)) != 0) {
            t6 = operation_8c10e7b0((void *)(o->f7c), 2, 0);
            if (t6 == 0) {
                goto L_8c10d2f4;
            }
            if (((o->f7c->f90 & 0x20)) != 0) {
                o->f96 = 2;
                return 1;
            }
            if (((o->f38 & 0x40)) != 0) {
                goto L_8c10d2f4;
            }
            o->f96 = 2;
            return 1;
        }
        if (((v39 & 0x800)) != 0) {
            t7 = operation_8c10e7b0((void *)(o->f7c), 0, 0);
            if (t7 != 0) {
                if (((o->f7c->f90 & 0x20)) != 0) {
                    o->f96 = 0;
                    return 1;
                }
                if (((o->f38 & 0x40)) == 0) {
                    o->f96 = 0;
                    return 1;
                }
            }
        }
    }
L_8c10d2f4:;
    switch ((unsigned char)v32) {
    case 1:
        o->f84 |= 0x200;
        v52 = (S_vv52 *)o->f7c;
        v53 = (int)v52->f90;
        if (((v53 & 2)) != 0) {
            t8 = operation_8c10e7b0((void *)v52, 2, 1);
            if (t8 == 0) {
                goto L_8c10d420;
            }
            if (((o->f7c->f90 & 0x20)) != 0) {
                o->f96 = 2;
                return 1;
            }
            if (((o->f38 & 0x40)) != 0) {
                goto L_8c10d420;
            }
            o->f96 = 2;
            return 1;
        }
        if (((v53 & 8)) != 0) {
            t9 = operation_8c10e7b0((void *)v52, 0, 1);
            if (t9 != 0) {
                if (((o->f7c->f90 & 0x20)) != 0) {
                    o->f96 = 0;
                    return 1;
                }
                if (((o->f38 & 0x40)) != 0) {
                    goto L_8c10d420;
                }
                o->f96 = 0;
                return 1;
            }
            if (o->f70 == 0) {
                operation_8c110278((void *)o, 0x14);
            }
            o->f70 += 1;
            v56 = (int)o->f70;
            if (!(v56 >= 0x5dc)) {
                goto L_8c10d420;
            }
            o->f70 = 0;
        } else {
            if (((v53 & 0x10)) != 0) {
                t10 = operation_8c10e7b0((void *)v52, 1, 1);
                if (t10 != 0) {
                    o->f96 = 1;
                    return 1;
                }
            }
        }
    }
L_8c10d420:;
    return 0;
}
