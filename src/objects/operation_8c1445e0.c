typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xdc];
    int fdc;
    char unknowne0[0xb8];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0xaa];
    int f3dc;
    char unknown3e0[0x2ec];
    int f6cc;
    int f6d0;
};
extern void operation_8c145184(void *, float, float);
extern void operation_8c1452f8(int, int);
extern void operation_8c144bf8(void *);
extern void reset_segments_8c05a124(void *);
void operation_8c1445e0(Object *o)
{
    int v10;
    v10 = (int)(o->f198 - o->f330);
    if (((o->f3dc & 8)) != 0) {
        o->f6cc -= v10;
        operation_8c145184((void *)((int)o->fdc + 0x1c), 2.0f, 8.0f);
        operation_8c1452f8(0x3000f, (int)(((char *)o + 0x538)));
    } else {
        *(int *)((char *)o + 0x6d0) -= v10;
        if (!(o->f6d0 >= 0)) {
            o->f6d0 = 0;
            operation_8c144bf8((void *)o);
        }
    }
    o->f330 = o->f198;
    reset_segments_8c05a124((void *)o);
}
