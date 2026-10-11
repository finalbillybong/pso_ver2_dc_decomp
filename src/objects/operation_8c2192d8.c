typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x1];
    unsigned char f04;
};
extern void operation_1c7dd4(void *);
void operation_8c2192d8(int a0, Arg1 *a1)
{
    if (a1->f01 == 2) {
        if (!((unsigned int)a1->f04 >= (unsigned int)0x13)) {
            if (!((unsigned int)a1->f02 >= (unsigned int)0x1e)) {
                return;
            }
        }
        operation_1c7dd4((void *)a1);
    }
}
