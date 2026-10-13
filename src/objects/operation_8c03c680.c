typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x78];
    int f384;
};
void operation_8c03c680(Object *o)
{
    int v2;
    o->f30a = 0;
    if (o->f384 != 0) {
        if (o->f384 == 1) {
            goto L_8c03c69e;
        }
        v2 = (int)0;
    } else {
        o->ff0 = 1;
        return;
L_8c03c69e:;
        o->ff0 = 2;
        return;
    }
    o->ff0 = v2;
}
