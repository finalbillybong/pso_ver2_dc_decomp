typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    unsigned short f00;
};
extern int lookup_low_id(int);
extern short operation_8c01d728(void *);
int operation_8c169230(int a0, Arg1 *a1)
{
    int t1;
    int t3;
    int v2;
    int t2;
    int v1;
    int t4;
    if (*(int *)0x8c418248 == a1->f00) {
        return 1;
    }
    t1 = lookup_low_id(a0);
    if (t1 == 0) {
        return 0;
    }
    t3 = operation_8c01d728((void *)t1);
    v1 = (int)0x37c;
    v2 = (int)0;
    while (4 > v2) {
        if (a0 != v2) {
            t2 = lookup_low_id(v2);
            if (t2 != 0 && *(int *)((char *)((char *)t1 + 0x0) + (v1)) == *(int *)((char *)((char *)t2 + 0x0) + (v1))) {
                t4 = operation_8c01d728((void *)t2);
                if (t3 == t4) {
                    return 1;
                }
            }
        }
        v2 = (int)(v2 + 1);
    }
    return 0;
}
