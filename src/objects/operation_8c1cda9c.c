typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    short f82;
    char unknown84[0x2];
    short f86;
};
struct Frame {
    unsigned char f00;
    unsigned char f01;
    char unknown2[0x2];
};
extern void call_8c1cdd60(int, void *, Frame *);
extern void call_8c19f268(void *, unsigned char, unsigned char, int, int, int);
void operation_8c1cda9c(Object *o, int a1, int a2, int a3, int a4)
{
    Frame frame;
    if (!(o->f82 >= o->f86)) {
        call_8c1cdd60(a1, (void *)(&(&frame)->f01), (Frame *)((&frame)));
        call_8c19f268((void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2))), (&frame)->f01, (&frame)->f00, a2, a3, a4);
        o->f82 += 1;
    }
}
