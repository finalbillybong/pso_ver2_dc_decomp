typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct S_g8c4db520_30 S_g8c4db520_30;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    unsigned short f04;
    char unknown6[0x2];
    int f08;
};
struct S_g8c4db520 {
    char unknown0[0x30];
    S_g8c4db520_30 *f30;
};
extern S_g8c4db520 *g_8c4db520;
void operation_8c1734c0(Object *o)
{
    S_g8c4db520 *g = g_8c4db520;
    if (g != 0) {
        char *p = (char *)g->f30;
        if ((unsigned int)0xff >= (unsigned int)o->f04) {
            *(int *)(p + (o->f04 << 2)) = (int)(o->f08);
        }
    }
}
