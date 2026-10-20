typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c30b234 S_L8c30b234;
typedef struct S_L8c30b2cc S_L8c30b2cc;
typedef struct S_L8c30b33c S_L8c30b33c;
typedef struct S_L8c30b36c S_L8c30b36c;
typedef struct S_L8c30b384 S_L8c30b384;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x18];
    float f1c;
    float f20;
    float f24;
    float f28;
    char unknown2c[0x8];
    int f34;
};
struct S_L8c30b36c {
    char unknown0[0x4];
    float f04;
};
struct S_L8c30b234 {
    char unknown0[0x4];
    float f04;
};
struct S_L8c30b2cc {
    char unknown0[0x4];
    float f04;
};
struct S_L8c30b33c {
    char unknown0[0x4];
    float f04;
};
struct S_L8c30b384 {
    char unknown0[0x4];
    float f04;
};
extern S_L8c30b234 g_8c30b234;
extern S_L8c30b2cc g_8c30b2cc;
extern S_L8c30b33c g_8c30b33c;
extern S_L8c30b36c g_8c30b36c;
extern S_L8c30b384 g_8c30b384;
void operation_8c10393c(Object *o, int a1, int a2)
{
    switch ((unsigned int)((unsigned short)a1)) {
    case 0:
        o->tag |= 2;
        break;
    case 2:
        o->tag &= -3;
        o->f34 = 4;
        a2 = (unsigned short)a2 << 3;
        o->f1c = *(float *)((char *)&g_8c30b36c + a2);
        o->f20 = *(float *)((char *)&g_8c30b36c.f04 + a2);
        break;
    case 3:
        o->tag &= -3;
        o->f34 = 3;
        a2 = (unsigned short)a2 << 3;
        o->f1c = *(float *)((char *)&g_8c30b234 + a2);
        o->f20 = *(float *)((char *)&g_8c30b234.f04 + a2);
        break;
    case 4:
        o->tag &= -3;
        o->f34 = 4;
        a2 = (unsigned short)a2 << 3;
        o->f1c = *(float *)((char *)&g_8c30b2cc + a2);
        o->f20 = *(float *)((char *)&g_8c30b2cc.f04 + a2);
        break;
    case 6:
        o->tag &= -3;
        o->f34 = 3;
        a2 = (unsigned short)a2 << 3;
        o->f1c = *(float *)((char *)&g_8c30b33c + a2);
        o->f20 = *(float *)((char *)&g_8c30b33c.f04 + a2);
        break;
    case 7:
        o->tag &= -3;
        o->f34 = 4;
        a2 = (unsigned short)a2 << 3;
        o->f1c = *(float *)((char *)&g_8c30b384 + a2);
        o->f20 = *(float *)((char *)&g_8c30b384.f04 + a2);
    case 1:
    case 5:
        break;
    }
    o->f24 = o->f1c + 50.0f;
    o->f28 = o->f20 + 43.0f;
    o->f1c *= 0.00390625f;
    o->f20 *= 0.00390625f;
    o->f24 *= 0.00390625f;
    o->f28 *= 0.00390625f;
}
