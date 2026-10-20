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
    char unknown1b0[0x10c];
    int f2bc;
    int f2c0;
    float f2c4;
    int f2c8;
};
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
void operation_8c04677c(Object *o)
{
    int v1;
    int t1;
    if (((o->f2bc & 4)) == 0) {
        v1 = (int)o->f34;
        if (((v1 & 0x1000000)) == 0) {
            if (((v1 & 0x2000000)) == 0) {
                t1 = create_effect((void *)(((char *)o + 0x324)), 0x26, 0x50);
                if (t1 != 0) {
                    bind_id((void *)t1, (unsigned short)(o->f20));
                }
            }
            if (o->f2c0 == 0x10) {
                o->f1ae += (int)((float)o->f1a6 * -o->f2c4);
            }
            o->f2c0 = 0x10;
            if ((unsigned int)o->f20 >= (unsigned int)0x1000) {
                o->f2c4 = -0.15f;
                o->f1ae += (int)((float)o->f1a6 * -0.15f);
                o->f2c8 = 0xd2;
            } else {
                o->f2c4 = 0.0f;
                o->f2c8 = 0;
            }
            o->f34 = (unsigned int)o->f34 >> 2 << 2;
            o->f34 |= 2;
        }
    }
}
