typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void memset_8c12b880(int, int, int);
extern void strncpy_8c12b154(int, void *, int);
void operation_8c1e771c(int a0)
{
    if ((*(unsigned char *)0x8c4e3120) != 0) {
        memset_8c12b880((int)(a0 + 0x40), 0, 9);
        strncpy_8c12b154((int)(a0 + 0x40), (void *)((void *)0x8c4e3120), 8);
    } else {
        memset_8c12b880((int)(a0 + 0x40), 0, 9);
    }
    if ((*(unsigned char *)0x8c4e3128) != 0) {
        memset_8c12b880((int)(a0 + 0x49), 0, 9);
        strncpy_8c12b154((int)(a0 + 0x49), (void *)((void *)0x8c4e3128), 8);
        return;
    }
    memset_8c12b880((int)(a0 + 0x49), 0, 9);
}
