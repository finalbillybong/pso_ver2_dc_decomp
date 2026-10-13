typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    int f94;
};
extern void call_8c04f9a8(void);
extern void call_8c04fa44(void);
extern void call_8c04fae8(void);
void operation_8c04f964(Object *o)
{
    if (o->f94 != 0) {
        if (o->f94 == 1) {
            goto L_8c04f980;
        }
    } else {
        call_8c04f9a8();
        return;
L_8c04f980:;
        call_8c04fa44();
        return;
    }
    call_8c04fae8();
}
