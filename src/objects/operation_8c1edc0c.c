typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern int lookup_low_id(int);
extern int object_ready(void *);
extern void call_8c168e70(int, int);
void operation_8c1edc0c(int a0)
{
    int t1;
    int t2;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = object_ready((void *)a0);
        if (t2 != 0) {
            call_8c168e70((int)((int)(t1 + 0x418) + 0x78), a0);
        }
    }
}
