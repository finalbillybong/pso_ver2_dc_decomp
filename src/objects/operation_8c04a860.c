typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x308];
    short f308;
};
extern int call_8c04a888(void);
int operation_8c04a860(Object *o)
{
    int v1;
    int t1;
    v1 = (int)(o->f308 == 2);
    if (v1 != 0) {
        return 0;
    }
    t1 = call_8c04a888();
    return t1;
}
