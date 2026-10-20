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
    char unknown2c0[0xc];
    int f2cc;
    float f2d0;
    int f2d4;
};
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c046c18(Object *o)
{
    int v1;
    int t1;
    if (((o->f2bc & 4)) != 0) {
        v1 = (int)o->f34;
        if (((v1 & 0x1000000)) == 0) {
            if (((v1 & 0x2000000)) == 0) {
                t1 = create_effect((void *)(((char *)o + 0x324)), 0x21, 0x50);
                if (t1 != 0) {
                    bind_id((void *)t1, (unsigned short)(o->f20));
                }
                call_8c05fbf8(0x10, (void *)(((char *)o + 0x3c)), 0, 0);
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
            o->f2cc = 3;
            o->f2d4 = 0xd2;
            o->f34 &= -0x3d;
            o->f34 |= 4;
            if ((unsigned int)o->f20 >= (unsigned int)0x1000) {
                o->f2d0 = -0.15f;
                o->f1ae += (int)((float)o->f1a6 * -0.15f);
                return;
            }
            o->f2d0 = 0.0f;
        }
    }
}
