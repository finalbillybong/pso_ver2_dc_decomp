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
extern int operation_8c029430(int);
extern int call_8c247730(void *, int);
extern int object_ready(void *);
extern S_c8c0adc1c *call_8c0adc1c(int, int);
int operation_8c1eca04(Object *o, int a1)
{
    int v1;
    int v2;
    int v23;
    int v151;
    int t1;
    int t2;
    int t3;
    int t4;
    S_c8c0adc1c *t5;
    v1 = (int)(((o->f3cc & 2)) != 0);
    if (v1 == 0 && ((o->f34 & 0x20006)) == 0 && ((o->f34 & 0x2000000)) == 0) {
        v2 = (int)(((o->f310 & 0x11e)) != 0);
        if (v2 != 0) {
            if (a1 == 0xe) {
                t1 = operation_8c029430((int)(o->f34 & 0x2000000));
                if (t1 == 0) {
                    goto L_8c1eca86;
                }
            }
            if (a1 == 0x11) {
                v23 = (int)(*(int *)0x8c510ba0 != 0);
                if (v23 != 0) {
                    goto L_8c1eca86;
                }
            }
            t2 = call_8c247730((void *)(((char *)o + 0x3bc)), a1);
            if ((char)t2 != -1) {
                t3 = object_ready((void *)o);
                if (t3 != 0) {
                    goto L_8c1eca8a;
                }
            }
        }
    }
L_8c1eca86:;
    return 0;
L_8c1eca8a:;
    t4 = call_8c247730((void *)(((char *)o + 0x3bc)), a1);
    t5 = call_8c0adc1c(a1, (int)((char)t4));
    v151 = (int)((o->f332 - t5->f10) >= 0);
    return (int)(v151);
}
