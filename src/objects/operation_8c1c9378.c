typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
struct S_c8c1c7658 {
    char unknown0[0x10];
    unsigned char f10;
};
extern S_c8c1c7658 *call_8c1c7658(int);
unsigned char operation_8c1c9378(int a0)
{
    S_c8c1c7658 *t1;
    t1 = call_8c1c7658(a0);
    if (t1 != 0) {
        return t1->f10;
    }
    return 0;
}
