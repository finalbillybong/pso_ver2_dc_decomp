typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    int f2c;
};
extern void normalize_rectangle_fields(void *, float, float);
extern int operation_8c1a68f8(int);
void operation_8c1a6570(Object *o, int a1)
{
    int t1;
    int v1 = (unsigned char)a1;
    normalize_rectangle_fields((void *)o, *(float *)((char *)0x8c287bc8 + ((v1 & 3) << 3)), *(float *)((char *)((char *)0x8c287bc8 + ((v1 & 3) << 3)) + 0x4));
    t1 = operation_8c1a68f8((int)(v1 >> 1 >> 1 & 7));
    o->f2c = (int)(t1);
}
