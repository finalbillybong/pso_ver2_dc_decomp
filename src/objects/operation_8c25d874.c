typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c340550[];
extern int load_named_resource(void *);
void operation_8c25d874(void)
{
    int t1;
    t1 = load_named_resource((void *)((g_8c340550 + 0xd)));
    *(int *)0x8c513444 = (int)(t1);
}
