typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x18];
    int f1c;
    int f20;
};
void operation_8c1e6014(Object *o)
{
    char *v7;
    int v8;
    v7 = (char *)o->tag;
    v8 = (int)((int)(v7) & 4);
    if (v8 == 0 && (((int)(v7) & 8)) == 0) {
        return;
    }
    if (v8 == 0) {
        o->tag |= 4;
        o->f1c = 0;
    }
    if (((o->tag & 8)) == 0) {
        o->tag |= 8;
        o->f20 = 0;
    }
}
