typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x37c];
    int f37c;
};
extern int current_effect_mode(void);
void operation_8c02c100(Object *o)
{
    int v1;
    int v5;
    int t1;
    if (*(int *)0x8c2e2ad8 != 0) {
        v1 = (int)(*(int *)0x8c510ba0 != 0);
        if (v1 != 0) {
            v5 = (int)*(int *)0x8c44be04;
            goto L_8c02c12a;
        }
    }
    t1 = current_effect_mode();
    v5 = (int)t1;
L_8c02c12a:;
    o->f37c = v5;
}
