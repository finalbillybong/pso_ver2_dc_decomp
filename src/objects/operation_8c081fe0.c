typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c082004 S_c8c082004;
struct S_c8c082004 {
    char unknown0[0x11c];
    int f11c;
};
extern S_c8c082004 *call_8c082004(int);
void operation_8c081fe0(int a0)
{
    S_c8c082004 *t1;
    t1 = call_8c082004(a0);
    if (t1 != 0) {
        t1->f11c = 1;
    }
}
