typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1a85a8(void);
void operation_8c104d70(int a0)
{
    *(int *)0x8c4d5b10 = a0;
    call_8c1a85a8();
}
