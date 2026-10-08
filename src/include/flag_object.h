#ifndef PSO_FLAG_OBJECT_H
#define PSO_FLAG_OBJECT_H
/* Observed 44-byte object prefix; field roles remain provisional. */
typedef struct FlagObject {
    unsigned int tag;
    char unknown04[20];
    void *dispatch;
    char unknown1c[2];
    unsigned short size;
    unsigned char state;
    char unknown21[3];
    int field24, field28;
} FlagObject;
typedef char check_flag_object_tag[(unsigned long)&((FlagObject *)0)->tag == 0 ? 1 : -1];
typedef char check_flag_object_dispatch[(unsigned long)&((FlagObject *)0)->dispatch == 24 ? 1 : -1];
typedef char check_flag_object_size[(unsigned long)&((FlagObject *)0)->size == 30 ? 1 : -1];
typedef char check_flag_object_state[(unsigned long)&((FlagObject *)0)->state == 32 ? 1 : -1];
typedef char check_flag_object_field24[(unsigned long)&((FlagObject *)0)->field24 == 36 ? 1 : -1];
typedef char check_flag_object_field28[(unsigned long)&((FlagObject *)0)->field28 == 40 ? 1 : -1];
typedef char check_flag_object_extent[sizeof(FlagObject) == 44 ? 1 : -1];
#endif
