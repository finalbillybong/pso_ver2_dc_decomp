typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c12b880(int, int, int);
void operation_8c20a108(int a0)
{
    call_8c12b880(a0 + 0x144, 0, 0x24);
    call_8c12b880(a0 + 0x168, 0, 0x30);
    call_8c12b880(a0 + 0x198, 0, 0x20);
    call_8c12b880(a0 + 0x1b8, 0, 4);
}
