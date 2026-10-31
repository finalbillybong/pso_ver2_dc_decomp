typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_3b8 S_c8c021ef8_3b8;
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_vv20_s430 S_vv20_s430;
typedef struct S_vv20_s440 S_vv20_s440;
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d8];
    int f310;
    char unknown314[0x1e];
    short f332;
    char unknown334[0x84];
    S_c8c021ef8_3b8 *f3b8;
};
typedef struct Sp { unsigned short f00; short f02; short f04; } Sp;
struct S_vv20_s430 {
    char unknown0[0x10];
    unsigned short f10;
};
struct Object {
    char unknown0[0x60];
    unsigned short f60;
    short f62;
    short f64;
};
struct S_vv20_s440 {
    char unknown0[0x2];
    short f02;
    short f04;
};
struct S_c8c021ef8_3b8 {
    char unknown0[0x440];
    unsigned short f440;
};
struct S_c8c0adc1c {
    char unknown0[0x10];
    int f10;
};
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c1accac(void *, short, short);
extern int operation_8c1692c0(void);
extern int operation_8c1eacf4(void *);
extern int call_8c247730(void *, short);
extern int player_flag9_8c026508(void);
extern int current_mode_active(void);
extern S_c8c0adc1c *call_8c0adc1c(int, int);
int operation_8c0dac90(Object *o)
{
    char *v20;
    Sp *p;
    int v8;
    int v3;
    short v19;
    int v12;
    S_c8c021ef8 *t1;
    int v14;
    int v16;
    short v15;
    int v18;
    int v17;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    S_c8c0adc1c *t9;
    int t10;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return 1;
    }
    v20 = (char *)t1->f3b8;
    if (v20 == 0) {
        return 1;
    }
    p = (Sp *)((char *)((char *)v20 + 0x430) + 0x10);
    v3 = v8 = 0;
    if (p->f00 == o->f60 && p->f02 == o->f62) {
        v3 = 1;
    }
    if (v3 != 0 && p->f04 == o->f64) {
        v8 = 1;
    }
    if (v8 == 0) {
        return 1;
    }
    v19 = (short)o->f62;
    if (v19 != 1) {
        t2 = call_8c1accac((void *)(((char *)t1 + 0x4c0)), v19, o->f64);
        if (t2 == -1) {
            t1->f3b8->f440 = 0xffff;
            return 1;
        }
    }
    t3 = operation_8c1692c0();
    if (t3 != 0) {
        return 2;
    }
    switch (o->f62) {
    case 0:
        return 1;
    case 1:
        return 0;
    case 2:
        t8 = operation_8c1eacf4((void *)t1);
        v12 = (int)(t8 == 0);
        return (int)(v12);
    case 3:
        t4 = call_8c247730((void *)(((char *)t1 + 0x3bc)), o->f64);
        if ((char)t4 == -1) {
            return 1;
        }
        t5 = player_flag9_8c026508();
        if (t5 == 0) {
            if (((t1->f34 & 0x20006)) != 0) {
                return 1;
            }
        }
        v14 = (int)(((t1->f310 & 0x548000)) != 0);
        if (v14 != 0) {
            return 1;
        }
        t6 = current_mode_active();
        if (t6 == 0) {
            return 1;
        }
        v15 = (short)o->f64;
        t7 = call_8c247730((void *)(((char *)t1 + 0x3bc)), (short)v15);
        t9 = call_8c0adc1c((int)((short)v15), (int)((char)t7));
        v16 = (int)(0 > (t1->f332 - t9->f10));
        return (int)(v16);
    case 4:
        return 0;
    case 6:
        if (*(char *)((char *)((char *)t1 + 0x4a0) + (o->f64)) != 0xff) {
            return 1;
        }
        v17 = (int)(((t1->f310 & 0x548000)) != 0);
        if (v17 != 0) {
            return 1;
        }
        t10 = current_mode_active();
        v18 = (int)(t10 == 0);
        return (int)(v18);
    case 7:
        return 0;
    case 5:
    default:
        return 0;
    }
}
