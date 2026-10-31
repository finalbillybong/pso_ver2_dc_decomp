typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void memset_8c12b880(int, int, int);
extern void strncpy_8c12b154(int, void *, int);
void operation_8c25c35c(int a0)
{
    if ((*(unsigned char *)0x8c513400) != 0) {
        memset_8c12b880((int)(a0 + 0x3c), 0, 9);
        strncpy_8c12b154((int)(a0 + 0x3c), (void *)((void *)0x8c513400), 8);
    } else {
        memset_8c12b880((int)(a0 + 0x3c), 0, 9);
    }
    if ((*(unsigned char *)0x8c513408) != 0) {
        memset_8c12b880((int)(a0 + 0x45), 0, 9);
        strncpy_8c12b154((int)(a0 + 0x45), (void *)((void *)0x8c513408), 8);
        return;
    }
    memset_8c12b880((int)(a0 + 0x45), 0, 9);
}
