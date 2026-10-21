typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2ca];
    short f302;
    char unknown304[0x2e];
    short f332;
    char unknown334[0x98];
    int f3cc;
    char unknown3d0[0x8c];
    int f45c;
};
struct S_c8c0adc1c {
    char unknown0[0x10];
    int f10;
};
extern int g_8c510ba0;
extern int current_mode_active(void);
extern int operation_8c026434(void *);
extern int call_8c247730(void *, int);
extern S_c8c0adc1c *call_8c0adc1c(int, int);
extern int operation_8c029430(void);
extern int operation_8c02b2a4(void);
int operation_8c1ac9a4(Object *o, int a1, int a2)
{
    int v8;
    unsigned char v18;
    int v20;
    int v21;
    int v24;
    int v27;
    int t1;
    int t2;
    int t3;
    int t4;
    S_c8c0adc1c *t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    switch ((unsigned int)((unsigned char)a1)) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        if (((o->f34 & 0x20006)) == 0) {
            t1 = current_mode_active();
            if (t1 != 0) {
                t2 = operation_8c026434((void *)o);
                if (t2 != 0) {
                    goto L_8c1aca28;
                }
            }
        }
        return 0;
L_8c1aca28:;
        if ((unsigned char)a2 == 2) {
            if (o->f302 == 0) {
                return 0;
            }
        }
        return 1;
    case 3:
        v8 = (int)(((o->f3cc & 2)) != 0);
        if (v8 == 0) {
            if (((o->f34 & 0x20006)) == 0) {
                t3 = operation_8c026434((void *)o);
                if (t3 != 0) {
                    goto L_8c1aca78;
                }
            }
        }
        return 0;
L_8c1aca78:;
        t4 = call_8c247730((void *)(((char *)o + 0x3bc)), (int)((unsigned char)a2));
        a2 = (unsigned char)a2;
        t5 = call_8c0adc1c(a2, (int)((char)t4));
        if (!((o->f332 - t5->f10) >= 0)) {
            return 0;
        }
        switch (a2) {
        case 17:
            v20 = (int)(g_8c510ba0 != 0);
            if (v20 == 0) {
                break;
            }
            return 0;
        case 14:
            t6 = operation_8c029430();
            if (t6 == 0) {
                return 0;
            }
            t7 = operation_8c02b2a4();
            if (t7 == 0) {
                v21 = (int)(g_8c510ba0 != 0);
                if (v21 == 0) {
                    break;
                }
            }
            return 0;
        }
        return 1;
    case 4:
        t8 = operation_8c026434((void *)o);
        if (t8 == 0) {
            return 0;
        }
        switch ((unsigned char)a2) {
        case 9:
            v24 = (int)(g_8c510ba0 != 0);
            if (v24 == 0) {
                goto L_8c1acb74;
            }
            return 0;
        case 11:
            t9 = operation_8c029430();
            if (t9 == 0) {
                return 0;
            }
            t10 = operation_8c02b2a4();
            if (t10 != 0) {
                return 0;
            }
        }
L_8c1acb74:;
        return 1;
    case 6:
        v27 = (int)(((o->f45c & 1)) == 0);
        if (v27 != 0) {
            if (((o->f34 & 0x20006)) == 0) {
                t11 = operation_8c026434((void *)o);
                if (t11 != 0) {
                    goto L_8c1acbac;
                }
            }
        }
        return 0;
L_8c1acbac:;
        return 1;
    case 7:
        return 1;
    case 5:
    default:
        return 0;
    }
}
