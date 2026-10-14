typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    short f20;
    char unknown22[0x2];
    Arg0_24 *f24;
};
extern int call_8c18e8a0(void *, int);
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
void operation_8c0baf70(Object *o)
{
    int t1;
    int t2;
    o->f24 = (Arg0_24 *)((int)o->f24 + 1);
    if (0x2d >= (int)(o->f24)) {
        t1 = call_8c18e8a0((void *)(o->f24), 0xf);
        if (t1 != 0) {
            return;
        }
        t2 = create_effect((void *)(((char *)o + 0x28)), 0x2b, 0x10);
        if (t2 == 0) {
            return;
        }
        bind_id((void *)t2, (unsigned short)(o->f20));
        return;
    }
    o->f04 |= 1;
}
