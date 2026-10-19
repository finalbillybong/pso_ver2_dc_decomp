typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
extern void append_descriptor_record(int, void *);
void operation_8c05f128(Object *o)
{
    int v1;
    v1 = (int)0;
    while (o->f34 > v1) {
        append_descriptor_record(0x2a, (void *)((int)o + v1 * 0x2c + 0x38));
        v1 = (int)(v1 + 1);
    }
}
