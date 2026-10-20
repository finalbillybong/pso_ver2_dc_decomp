typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern void create_effect_at_position(unsigned short, void *);
void operation_8c16e4ec(int a0)
{
    Frame frame;
    char *base;
    base = *(char **)0x8c4db408;
    (&frame)->f00 = (float)*(int *)(base + (a0++ << 2));
    (&frame)->f04 = (float)*(int *)(base + (a0++ << 2));
    (&frame)->f08 = (float)*(int *)(base + (a0++ << 2));
    create_effect_at_position((unsigned short)*(int *)(base + (a0 << 2)), (void *)(&frame));
}
