typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int lookup_low_id(int);
int operation_8c2446d0(void)
{
    int v1;
    int v3;
    int v2;
    int t1;
    v1 = (int)1;
    v2 = (int)0;
    while (4 > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0 && *(char *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c510cc8))) == 0) {
            v3 = (int)0;
            goto L_8c2446fc;
        }
        v2 = (int)(v2 + 1);
    }
    v3 = (int)v1;
L_8c2446fc:;
    return (int)(v3);
}
