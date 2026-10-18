typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x35c];
    Arg0_394 *f394;
    char unknown398[0x10];
    int f3a8;
    char unknown3ac[0x8];
    int f3b4;
    int f3b8;
    char unknown3bc[0x10];
    unsigned short f3cc;
};
extern void operation_8c1ae0d8(void *, int, void *);
extern void operation_8c1b1668(void *, int);
void operation_8c1b1f88(Object *o)
{
    void *v1;
    int v2;
    if (((o->f34 & 0x800)) != 0) {
        v1 = (void *)(o->f394);
        if (v1 != 0) {
            v2 = o->f3a8 >> 0xc & 0xf;
            operation_8c1ae0d8(v1, (int)(v2 << 8 | (v2 << 4 | 2) | (o->f3b4 & 0xf) << 0xc | (o->f3b8 & 0xf) << 0x10 | (o->f3cc & 0xffff & 0xf) << 0x14), v1);
        }
    } else {
        operation_8c1b1668((void *)o, 9);
    }
}
