typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a7578 S_c8c1a7578;
typedef struct S_g8c2e72d8 S_g8c2e72d8;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x20c];
    short f308;
    char unknown30a[0x2];
    short f30c;
    char unknown30e[0x42];
    int f350;
    char unknown354[0x3c];
    int f390;
    char unknown394[0x34];
    int f3c8;
    char unknown3cc[0x4];
    float f3d0;
};
struct S_c8c1a7578 {
    char unknown0[0xc];
    float f0c;
};
extern int angle_halfway(int, int);
extern S_c8c1a7578 *operation_8c1a7578(int);
extern int call_8c247888(void *);
extern void call_8c0af660(int, Object *);
extern int check_range_8c01cf68(void *, float);
extern void call_8c1ecc14(Object *);
extern int operation_02c350(void *);
extern void call_8c025a44(Object *);
void operation_8c1ec7d0(Object *o)
{
    int v8;
    int v9;
    short v10;
    int t1;
    int t2;
    S_c8c1a7578 *t3;
    int t4;
    int t5;
    t1 = angle_halfway((int)(o->f64), (int)(o->f390));
    o->f64 = (int)(t1);
    t3 = operation_8c1a7578((int)o);
    switch (o->f30c) {
    case 0:
        o->f350 |= 0x80;
        t2 = call_8c247888((void *)(((char *)o + 0x3bc)));
        call_8c0af660((int)((short)t2), o);
        o->f30c = 1;
    case 1:
        o->ff8 = o->f3d0 + o->ff8;
        if (o->f3d0 > 0.0f) {
            if (2.0f > o->ff8) {
                goto L_8c1ec88c;
            }
            o->f3d0 = -0.2f;
        } else {
            if (0.0f > o->ff8) {
                o->f3d0 = 0.2f;
            }
        }
L_8c1ec88c:;
        *(int *)((char *)o + 0x3c8) -= 1;
        if (o->f3c8 >= 0) {
            goto L_8c1ec93c;
        }
        o->f30c = 2;
        o->fe8 &= -0x41;
        break;
    case 2:
        t4 = check_range_8c01cf68((void *)o, t3->f0c);
        if (t4 == 0) {
            goto L_8c1ec93c;
        }
        o->f30c = 3;
        o->f350 &= -0x81;
        o->fe8 |= 0x40;
        v8 = (int)(o->f308 == 2);
        if (v8 != 0) {
            goto L_8c1ec93c;
        }
        call_8c1ecc14(o);
        break;
    case 4:
        *(int *)((char *)o + 0x3c8) -= 1;
        if (!(o->f3c8 >= 0)) {
            o->f30c = 5;
            v9 = (int)0;
            if (((o->f34 & 0x100000)) != 0) {
                v9 = (int)1;
            }
            t5 = operation_02c350((void *)o);
            v10 = *(short *)((char *)((char *)*(S_g8c2e72d8 **)((char *)0x8c2e72d8 + (v9 << 2)) + 0x0) + ((short)t5 << 1));
            o->ff0 = v10;
            o->fe8 &= -0x41;
        }
    case 3:
    case 5:
        break;
    }
L_8c1ec93c:;
    call_8c025a44(o);
}
