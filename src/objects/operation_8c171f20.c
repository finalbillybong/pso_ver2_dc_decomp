typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
    int f18;
    int f1c;
    char unknown20[0x4];
    float f24;
    char unknown28[0x8];
    int f30;
    char unknown34[0x8];
};
extern int g_8c4db408;
extern void initialize_resource_record(void *);
extern void operation_8c25d8b8(int);
void operation_8c171f20(int a0)
{
    Frame frame;
    char *v1;
    initialize_resource_record((void *)(&frame));
    (&frame)->f18 = 0;
    (&frame)->f1c = 1;
    v1 = (char *)g_8c4db408;
    (&frame)->f0c = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f10 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f14 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f24 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f30 = (int)(*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2)));
    operation_8c25d8b8((int)(&frame));
}
