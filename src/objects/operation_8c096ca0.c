typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
    char unknown74[0x10];
    float f84;
    int f88;
};
extern int g_8c469e48;
extern int call_8c18e768(int, int);
extern float call_8c38c154(int);
void operation_8c096ca0(Object *o)
{
    int t1;
    float t2;
    float pm3;
    if (!(--o->f88 > 0)) {
        o->f88 = 0;
        g_8c469e48 = 3;
        return;
    }
    t1 = call_8c18e768((int)(o->f88 << 0xf), 0x78);
    t2 = call_8c38c154(t1);
    pm3 = (t2 + 1.0f) * 0.5f * (25.0f - o->f84) + o->f84;
    o->f70 = pm3;
}
