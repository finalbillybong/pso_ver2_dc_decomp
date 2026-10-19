typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db648 S_g8c4db648;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
struct S_g8c4db648 {
    char unknown0[0x4];
    short f04;
};
struct Object {
    char unknown0[0xe8];
    Arg0_e8 *fe8;
};
extern S_g8c4db648 *g_8c4db648;
extern void create_loader_8c1736ac(int);
void operation_8c19d430(Object *o)
{
    if (g_8c4db648 != 0) {
        g_8c4db648->f04 |= 1;
    }
    create_loader_8c1736ac((int)(o->fe8));
}
