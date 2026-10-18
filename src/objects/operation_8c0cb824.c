typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Block_p0_54 {
    float f00;
    float f04;
    float f08;
} Block_p0_54;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0x4];
    float f34;
    float f38;
    Vector3 f3c;
    Vector3 f48;
    Block_p0_54 f54;
    float f60;
    char unknown64[0x4];
    float f68;
};
struct Frame {
    Vector3 f00;
};
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c37f6f0(Frame *, void *);
extern float normalize_vector_checked(void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c0d0360(int, void *, void *, Frame *, float);
extern void operation_8c0911f4(void *, int);
void operation_8c0cb824(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    float t2;
    float f1;
    o->f2c += 20.0f;
    v1 = (int)0;
    if (o->f2c > o->f38) {
        v1 = (int)1;
        *(Vector3 *)&o->f54 = *(Vector3 *)&o->f48;
    } else {
        if (o->f2c < o->f34) {
            o->f54.f04 = o->f28;
        } else {
            f1 = o->f2c - o->f34;
            o->f54.f04 = o->f24 * f1 * f1 + o->f28;
        }
        o->f54.f00 += o->f60;
        o->f54.f08 += o->f68;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f54;
    call_8c37f6f0((Frame *)((&frame)), (void *)(&o->f3c));
    t2 = normalize_vector_checked((void *)(&frame));
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x298);
    if (t1 != 0) {
        call_8c0d0360(t1, g_8c44be98, (void *)(&o->f3c), (Frame *)((&frame)), t2);
    }
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->f54;
    if (v1 != 0) {
        operation_8c0911f4((void *)(o->f20), (int)(&o->f48));
        o->f04 |= 1;
    }
}
