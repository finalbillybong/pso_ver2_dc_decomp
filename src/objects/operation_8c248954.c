typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    int f08;
};
struct S_L8c339ca0 {
    char unknown0[0x28];
    int f28;
};
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
void operation_8c248954(Object *o)
{
    int v1;
    int v2;
    int v5;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 != 0) {
        v2 = (int)o->f08;
        if (v2 < 0 || v2 > 1) {
            v5 = (int)0;
        } else {
            v5 = (int)v2;
        }
        (&g_8c339ca0)->f28 = (int)(v5);
    }
    /* TODO 8c248954..8c248974
     * 8c248954 mov.l 0x8c248978,r1
     * 8c248956 mov.l @r1,r1
     * 8c248958 tst r1,r1
     * 8c24895a subc r0,r0
     * 8c24895c add #0x1,r0
     * 8c24895e tst r0,r0
     * 8c248960 bt 0x8c248974
     * 8c248962 mov.l @(0x8,r4),r1
     * 8c248964 cmp/pz r1
     * 8c248966 bf 0x8c24896e
     * 8c248968 mov #0x1,r0
     * 8c24896a cmp/gt r0,r1
     * 8c24896c bf 0x8c248970
     * 8c24896e mov #0x0,r1
     * 8c248970 mov.l 0x8c24897c,r0
     * 8c248972 mov.l r1,@(0x28,r0)
     * 8c248974 rts
     */
}
