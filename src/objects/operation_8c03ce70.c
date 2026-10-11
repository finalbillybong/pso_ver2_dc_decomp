typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    int f00;
};
void operation_8c03ce70(int a0, Arg1 *a1, int a2, int a3)
{
    if (a2 > a1->f00) {
        a1->f00 = a2;
        return;
    }
    if (!(a3 > a1->f00)) {
        a1->f00 = a3;
    }
}
