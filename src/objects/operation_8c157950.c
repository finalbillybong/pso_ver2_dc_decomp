typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8c];
    int f8c;
};
extern char g_8c316250[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern void call_8c088b28(Object *);
void operation_8c157950(Object *o)
{
    if (!(o->f8c >= 0)) {
        call_8c38c5b6(-0xff0100);
        call_8c38cf80(0x13001f, (void *)((g_8c316250 + 0x123)));
        call_8c38c5b6(-0xf0f10);
        return;
    }
    call_8c088b28(o);
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001f, (void *)((g_8c316250 + 0x141)));
    call_8c38c5b6(-0xf0f10);
}
