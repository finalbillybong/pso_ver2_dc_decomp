typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    unsigned char f00;
};
extern void call_8c1c74a8(Arg1 *, int);
void operation_8c2192b8(int a0, Arg1 *a1)
{
    if (a1->f00 == 3) {
        call_8c1c74a8(a1, 1);
    }
}
