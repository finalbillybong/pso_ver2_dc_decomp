typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x41c];
    int f728;
    unsigned short f72c;
};
extern int g_8c418248;
int operation_8c065578(Object *o)
{
    int v5;
    int v4;
    short id;
    if (o->f728 != 0 && (o->f72c & 0xffff) == g_8c418248) {
        return 0;
    }
    v5 = 1;
    id = o->f30a;
    v4 = v5;
    if (id != 0x15) {
        if (id != 0x16) {
            v4 = 0;
        }
    }
    if (v4 == 0) {
        if (id != 9) {
            v5 = 0;
        }
    }
    return v5 == 0;
}
