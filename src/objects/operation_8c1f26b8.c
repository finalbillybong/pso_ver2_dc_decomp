typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    int f00;
};
struct Arg2 {
    float f00;
    char unknown4[0x4];
    int f08;
    int f0c;
};
struct Object {
    float tag;
};
extern float call_8c37eb0c(int);
void operation_8c1f26b8(Object *o, Arg1 *a1, Arg2 *a2)
{
    float t1;
    a1->f00 += a2->f0c;
    t1 = call_8c37eb0c(a1->f00 + a2->f08);
    o->tag = a2->f00 * t1;
}
