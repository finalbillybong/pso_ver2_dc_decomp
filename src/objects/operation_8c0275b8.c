typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
};
extern int g_8c418248;
extern void call_8c184a20(int, short);
extern void call_8c184cf8(int);
void operation_8c0275b8(Object *o)
{
    int v1;
    int v4;
    if (g_8c418248 == 0xffff) {
        v4 = (int)0;
    } else {
        if (g_8c418248 >= 0xc) {
            v4 = (int)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + (g_8c418248 << 2));
            v4 = (int)v1;
        }
    }
    if (v4 != 0) {
        call_8c184a20((int)(v4 + 0x418), o->f02);
        call_8c184cf8((int)(v4 + 0x418));
    }
}
