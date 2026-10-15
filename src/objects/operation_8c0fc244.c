typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
extern void operation_8c06536c(void *, void *);
extern void forward_effect_view(void *, void *);
void operation_8c0fc244(void)
{
    Frame frame;
    operation_8c06536c((void *)(&frame), (void *)(&(&frame)->f0c));
    forward_effect_view((void *)(&frame), (void *)(&(&frame)->f0c));
}
