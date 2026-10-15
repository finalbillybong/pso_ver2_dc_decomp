typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
};
extern void set_child_blend(void);
extern void call_8c38e354(Frame *, int, int);
void operation_8c0cb3dc(int a0)
{
    Frame frame;
    (&frame)->f00 = a0 + 0x20;
    (&frame)->f04 = a0 + 0x38;
    (&frame)->f08 = 0;
    (&frame)->f0c = 2;
    set_child_blend();
    call_8c38e354((Frame *)((&frame)), 1, 0x40);
}
