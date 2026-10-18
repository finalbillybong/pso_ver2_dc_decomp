typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block128 {
    int words[32];
} Block128;
typedef struct S_c8c1dc6e4 S_c8c1dc6e4;
typedef struct Frame Frame;
struct Frame {
    Block128 f00;
};
struct S_c8c1dc6e4 {
    Block128 f00;
};
extern S_c8c1dc6e4 *operation_8c1dc6e4(int);
void operation_8c1dc684(int a0, int a1)
{
    Frame frame;
    S_c8c1dc6e4 *t1;
    S_c8c1dc6e4 *t2;
    t1 = operation_8c1dc6e4(a0);
    t2 = operation_8c1dc6e4(a1);
    *(Block128 *)&(&frame)->f00 = *(Block128 *)&t1->f00;
    *(Block128 *)&t1->f00 = *(Block128 *)&t2->f00;
    *(Block128 *)&t2->f00 = *(Block128 *)&(&frame)->f00;
}
