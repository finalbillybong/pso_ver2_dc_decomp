typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x14];
    int f14;
    char unknown18[0x4];
    Vector3 f1c;
    Vector3 f28;
    char unknown34[0x14];
    Vector3 f48;
    Vector3 f54;
};
extern void call_8c0a2144(int);
extern void call_8c0a22fc(Frame *);
void operation_8c2208a4(void)
{
    Frame frame;
    *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&*(Vector3 *)0x8c336f7c;
    *(Vector3 *)&(&frame)->f48 = *(Vector3 *)&*(Vector3 *)0x8c336f88;
    call_8c0a2144(6);
    *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&(&frame)->f54;
    *(Vector3 *)&(&frame)->f28 = *(Vector3 *)&(&frame)->f48;
    (&frame)->f14 = 0x1693;
    call_8c0a22fc((Frame *)((&frame)));
}
