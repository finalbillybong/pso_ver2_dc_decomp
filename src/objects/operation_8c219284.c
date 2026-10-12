typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
struct Arg1 {
    unsigned char f00;
    char f01;
};
struct Frame {
    char unknown0[0x10];
};
extern void initialize_fields_8c207358(void *);
extern void call_8c1c8d90(Arg1 *, Frame *);
void operation_8c219284(int a0, Arg1 *a1)
{
    Frame frame;
    if (a1->f00 == 2) {
        initialize_fields_8c207358((void *)(&frame));
        a1->f01 = 0;
        call_8c1c8d90(a1, (Frame *)((&frame)));
    }
}
