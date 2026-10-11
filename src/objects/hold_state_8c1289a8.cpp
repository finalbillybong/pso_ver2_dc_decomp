typedef struct Data {
    char unknown0[0x34];
    int flags;
    char unknown38[0x2d2];
    short state;
    char unknown30c[0x48];
    short request;
    char unknown356[0x3a];
    int next_state;
    char unknown394[0x8];
    int previous_state;
    char unknown3a0[0x4];
    int status;
    char unknown3a8[0x34];
    float limit;
    char unknown3e0[0x2];
    short hold;
} Data;
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
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void refresh();
};
extern "C" void hold_state_8c1289a8(Object *o, short value)
{
    Data *data = (Data *)o;
    data->hold = value;
    data->request = value;
    {
        int *bits = &data->status;
        *bits |= 0x20000000;
    }
    data->flags &= ~0x40000;
    data->limit = 100000.0f;
    if (!(data->status & 1)) {
        int state = data->state;
        if (state != 10) {
            data->previous_state = state;
            data->next_state = 10;
        }
    }
    o->refresh();
}
