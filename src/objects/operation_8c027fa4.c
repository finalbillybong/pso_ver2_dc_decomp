typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern S_g8c418248 *g_8c418248;
extern int g_8c4db9e0;
extern int lookup_low_id(int);
extern void create_actor_callback(unsigned short, void *);
extern void call_8c027ff0(int, int);
void operation_8c027fa4(void)
{
    char *v1;
    int t1;
    v1 = (char *)g_8c4db9e0;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        create_actor_callback((unsigned short)g_8c418248, (void *)((void *)0x8c027fa4));
        return;
    }
    call_8c027ff0(t1, (int)(v1));
}
