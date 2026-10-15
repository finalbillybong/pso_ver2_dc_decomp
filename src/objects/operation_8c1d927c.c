typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c32a328[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c1d927c(void)
{
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001e, (void *)((g_8c32a328 + 0x186)));
    call_8c38c5b6(-0xf0f10);
}
