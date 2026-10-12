typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
struct Arg2 {
    float f00;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct Arg3 {
    float f00;
};
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
void operation_8c1e9c80(Object *o, int a1, Arg2 *a2, Arg3 *a3)
{
    float t1;
    float t2;
    t1 = call_8c37eb0c(a1);
    a2->f00 = o->f3c + t1 * 8.0f;
    t2 = call_8c38c154(a1);
    a3->f00 = o->f44 + t2 * 8.0f;
}
