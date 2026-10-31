typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern void call_8c38c0f0(Frame *);
void operation_8c1030a4(int a0, int a1)
{
    Frame frame;
    frame.f00 = (float)((unsigned int)a1 >> 24 & 0xff) / 255.0f;
    frame.f04 = (float)((unsigned int)a1 >> 16 & 0xff) / 255.0f;
    frame.f08 = (float)((unsigned int)a1 >> 8 & 0xff) / 255.0f;
    frame.f0c = (float)((unsigned int)a1 & 0xff) / 255.0f;
    call_8c38c0f0(&frame);
}
