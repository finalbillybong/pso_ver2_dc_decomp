typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block68 {
    int words[17];
} Block68;
typedef struct S_g8c4189e4 S_g8c4189e4;
typedef struct S_g8c4189e8 S_g8c4189e8;
typedef struct S_x3568 S_x3568;
typedef struct S_x92912 S_x92912;
struct S_x92912 {
    Block68 f00;
};
struct S_x3568 {
    Block68 f00;
};
extern int current_effect_mode(void);
extern void operation_8c105458(int, int, int);
extern int call_8c011e9c(int);
extern void call_8c011ec0(int);
void operation_8c014028(void)
{
    int v3;
    int v4;
    int t1;
    int t2;
    if (*(int *)0x8c4189e4 != 0) {
        t2 = current_effect_mode();
        if (*(int *)0x8c44be20 != 0 || *(int *)0x8c4703c0 == 3) {
            v3 = (int)(t2 + 0x12);
        } else {
            v3 = (int)t2;
        }
        ((S_x92912 *)(*(int *)0x8c4189e4 + v3 * 0x44))->f00 = *(Block68 *)0x8c418280;
        operation_8c105458((int)((void *)0x8c2e2f0c), (int)(*(S_g8c4189e4 **)0x8c4189e4), (int)(*(S_g8c4189e8 **)0x8c4189e8));
        return;
    }
    t1 = call_8c011e9c(0xe58);
    if (t1 != 0) {
        v4 = (int)0;
        while (0x36 > v4) {
            ((S_x3568 *)(t1 + v4 * 0x44))->f00 = *(Block68 *)0x8c2e2e84;
            v4 = (int)(v4 + 1);
        }
        operation_8c105458((int)((void *)0x8c2e2f0c), t1, 0xe58);
        call_8c011ec0(t1);
    }
}
