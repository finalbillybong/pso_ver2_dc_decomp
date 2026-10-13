typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1c];
    char f1c;
    char unknown1d[0x14];
    char f31;
    char f32;
    char f33;
};
extern int operation_8c034ce4(void);
int operation_8c034c7c(Object *o)
{
    int t1;
    if (((o->f32 & 0xa)) == 0) {
        return o->f31;
    }
    if (o->f33 <= 0 || o->f1c < 0 || o->f1c >= 5) {
        return o->f31;
    }
    t1 = operation_8c034ce4();
    if (t1 != 0) {
        return o->f1c + 9;
    }
    return o->f31;
}
