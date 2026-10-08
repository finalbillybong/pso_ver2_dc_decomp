#ifndef PSO_LOW_ID_VIRTUAL_H
#define PSO_LOW_ID_VIRTUAL_H
/* Provisional virtual base and ID prefix; no destructor body is reconstructed here. */
class LowIdBase { public: char unknown00[24]; virtual ~LowIdBase(); };
class LowIdObject : public LowIdBase {
public:
    char unknown1c[4];
    unsigned short id;
    virtual ~LowIdObject();
};
typedef char check_low_id_base_prefix[sizeof(LowIdBase) == 28 ? 1 : -1];
typedef char check_low_id_field[(unsigned long)&((LowIdObject *)0)->id == 32 ? 1 : -1];
typedef char check_low_id_object_prefix[sizeof(LowIdObject) == 36 ? 1 : -1];
#endif
