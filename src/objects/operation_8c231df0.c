typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
extern void call_8c0a2144(int);
extern void call_8c0a237c(void *, Frame *);
void operation_8c231df0(void)
{
    Frame frame;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&*(Vector3 *)0x8c338bf0;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)0x8c338bfc;
    call_8c0a2144(6);
    call_8c0a237c((void *)(&(&frame)->f0c), (Frame *)((&frame)));
}
