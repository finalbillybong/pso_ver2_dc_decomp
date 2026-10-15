typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void create_related_object_8c21aeb4(void *, void *);
void operation_8c1b3468(int a0)
{
    int v1;
    int v2;
    v1 = (int)(void *)0x8c4e2840;
    v2 = (int)0;
    while (0x40 > v2) {
        create_related_object_8c21aeb4((void *)a0, (void *)v1);
        v2 = (int)(v2 + 1);
        v1 = (int)(v1 + 0xc);
    }
}
