typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c418248;
extern void create_actor_callback(unsigned short, void *);
extern void call_8c027ff0(int, int);
int operation_8c027f48(int a0)
{
    int v1;
    int v2;
    int v4;
    v1 = (int)g_8c418248;
    if (v1 == 0xffff) {
        v4 = (int)0;
    } else {
        if (v1 >= 0xc) {
            v2 = (int)0;
        } else {
            v2 = (int)*(int *)((char *)0x8c41ce2c + (v1 << 2));
        }
        v4 = (int)v2;
    }
    if (v4 == 0) {
        create_actor_callback((unsigned short)v1, (void *)((void *)0x8c027fa4));
        return 0;
    }
    call_8c027ff0(v4, a0);
    return 1;
}
