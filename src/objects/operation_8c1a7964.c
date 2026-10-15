typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x80];
    int f80;
};
extern char g_8c323e1c[];
extern void call_8c38c5aa(int);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern int update_text_buffer(void *);
extern void operation_8c1a7d14(void *, int, int);
void operation_8c1a7964(Object *o)
{
    int t1;
    call_8c38c5aa(0xe);
    call_8c38c5b6(-0xf0f10);
    call_8c38cf80(0x4000a, (void *)((g_8c323e1c + 0x2d)));
    call_8c38c5aa(0xc);
    t1 = update_text_buffer((void *)(((char *)o + 0x48)));
    if (t1 > 0) {
        operation_8c1a7d14((void *)o, (int)(((char *)o + 0x60)), 1);
        o->f80 = 0;
    }
}
