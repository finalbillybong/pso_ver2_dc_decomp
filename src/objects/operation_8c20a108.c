typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void memset_8c12b880(int, int, int);
void operation_8c20a108(int a0)
{
    memset_8c12b880(a0 + 0x144, 0, 0x24);
    memset_8c12b880(a0 + 0x168, 0, 0x30);
    memset_8c12b880(a0 + 0x198, 0, 0x20);
    memset_8c12b880(a0 + 0x1b8, 0, 4);
}
