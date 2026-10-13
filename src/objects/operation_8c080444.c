typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
};
void operation_8c080444(int a0, Arg1 *a1, float f0, float f1)
{
    if (f0 > a1->f00) {
        a1->f00 = f0;
    }
    if (a1->f00 > f1) {
        a1->f00 = f1;
    }
}
