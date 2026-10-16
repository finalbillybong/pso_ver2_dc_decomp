typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c315f9c S_L8c315f9c;
typedef struct S_g8c4da9e4 S_g8c4da9e4;
typedef struct S_g8c4da9f4 S_g8c4da9f4;
typedef struct S_g8c4daa20 S_g8c4daa20;
typedef struct S_g8c4daa28 S_g8c4daa28;
typedef struct Object Object;
struct Object {
    char unknown0[0x49c];
    int f49c;
    float f4a0;
    float f4a4;
    float f4a8;
};
struct S_L8c315f9c {
    float f00;
    float f04;
    float f08;
};
struct S_g8c4da9f4 {
    int f00;
};
struct S_g8c4da9e4 {
    int f00;
};
struct S_g8c4daa20 {
    char unknown0[0x7];
    unsigned char f07;
};
struct S_g8c4daa28 {
    char unknown0[0x7];
    unsigned char f07;
};
extern int g_8c315fb4;
extern S_g8c4da9e4 *g_8c4da9e4;
extern S_g8c4da9f4 *g_8c4da9f4;
extern S_g8c4daa20 *g_8c4daa20;
extern S_g8c4daa28 *g_8c4daa28;
extern S_L8c315f9c g_8c315f9c;
void operation_8c1543e4(Object *o)
{
    o->f49c = (int)(g_8c315fb4);
    o->f4a0 = (&g_8c315f9c)->f00;
    o->f4a4 = (&g_8c315f9c)->f04;
    o->f4a8 = (&g_8c315f9c)->f08;
    g_8c4da9f4->f00 &= -9;
    g_8c4da9e4->f00 &= -9;
    g_8c4daa20->f07 = 0xff;
    g_8c4daa28->f07 = 0xff;
}
