typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c44bea4 S_g8c44bea4;
class S_g8c44be80 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_g8c44be80Data {

} S_g8c44be80Data;
extern "C" void update_hierarchy(void *);
extern "C" void visit_hierarchy_10(void *);
extern "C" void describe_hierarchy_node(void *);
extern "C" int call_8c104da8(void);
extern "C" void call_8c0308ec(void);
extern "C" void call_8c379280(void);
extern "C" void call_8c380516(void);
extern "C" void operation_8c104c60(void)
{
    int t1;
    update_hierarchy(*(S_g8c44be80 **)0x8c44be80);
    update_hierarchy(*(S_g8c44bea0 **)0x8c44bea0);
    update_hierarchy(*(S_g8c44bea4 **)0x8c44bea4);
    visit_hierarchy_10(*(S_g8c44be80 **)0x8c44be80);
    visit_hierarchy_10(*(S_g8c44bea0 **)0x8c44bea0);
    visit_hierarchy_10(*(S_g8c44bea4 **)0x8c44bea4);
    describe_hierarchy_node(*(S_g8c44be80 **)0x8c44be80);
    (*(S_g8c44be80 **)0x8c44be80)->v3();
    t1 = call_8c104da8();
    if (t1 != 0) {
        call_8c0308ec();
        call_8c379280();
    }
    call_8c380516();
}
