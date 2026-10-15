typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x30];
    float f68;
    float f6c;
    float f70;
    int f74;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
extern void call_8c102f9c(void);
void operation_8c1d7ef0(Object *o)
{
    int v1;
    int v5;
    if (o->f74 != 0) {
        v1 = !(o->f34 & 1);
        if (v1 == 0) {
            return;
        }
        o->f74 = 0;
        if (*(int *)0x8c46fe20 != 0) {
            (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -9;
        }
        *(int *)0x8c4d5954 = 0;
        return;
    }
    if (((o->f34 & 2)) == 0) {
        v5 = !(o->f34 & 1);
        if (v5 == 0) {
            o->f74 = 1;
            call_8c102f9c();
            if (*(int *)0x8c4d59d8 != 0) {
                (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 &= -0x11;
            }
            if (*(int *)0x8c46fe20 != 0) {
                (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 8;
            }
            o->f68 = 0.0f;
            o->f6c = 0.0f;
            o->f70 = 0.0f;
        }
    }
}
