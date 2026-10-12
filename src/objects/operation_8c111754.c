typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int lookup_low_id(int);
extern void call_8c02ab70(int);
void operation_8c111754(void)
{
    int v1;
    int t1;
    v1 = (int)0;
    while (4 > v1) {
        t1 = lookup_low_id(v1);
        if (t1 != 0) {
            call_8c02ab70(t1);
        }
        v1 = (int)(v1 + 1);
    }
}
