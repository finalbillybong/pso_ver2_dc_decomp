typedef struct Holder { char unknown0[0x20]; short count; } Holder;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual int used();
};
extern "C" int item_valid_8c1c9358(unsigned char *);
extern "C" void *find_node_8c16a3c0(Holder *, unsigned char *);
extern "C" Object *node_object_8c169508(void *);
extern "C" int item_count_8c1c74dc(unsigned char *);
extern "C" int item_capacity_8c022f5c(char *o, unsigned char *item)
{
    void *node;
    Object *object;
    int room;
    if (item_valid_8c1c9358(item)) {
        if ((unsigned char)*item == 4) return 1;
        node = find_node_8c16a3c0(*(Holder **)(o + 0xbc8), item);
        if (!node) return (*(Holder **)(o + 0xbc8))->count >= 30 ? 0 : 10;
        object = node_object_8c169508(node);
        if (!object) return 0;
        room = 10 - object->used();
        if (item_count_8c1c74dc(item) > room) room = 0;
        return room;
    }
    return (*(Holder **)(o + 0xbc8))->count < 30;
}
