typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c12b880(int, int, int);
void operation_8c16f864(unsigned int a0)
{
    if (!(a0 > (unsigned int)5)) {
        call_8c12b880((int)(a0 * 0x24 + 0x8c4db528), 0, 0x24);
    }
}
