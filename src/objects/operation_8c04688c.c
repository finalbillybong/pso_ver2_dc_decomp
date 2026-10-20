typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x16e];
    short f1a6;
    char unknown1a8[0x6];
    short f1ae;
    char unknown1b0[0x11c];
    int f2cc;
    float f2d0;
    int f2d4;
};
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
void operation_8c04688c(Object *o)
{
    unsigned short v1;
    short v8;
    short v9;
    int t1;
    unsigned short lim;
    v1 = (unsigned short)o->f20;
    lim = 0x1000;
    if (v1 <= lim) {
        if (((o->f34 & 0x2000000)) == 0) {
            t1 = create_effect((void *)(((char *)o + 0x324)), 0x27, 0x50);
            if (t1 != 0) {
                bind_id((void *)t1, (unsigned short)(o->f20));
            }
        }
        switch (o->f2cc) {
        case 2:
            o->f1ae += (int)((float)o->f1a6 * -o->f2d0);
            break;
        case 3:
            if ((unsigned int)o->f20 >= (unsigned int)0x1000) {
                o->f1ae += (int)((float)o->f1a6 * -o->f2d0);
            }
        }
        o->f2cc = 0x11;
        o->f2d0 = 0.0f;
        o->f2d4 = 0xd2;
        o->f34 &= -0x3d;
        o->f34 |= 8;
    }
}
