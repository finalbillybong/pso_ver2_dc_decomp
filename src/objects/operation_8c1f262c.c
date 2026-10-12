typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
struct Arg1 {
    int f00;
};
struct Arg3 {
    int f00;
};
struct Arg4 {
    char f00;
};
struct Object {
    float tag;
};
struct Arg2 {
    float f00;
};
extern float call_8c37eb0c(int);
void operation_8c1f262c(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3, Arg4 *a4)
{
    float t1;
    a1->f00 += a3->f00;
    t1 = call_8c37eb0c(a1->f00 + (int)((float)a4->f00 * 65536.0f / 360.0f));
    o->tag = a2->f00 * t1 + o->tag;
}
