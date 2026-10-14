typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    Vector3 f00;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Vector3 f20;
    char unknown2c[0x58];
    int f84;
};
extern int call_8c1abc70(Object *);
extern void create_effect_777c(void *, int);
extern void call_8c37f6f0(Frame *, void *);
void operation_8c1c5650(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    (&frame)->f00 = o->f20;
    t1 = call_8c1abc70(o);
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    v1 = (int)0;
    while (v1 != o->f84) {
        create_effect_777c((void *)(&frame), 0x9c);
        call_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x88)));
        v1 = (int)(v1 + 1);
    }
}
