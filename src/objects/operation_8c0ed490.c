typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern char g_8c308b3c[];
extern void call_8c37eb1c(void *, int, int, float);
extern void call_8c380ab8(int, int);
void operation_8c0ed490(Object *o)
{
    call_8c37eb1c((void *)((void *)g_8c308b3c), 0, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c308b3c + 0x20)), 1, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c308b3c + 0x40)), 2, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c308b3c + 0x60)), 3, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c308b3c + 0x80)), 4, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c308b3c + 0xa0)), 5, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c308b3c + 0xc0)), 6, 0, -150.0f);
    call_8c37eb1c((void *)((g_8c308b3c + 0xe0)), 7, 0, -150.0f);
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c37eb1c((void *)((g_8c308b3c + 0x120)), 9, 0x20, -150.0f);
    call_8c37eb1c((void *)((g_8c308b3c + 0x140)), 0xa, 0x20, -150.0f);
    call_8c37eb1c((void *)((g_8c308b3c + 0x160)), 0xb, 0x20, -150.0f);
    call_8c37eb1c((void *)(&*(int *)((char *)g_8c308b3c + ((int)o->f24 + 9 << 5))), 0xc, 0x20, -150.0f);
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
}
