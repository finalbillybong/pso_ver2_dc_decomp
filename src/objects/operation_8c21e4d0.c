typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db528 S_L8c4db528;
typedef struct S_g8c4db548 S_g8c4db548;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    unsigned char f20;
    char unknown21[0x3];
    Arg0_24 *f24;
    Arg0_28 *f28;
};
struct Arg0_24 {
    char unknown0[0x68];
    char f68;
    char f69;
};
struct S_L8c4db528 {
    char unknown0[0x20];
    S_g8c4db548 *f20;
};
extern S_g8c4dbde0 *g_8c4dbde0;
extern S_L8c4db528 g_8c4db528;
extern void call_8c18c808(void *);
extern int operation_8c173ef8(int);
extern int hierarchy_is_active(void *);
void operation_8c21e4d0(Object *o)
{
    int v1;
    int v2;
    int t1;
    int t2;
    switch ((unsigned char)o->f20) {
    case 0:
    case 1:
        o->f24->f68 = (unsigned int)o->f24->f68 >> 1 << 1;
        o->f20 = 2;
    case 2:
        if (((o->f24->f68 & 2)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 5;
            return;
        }
        if (((o->f24->f68 & 1)) == 0) {
            return;
        }
        o->f20 = 3;
        return;
    case 3:
        t1 = operation_8c173ef8((int)(*(S_g8c4db548 **)((char *)&g_8c4db528.f20 + (o->f24->f69 * 0x24))));
        o->f28 = (Arg0_28 *)t1;
        v1 = (int)4;
        o->f20 = v1;
    case 4:
        t2 = hierarchy_is_active((void *)(o->f28));
        if (t2 == 0) {
            o->f28 = (Arg0_28 *)0;
            v2 = (int)1;
            o->f20 = v2;
        }
        return;
    case 5:
        break;
    }
}
