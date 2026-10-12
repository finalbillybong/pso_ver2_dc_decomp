typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
extern void call_8c0dc710(void *);
void operation_8c18cbb0(Object *o)
{
    int v1;
    v1 = (int)0;
    while (6 > v1) {
        if (*(int *)((char *)((char *)o + 0x58) + (v1 << 2)) != 0) {
            call_8c0dc710(*(Arg0_58 **)((char *)((char *)o + 0x58) + (v1 << 2)));
        }
        v1 = (int)(v1 + 1);
    }
}
