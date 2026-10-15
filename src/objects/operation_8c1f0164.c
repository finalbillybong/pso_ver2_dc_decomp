typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30c];
    short f30c;
    char unknown30e[0x42];
    int f350;
};
extern void operation_8c1e8e60(int, int, int);
void operation_8c1f0164(Object *o)
{
    switch (o->f30c) {
    case 1:
        if (((o->f350 & 0x400)) == 0) {
            operation_8c1e8e60((int)o, 1, 0);
        }
    }
}
