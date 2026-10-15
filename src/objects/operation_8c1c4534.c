typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c328a98[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c1c4534(void)
{
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c328a98 + 0xd)));
    call_8c38c5b6(-0xf0f10);
}
