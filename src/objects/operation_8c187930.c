typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char f00;
    char f01;
    unsigned short f02;
    int f04;
    int f08;
    int f0c;
};
extern int g_8c418248;
extern int g_8c44be04;
extern int g_8c4dbbe8;
extern int g_8c4dbc0c;
extern void operation_8c0368a8(void *);
void operation_8c187930(int a0)
{
    Frame frame;
    (&frame)->f00 = 0x67;
    (&frame)->f01 = 4;
    (&frame)->f02 = 0xffff;
    (&frame)->f04 = (int)(g_8c44be04);
    (&frame)->f08 = a0;
    g_8c4dbc0c += 1;
    g_8c4dbbe8 = 1;
    (&frame)->f0c = (int)(g_8c418248);
    operation_8c0368a8((void *)(&frame));
}
