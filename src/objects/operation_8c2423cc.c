typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    unsigned short f20;
    char unknown22[0x2];
    int f24;
};
struct Frame {
    Vector3 f00;
    Block16 f0c;
};
extern void call_8c013a54(int, Frame *, void *);
void operation_8c2423cc(Object *o)
{
    Frame frame;
    int v1;
    v1 = (int)o->f24;
    o->f24 = v1 + -1;
    if (!(v1 > 0)) {
        o->f04 |= 1;
    }
    if (!((unsigned int)o->f20 >= (unsigned int)0xc)) {
        *(int *)((char *)0x8c510c10 + (o->f20 << 2)) = 0;
    }
    *(Block16 *)&(&frame)->f0c = *(Block16 *)&*(Block16 *)0x8c33aa0c;
    {
        Vector3 *p_ = (Vector3 *)&*(Vector3 *)0x8c33aa1c;
        *(Vector3 *)&(&frame)->f00 = *p_;
    }
    call_8c013a54((int)(o->f20), (Frame *)((&frame)), (void *)(&(&frame)->f0c));
}
