typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9980 S_g8c4d9980;
typedef struct S_g8c4d9980_430 S_g8c4d9980_430;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc0];
    float ff8;
    float ffc;
    float f100;
    char unknown104[0x2c];
    Arg0_130 *f130;
    char unknown134[0x1d6];
    short f30a;
};
struct S_g8c4d9980 {
    char unknown0[0x430];
    S_g8c4d9980_430 *f430;
};
struct S_g8c4d9980_430 {
    char unknown0[0xc];
    int f0c;
};
struct Arg0_130 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c4d9980 *g_8c4d9980;
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c12a010(Object *o, int a1)
{
    if (o->f30a != a1) {
        o->f30a = a1;
        switch (o->f30a) {
        case 2:
            if (((o->f34 & 0x8000000)) == 0) {
                call_8c05fbf8(0x40018, (void *)(((char *)o + 0x3c)), 0, 0);
            }
            o->f130 = (Arg0_130 *)g_8c4d9980->f430->f0c;
            o->ff8 = 22.0f;
            o->f100 = 1.0f;
            o->ffc = (float)(unsigned int)o->f130->f04 - 1.0f;
            return;
        case 1:
            if (((o->f34 & 0x8000000)) == 0) {
                call_8c05fbf8(0x4001a, (void *)(((char *)o + 0x3c)), 0, 0);
            }
        }
    }
}
