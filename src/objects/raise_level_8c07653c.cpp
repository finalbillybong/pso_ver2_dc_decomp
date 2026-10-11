class Gauge {
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
};
typedef struct GaugeData { char unknown0[0x1e4]; unsigned char current; unsigned char maximum; } GaugeData;
extern "C" int raise_level_8c07653c(Gauge *o, unsigned char amount)
{
    GaugeData *data = (GaugeData *)o;
    unsigned char maximum = data->maximum;
    if ((unsigned char)data->current > (unsigned char)maximum - amount) data->current = maximum;
    else data->current = (unsigned char)data->current + amount;
    o->v23();
    return 1;
}
