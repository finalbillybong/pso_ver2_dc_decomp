typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
    float f04;
};
void set_fields_8c1a654c(int a0, Arg1 *a1)
{
    a1->f00 = 146.0f;
    a1->f04 = 96.0f;
}
