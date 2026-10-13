typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
struct S_c8c053d84 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x9e];
    unsigned short fd6;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int hierarchy_is_active(void *);
extern int operation_8c054248(void *, int, int);
int operation_8c0541b4(int a0, int a1)
{
    int v3;
    int v4;
    S_c8c053d84 *t1;
    int t2;
    int t3;
    t1 = lookup_object_by_id((unsigned short)a0);
    if (t1 == 0) {
        return 0;
    }
    t2 = hierarchy_is_active((void *)t1);
    if (t2 == 0 || ((t1->f34 & 0x4040800)) != 0) {
        return 0;
    }
    t3 = operation_8c054248((void *)t1, (int)((short)a1), 1);
    if (t3 == 0) {
        return 0;
    }
    v3 = (int)((t1->fd6 & 0xffff) == 1);
    v4 = (int)t1;
    if (v3 == 0) {
        v4 = (int)0;
    }
    return (int)(v4);
}
