typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv20 S_vv20;
typedef struct S_vv20_98 S_vv20_98;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1b];
    unsigned char f21;
    short f22;
    char unknown24[0x8];
    Arg0_2c *f2c;
    Arg0_30 *f30;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Arg0_30 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x18];
    volatile unsigned short f80;
};
struct S_c8c0744dc {
    char unknown0[0xec];
    int fec;
};
struct Arg0_2c {
    char unknown0[0x80];
    volatile unsigned short f80;
    char unknown82[0x6];
    short f88;
    short f8a;
};
struct S_vv20 {
    char unknown0[0x98];
    S_vv20_98 *f98;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c41cba0 g_8c41cba0;
extern void operation_8c2355a0(void *);
extern int operation_8c1d50b4(int, int);
extern void operation_8c1d55b0(int);
extern int lookup_low_id(int);
extern int operation_8c0244c4(void *);
extern int operation_8c1cdc80(void *);
extern void operation_8c1d4ba4(int, int);
extern void operation_8c1d55e4(int);
extern void operation_8c2356f0(int);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern int operation_8c0240f0(void *, int);
extern void operation_8c02330c(void *, int, int);
extern void operation_8c1d5618(void *);
extern int operation_8c256a90(void);
extern void operation_8c03c1b8(void *, int);
extern int operation_8c0de37c(void);
extern void operation_8c0de3b4(void);
extern void operation_8c023628(void *, int);
extern void call_8c1a8ec0(void *, void *);
extern int call_8c2354b8(Object *, void *, void *);
extern void operation_8c19a044(void *, int);
extern int operation_8c1571f4(void *);
extern void operation_8c1ecf70(int);
extern int operation_8c1a8ecc(void *, void *);
extern void operation_8c23551c(int, void *, void *);
extern void operation_8c235790(int, int, int);
extern int operation_8c1ecee4(int);
extern int operation_8c1a8e4c(int);
void operation_8c234ed8(Object *o)
{
    int v31;
    int v35;
    int v32;
    int v36;
    int v33;
    int v37;
    S_vv20 *v20;
    short v24;
    int v34;
    int v38;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t15;
    S_c8c0744dc *t11;
    int t12;
    int t13;
    int t14;
    int t17;
    int t16;
    int t10;
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
    if (o->f22 > 2 && (((&g_8c41cba0)->f28 & 0x200)) != 0) {
        o->f04 |= 1;
        return;
    }
    operation_8c2355a0((void *)o);
    switch ((unsigned char)o->f21) {
    case 0:
        if (o->f30 == 0) {
            t1 = operation_8c1d50b4((int)((void *)0x8c2e1e30), (int)((void *)0x8c2e1e38));
            o->f30 = (Arg0_30 *)t1;
            o->f30->f80 = (o->f30->f80 & 0xffff) | 0x10;
            operation_8c1d55b0((int)(o->f30));
            o->f30->f64 = 0x1000000;
        }
        o->f21 = 1;
    case 1:
        v31 = (int)o->f30->f80;
        v35 = (int)(v31 & 0xffff);
        if (((v35 & 4)) != 0) {
            o->f04 |= 1;
            return;
        }
        if (((v35 & 2)) == 0) {
            break;
        }
        o->f21 = 2;
        break;
    case 2:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f04 |= 1;
            return;
        }
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 == 0) {
            return;
        }
        t3 = operation_8c0244c4((void *)t2);
        if (t3 == 0) {
            break;
        }
        t4 = operation_8c1cdc80((void *)(o->f30));
        operation_8c1d4ba4(6, t4);
        o->f04 |= 1;
        return;
    case 3:
        if (o->f30 == 0) {
            t5 = operation_8c1d50b4((int)((void *)0x8c2e1e30), (int)((void *)0x8c2e1e38));
            o->f30 = (Arg0_30 *)t5;
            o->f30->f80 = (o->f30->f80 & 0xffff) | 0x10;
            operation_8c1d55e4((int)(o->f30));
            o->f30->f64 = 0x1000000;
        }
        o->f21 = 4;
    case 4:
        t6 = operation_8c1cdc80((void *)(o->f30));
        operation_8c2356f0(t6);
        v32 = (int)o->f30->f80;
        v36 = (int)(v32 & 0xffff);
        if (((v36 & 4)) != 0) {
            o->f04 |= 1;
            return;
        }
        if (((v36 & 2)) == 0) {
            break;
        }
        o->f21 = 5;
        break;
    case 5:
        t7 = operation_8c1cdc80((void *)(o->f30));
        operation_8c2356f0(t7);
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f04 |= 1;
            return;
        }
        t8 = lookup_low_id((int)g_8c418248);
        if (t8 == 0) {
            return;
        }
        t9 = operation_8c0244c4((void *)t8);
        if (t9 == 0) {
            break;
        }
        t10 = operation_8c1cdc80((void *)(o->f30));
        t11 = find_record_8c0744dc(t10);
        if (t11 == 0) {
            return;
        }
        t12 = operation_8c0240f0((void *)t8, t10);
        if (t12 != 0) {
            if (((t11->fec & 0x10)) != 0) {
                operation_8c02330c((void *)t8, t10, 1);
            }
        }
        o->f04 |= 1;
        return;
    case 6:
        if (o->f30 == 0) {
            t13 = operation_8c1d50b4((int)((void *)0x8c2e1e30), (int)((void *)0x8c2e1e38));
            o->f30 = (Arg0_30 *)t13;
            o->f30->f80 = (o->f30->f80 & 0xffff) | 0x10;
            operation_8c1d5618((void *)(o->f30));
            o->f30->f64 = 0x1000000;
        }
        o->f21 = 7;
    case 7:
        t14 = operation_8c1cdc80((void *)(o->f30));
        operation_8c2356f0(t14);
        v33 = (int)o->f30->f80;
        v37 = (int)(v33 & 0xffff);
        if (((v37 & 4)) != 0) {
            o->f04 |= 1;
            return;
        }
        if (((v37 & 2)) == 0) {
            break;
        }
        o->f21 = 8;
        break;
    case 8:
        if ((((&g_8c41cba0)->f28 & 2)) != 0) {
            o->f04 |= 1;
            return;
        }
        t15 = lookup_low_id((int)g_8c418248);
        if (t15 == 0) {
            return;
        }
        t16 = operation_8c0244c4((void *)t15);
        if (t16 == 0) {
            return;
        }
        t17 = operation_8c1cdc80((void *)(o->f30));
        if ((t17 & 0xf) == 4) {
            t18 = operation_8c256a90();
            if (t18 == 0) {
                break;
            }
            operation_8c03c1b8((void *)(t15 + 0x750), 1);
            o->f04 |= 1;
            return;
        }
        t19 = operation_8c0de37c();
        if (t19 == 0) {
        } else {
            operation_8c0de3b4();
            operation_8c023628((void *)t15, (int)(t17 & 0xf));
            o->f04 |= 1;
        }
        return;
    case 9:
        if (o->f2c == 0) {
            call_8c1a8ec0((void *)(((char *)o + 0x24)), (void *)(((char *)o + 0x28)));
            t20 = call_8c2354b8(o, (void *)((void *)0x8c2e1e30), (void *)((void *)0x8c2e1e38));
            o->f2c = (Arg0_2c *)t20;
        }
        v20 = (S_vv20 *)o->f2c;
        o->f2c->f80 = (o->f2c->f80 & 0xffff) & -3;
        if (v20->f98 != 0) {
            operation_8c19a044((void *)(v20->f98), 1);
        }
        o->f21 = 0xa;
    case 10:
        t21 = operation_8c1571f4((void *)(o->f2c));
        operation_8c1ecf70(t21);
        t22 = operation_8c1a8ecc((void *)(((char *)o + 0x24)), (void *)(((char *)o + 0x28)));
        if (t22 != 0) {
            operation_8c23551c((int)o, (void *)(o->f2c), (void *)((void *)0x8c2e1e38));
        }
        if ((((&g_8c41cba0)->f28 & 0x400)) != 0) {
            v24 = (short)-1;
            if (o->f2c->f8a == v24) {
                o->f2c->f8a = o->f2c->f88;
            } else {
                operation_8c235790((int)o, (int)(o->f2c->f8a), (int)(o->f2c->f88));
                o->f2c->f8a = -1;
                operation_8c23551c((int)o, (void *)(o->f2c), (void *)((void *)0x8c2e1e38));
            }
        }
        v34 = (int)o->f2c->f80;
        v38 = (int)(v34 & 0xffff);
        if (((v38 & 4)) != 0) {
            o->f04 |= 1;
            return;
        }
        if (((v38 & 2)) == 0) {
            break;
        }
        o->f21 = 0xb;
        break;
    case 11:
        t23 = operation_8c1571f4((void *)(o->f2c));
        operation_8c1ecf70(t23);
        if ((((&g_8c41cba0)->f28 & 2)) == 0) {
            t24 = operation_8c1571f4((void *)(o->f2c));
            t25 = operation_8c1ecee4(t24);
            if (t25 == 0) {
                goto L_8c23545c;
            }
        }
        o->f04 |= 1;
        return;
L_8c23545c:;
        t26 = operation_8c1571f4((void *)(o->f2c));
        t27 = operation_8c1a8e4c(t26);
        if (t27 != 0) {
            break;
        }
        operation_8c23551c((int)o, (void *)(o->f2c), (void *)((void *)0x8c2e1e38));
        o->f21 = 9;
        return;
    }
    o->f22 += 1;
    if (!(o->f22 >= 0)) {
        o->f22 = 2;
    }
}
