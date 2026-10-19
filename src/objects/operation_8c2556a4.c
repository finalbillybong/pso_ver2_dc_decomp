typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg0_1e4 Arg0_1e4;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0xe6];
    unsigned short fe6;
    Arg0_e8 *fe8;
    char unknownec[0xf4];
    int f1e0;
    Arg0_1e4 *f1e4;
    int f1e8;
};
extern int g_8c44be04;
extern S_g8c44be9c *g_8c44be9c;
extern void operation_8c255704(int, int, int, int);
void operation_8c2556a4(Object *o)
{
    int v2;
    int v1;
    if (o->f1e8 == 2) {
        v1 = (int)g_8c44be04;
        v2 = (int)o->f1e0;
        if (v2 != v1) {
            o->f1e0 = (int)(v1);
            if (o->f1e0 != 0 && o->f1e0 != 0xf) {
                operation_8c255704((int)g_8c44be9c, (int)(o->fe8), (int)(o->fe6), (int)(o->f1e4));
            }
        }
    }
}
