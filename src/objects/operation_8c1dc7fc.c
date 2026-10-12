typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c12b880(int, int, int);
extern void call_8c1dc770(int);
void operation_8c1dc7fc(int a0)
{
    call_8c12b880(a0 + 0x20, 0, 0x80);
    call_8c1dc770(a0);
}
