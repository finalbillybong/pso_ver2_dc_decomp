typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x238];
    int f238;
};
extern int call_8c12b944(void);
void operation_8c239e30(Object *o)
{
    int t1;
    if (o->f238 == 3) {
        o->f238 = 1;
    }
    if (o->f238 == 0) {
        t1 = call_8c12b944();
        if (0.1f > ((float)t1 / 32768.0f)) {
            o->f238 = 2;
        }
    }
}
