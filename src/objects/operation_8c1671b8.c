typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c286528 S_L8c286528;
typedef struct S_g8c286528 S_g8c286528;
typedef struct S_g8c286530 S_g8c286530;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    Arg0_10 *f10;
    char unknown14[0xc];
    Arg0_20 *f20;
    char unknown24[0xc];
    int f30;
    int f34;
    int f38;
};
struct S_L8c286528 {
    char unknown0[0x4];
    int f04;
    S_g8c286530 *f08;
    float f0c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c286528 g_8c286528;
extern int operation_8c143048(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c167284(int, void *, int, void *, float, void *);
extern int call_8c18e768(void *, void *);
extern void rotate_scalar_pair(void *, void *, int);
void operation_8c1671b8(Object *o)
{
    int t1;
    int t2;
    int t3;
    o->f38 -= 1;
    if (!(o->f38 > 0)) {
        t1 = operation_8c143048();
        if (t1 != 0) {
            t2 = allocate_block(g_8c4d97e0, (unsigned int)0x120);
            if (t2 != 0) {
                call_8c167284(t2, (void *)(o->f10), t1, (void *)(o->f20), *(float *)((char *)&g_8c286528.f0c + (o->f30 << 4)) * 1.5f, (void *)(((char *)o + 0x24)));
            }
        }
        o->f38 = (int)(*(int *)((char *)&g_8c286528.f04 + (o->f30 << 4)));
        t3 = call_8c18e768((void *)(*(S_g8c286530 **)((char *)&g_8c286528.f08 + (o->f30 << 4))), (void *)(*(S_g8c286528 **)((char *)&g_8c286528 + (o->f30 << 4))));
        rotate_scalar_pair((void *)(((char *)o + 0x24)), (void *)(((char *)o + 0x2c)), t3);
        o->f34 -= 1;
        if (o->f34 == 0) {
            o->f04 |= 1;
        }
    }
}
