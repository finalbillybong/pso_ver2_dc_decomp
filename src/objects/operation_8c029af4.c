typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x1c];
    float f108;
};
extern int query_flag_8(void *);
void operation_8c029af4(Object *o, float f0)
{
    float v3;
    int t1;
    t1 = query_flag_8((void *)o);
    v3 = (float)f0;
    if (t1 != 0) {
        v3 = (float)(f0 * 0.5f);
    }
    o->f108 = v3;
    o->fe8 |= 0x100;
}
