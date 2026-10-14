typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x32688 S_x32688;
struct S_x32688 {
    char unknown0[0x20];
    int f20;
};
extern void call_8c12b154(int, int, int);
void operation_8c16f838(unsigned int a0, int a1, int a2)
{
    if (!(a0 > (unsigned int)5)) {
        ((S_x32688 *)(a0 * 0x24 + 0x8c4db528))->f20 = a1;
        call_8c12b154((int)(a0 * 0x24 + 0x8c4db528), a2, 0x20);
    }
}
