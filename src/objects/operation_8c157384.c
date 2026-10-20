typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x54];
    float f54;
    int f58;
    char unknown5c[0x20];
    float f7c;
    char unknown80[0x8];
    short f88;
    char unknown8a[0xa];
    int f94;
    int f98;
};
void operation_8c157384(Object *o)
{
    float v21;
    float v2;
    if (o->f94 != 0 && o->f58 == 0) {
        v21 = (float)((float)(o->f88 * 0x14) + 9.0f - (o->f54 - 26.0f) * 0.5f);
        v2 = (float)v21;
        if (o->f98 != 0) {
            v2 = (float)(v21 - 1.0f);
        }
        o->f7c = v2 - o->f7c + o->f7c;
    }
}
