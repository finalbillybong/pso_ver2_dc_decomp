typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
struct Frame {
    int f00;
    int f04;
    char unknown8[0x8];
};
extern void call_8c36d3ca(void *);
extern void call_8c36d4c0(void *, Frame *);
void operation_8c16e674(int a0)
{
    Frame frame;
    call_8c36d3ca((void *)(&(&frame)->f04));
    call_8c36d4c0((void *)(&(&frame)->f04), (Frame *)((&frame)));
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = (int)((&frame)->f00);
}
