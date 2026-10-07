#ifndef PSO_OBJECT_ID_FIELDS_H
#define PSO_OBJECT_ID_FIELDS_H
/* Names describe observed offsets; gameplay roles remain provisional. */
typedef struct ObjectIdFields {
    char unknown_00[438];
    unsigned short id_1b6;
    char unknown_1b8[334];
    unsigned short id_306;
} ObjectIdFields;
typedef struct ObjectIdSource {
    char unknown_00[32];
    short id_20;
} ObjectIdSource;
typedef char check_id_1b6[(unsigned long)&((ObjectIdFields *)0)->id_1b6 == 438 ? 1 : -1];
typedef char check_id_306[(unsigned long)&((ObjectIdFields *)0)->id_306 == 774 ? 1 : -1];
typedef char check_id_20[(unsigned long)&((ObjectIdSource *)0)->id_20 == 32 ? 1 : -1];
typedef char check_id_fields_prefix[sizeof(ObjectIdFields) == 776 ? 1 : -1];
typedef char check_id_source_prefix[sizeof(ObjectIdSource) == 34 ? 1 : -1];
#endif
