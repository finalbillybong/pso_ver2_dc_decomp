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
    virtual int count_v17();
};
extern "C" Object *lookup_low_id(int);
extern "C" int level_8c4dc5a4, rank_8c4dc5a0, option_8c4dc5a8, source_8c4703c0;
extern "C" int reset_a_8c4dbdcc, reset_b_8c4dc10c, reset_c_8c4dc290, reset_d_8c4dc5ac;
extern "C" int settings_8c41825c[2];
extern "C" void clamp_settings_8c1a0510(void)
{
    Object *target = lookup_low_id(*(int *)0x8c418248);
    if (target) level_8c4dc5a4 = target->count_v17() + 1;
    else level_8c4dc5a4 = 1;
    if (level_8c4dc5a4 < 1) level_8c4dc5a4 = 1;
    if (level_8c4dc5a4 > 199) level_8c4dc5a4 = 199;
    if ((rank_8c4dc5a0 = settings_8c41825c[1]) < 0) rank_8c4dc5a0 = 0;
    if (rank_8c4dc5a0 > 9) rank_8c4dc5a0 = 9;
    if ((option_8c4dc5a8 = source_8c4703c0) < 0) option_8c4dc5a8 = 0;
    if (option_8c4dc5a8 > 3) option_8c4dc5a8 = 3;
    reset_a_8c4dbdcc = 0;
    reset_b_8c4dc10c = 0;
    reset_c_8c4dc290 = 0;
    reset_d_8c4dc5ac = 0;
}
