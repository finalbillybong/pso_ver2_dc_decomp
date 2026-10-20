typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9a44 S_g8c4d9a44;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xb8];
    int fe4;
    char unknowne8[0x20];
    int f108;
    char unknown10c[0x10];
    int f11c;
};
struct S_g8c4d9a44 {
    int f00;
    int f04;
};
extern S_g8c4d9a44 *g_8c4d9a44;
extern int operation_8c0eea7c(int, float);
extern void operation_8c05428c(void *, int, int);
extern int current_effect_mode(void);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c130cf8(Object *o)
{
    int v5;
    int t1;
    int t2;
    v5 = (int)o;
    if ((o->f108 & 1) == 1) {
        o->f28 = (int)(g_8c4d9a44->f00);
        t1 = operation_8c0eea7c((int)o, 10000.0f);
        if (t1 == 1) {
            return;
        }
        o->fe4 = 3;
        operation_8c05428c((void *)o, 0, 0x10);
        o->f11c = 0;
        switch (current_effect_mode()) {
        case 3:
        case 4:
        case 5:
            call_8c05fbf8(0x40007, (char *)o + 0x3c, 0, 0);
            break;
        case 6:
        case 7:
            call_8c05fbf8(0x40001, (char *)o + 0x3c, 0, 0);
            break;
        case 8:
        case 9:
        case 10:
            call_8c05fbf8(0x40008, (char *)o + 0x3c, 0, 0);
            break;
        case 0:
        case 1:
        case 2:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        }
    } else {
        o->fe4 = 3;
        o->f28 = (int)(g_8c4d9a44->f04);
        operation_8c05428c((void *)v5, 0, 0x10);
        o->f11c = 0;
    }
}
