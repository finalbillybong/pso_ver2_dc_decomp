typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x104];
    float f104;
    int f108;
    int f10c;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern int call_8c0dddcc(void);
int operation_8c15c858(Object *o)
{
    S_c8c021ef8 *t1;
    float t2;
    int t3;
    float t4;
    if (o->f10c != 1) {
        t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (o->f108 != 1) {
            if (o->f108 == 2) {
                goto L_8c15c8b4;
            }
        } else {
            if (t1 != 0 && ((t1->f34 & 0x400000)) != 0) {
                t2 = squared_distance_xz((void *)(((char *)t1 + 0x3c)), (void *)(((char *)o + 0x3c)));
                if ((o->f104 * o->f104) > t2) {
                    o->f10c = 1;
                    goto L_8c15c8e8;
L_8c15c8b4:;
                    t3 = call_8c0dddcc();
                    if (*(int *)0x8c418248 == (unsigned short)t3 && t1 != 0) {
                        t4 = squared_distance_xz((void *)(((char *)t1 + 0x3c)), (void *)(((char *)o + 0x3c)));
                        if ((o->f104 * o->f104) > t4) {
                            o->f10c = 1;
                        }
                    }
                }
            }
        }
    }
L_8c15c8e8:;
    return (int)(o->f10c);
}
