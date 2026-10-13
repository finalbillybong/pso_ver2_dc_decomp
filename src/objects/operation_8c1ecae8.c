typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d8];
    int f310;
    char unknown314[0x1e];
    short f332;
    char unknown334[0x98];
    int f3cc;
};
struct S_c8c0adc1c {
    char unknown0[0x10];
    int f10;
};
extern int player_flag9_8c026508(void);
extern int operation_8c026434(void *);
extern int operation_8c029430(void);
extern int call_8c247730(void *, int);
extern int object_ready(void *);
extern S_c8c0adc1c *call_8c0adc1c(int, int);
int operation_8c1ecae8(Object *o, int a1)
{
    int v1;
    int v42;
    int v43;
    int v64;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    S_c8c0adc1c *t7;
    v1 = (int)(o->f20 == *(int *)0x8c418248);
    if (v1 != 0) {
        t1 = player_flag9_8c026508();
        if (t1 == 0) {
            t2 = operation_8c026434((void *)o);
            if (t2 != 0) {
                goto L_8c1ecb24;
            }
        }
        return 0;
    }
L_8c1ecb24:;
    v42 = (int)(((o->f3cc & 2)) != 0);
    if (v42 == 0 && ((o->f34 & 0x20006)) == 0 && ((o->f34 & 0x2000000)) == 0) {
        v43 = (int)(((o->f310 & 0x11e)) != 0);
        if (v43 != 0) {
            if (a1 == 0xe) {
                t3 = operation_8c029430();
                if (t3 == 0) {
                    goto L_8c1ecb9a;
                }
            }
            if (a1 == 0x11) {
                v64 = (int)(*(int *)0x8c510ba0 != 0);
                if (v64 != 0) {
                    goto L_8c1ecb9a;
                }
            }
            t4 = call_8c247730((void *)(((char *)o + 0x3bc)), a1);
            if ((char)t4 != -1) {
                t5 = object_ready((void *)o);
                if (t5 != 0) {
                    goto L_8c1ecb9e;
                }
            }
        }
    }
L_8c1ecb9a:;
    return 0;
L_8c1ecb9e:;
    t6 = call_8c247730((void *)(((char *)o + 0x3bc)), a1);
    t7 = call_8c0adc1c(a1, (int)((char)t6));
    if (!((o->f332 - t7->f10) >= 0)) {
        return 0;
    }
    return 1;
}
