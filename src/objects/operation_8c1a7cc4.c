typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c323e1c[];
extern void call_8c38c5aa(int);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c1a7cc4(void)
{
    call_8c38c5aa(0xe);
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x40008, (void *)((g_8c323e1c + 0x50)));
    call_8c38c5b6(-0xf0f10);
    call_8c38c5aa(0xc);
}
