typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    Arg0_34 *f34;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c22c570(int, Object *);
extern void call_8c22c8dc(void *, float);
extern void call_8c22c970(void *, float);
void operation_8c25cf04(Object *o)
{
    int t1;
    switch (o->f20) {
    case 1:
        if (o->f34 == 0) {
            t1 = allocate_block(g_8c4d97e0, (unsigned int)0x30);
            if (t1 != 0) {
                call_8c22c570(t1, o);
            }
            o->f34 = (Arg0_34 *)t1;
            if (o->f34 != 0) {
                call_8c22c8dc((void *)(o->f34), (float)o->f28);
            }
        }
        if (o->f24 == o->f28) {
            o->f20 = 2;
            o->f24 = 0;
            return;
        }
        o->f24 += 1;
        return;
    case 2:
        if (o->f24 == o->f2c) {
            o->f20 = 3;
            o->f24 = 0;
            if (o->f34 == 0) {
                return;
            }
            call_8c22c970((void *)(o->f34), (float)o->f28);
            o->f34 = (Arg0_34 *)0;
            return;
        }
        o->f24 += 1;
        return;
    case 3:
        if (o->f24 == o->f30) {
            o->f20 = 4;
            o->f24 = 0;
            return;
        }
        o->f24 += 1;
        return;
    case 4:
        o->f04 |= 1;
        return;
    case 0:
        break;
    }
}
