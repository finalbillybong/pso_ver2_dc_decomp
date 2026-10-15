typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_98 Arg0_98;
struct Object {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0x6];
    short f88;
    char unknown8a[0x6];
    Arg0_90 *f90;
    char unknown94[0x4];
    Arg0_98 *f98;
};
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c19a044(void *, int);
void operation_8c1574cc(Object *o)
{
    char *v41;
    v41 = (char *)*(int *)((char *)((char *)o->f90 + 0x0) + (o->f88 << 3));
    if ((((int)(v41) & 0x10)) != 0) {
        call_8c05fbf8(0x50006, 0, 0, 0);
        return;
    }
    if ((((int)(v41) & 0x20)) == 0) {
        call_8c05fbf8(0x50001, 0, 0, 0);
    }
    o->f80 = (o->f80 & 0xffff) | 2;
    if (o->f98 != 0) {
        operation_8c19a044((void *)(o->f98), 2);
    }
}
