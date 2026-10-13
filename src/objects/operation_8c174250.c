typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db64c S_L8c4db64c;
struct S_L8c4db64c {
    char unknown0[0x8];
    char f08;
};
extern S_L8c4db64c g_8c4db64c;
extern void call_8c12b154(void *, int, int);
void operation_8c174250(int a0)
{
    call_8c12b154((void *)((void *)&g_8c4db64c), a0, 8);
    (&g_8c4db64c)->f08 = 0;
}
