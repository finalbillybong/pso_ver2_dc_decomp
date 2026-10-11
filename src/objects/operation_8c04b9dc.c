typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
void operation_8c04b9dc(int a0, Arg1 *a1)
{
    a1->f08 = a1->f00 + (float)(unsigned char)a0;
    a1->f0c = a1->f04 + 18.0f;
    a1->f18 = a1->f10 + (float)(unsigned char)a0 / 512.0f;
    a1->f1c = a1->f14 + 0.03515625f;
}
