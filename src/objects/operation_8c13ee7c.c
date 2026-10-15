typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_0 Arg0_0_0;
extern int hierarchy_is_active(void *);
extern void call_8c0a7608(void *, int);
void operation_8c13ee7c(Object *o)
{
    unsigned int v3;
    int v1;
    int v2;
    int v4;
    int v5;
    int v6;
    int t1;
    v1 = (int)0x180;
    v3 = (unsigned int)0;
    v2 = (int)0x138;
    while ((unsigned int)*(int *)((char *)((char *)o + 0x0) + (v2)) > v3) {
        v4 = (int)(v3 << 2);
        v5 = (int)(v4 << 2);
        v6 = (int)(v5 << 1);
        t1 = hierarchy_is_active((void *)(*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v6))));
        if (t1 == 0) {
            *(int *)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v6)) = 0;
        }
        if (*(int *)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v6)) != 0) {
            if (*(int *)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x10) + (v6)) >= 0) {
                call_8c0a7608((void *)(*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v6))), (int)((int)*(int *)((char *)((char *)o + 0x0) + (v1)) + v6 + 4));
            } else {
                call_8c0a7608((void *)(*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v6))), (int)((int)o + 0x3c));
            }
        }
        v3 = (unsigned int)(v3 + 1);
    }
}
