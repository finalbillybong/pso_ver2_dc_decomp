#ifndef PSO_WIDGET_STAT_VALUES_H
#define PSO_WIDGET_STAT_VALUES_H
/* Provisional views of signed actor values and widget rows. */
typedef struct WidgetStatValues {short value[11];} WidgetStatValues;
typedef struct WidgetStatSource {char unknown00[2];short value02;char unknown04[8];short value0c;} WidgetStatSource;
typedef struct WidgetStatActor {
    char unknown00[388];
    WidgetStatSource *stats;
    char unknown188[34];
    short field1aa,field1ac,field1ae,field1b0,field1b2;
    char unknown1b4[22];
    short field1ca,field1cc,field1ce,field1d0,field1d2;
} WidgetStatActor;
typedef struct WidgetStatRow {char unknown00[28];unsigned int color;int value;} WidgetStatRow;
typedef struct WidgetStatTable {WidgetStatRow *rows[36];} WidgetStatTable;
typedef struct WidgetStatOwner {char unknown00[48];WidgetStatTable *table;} WidgetStatOwner;
typedef char check_WidgetStatValues_value[(unsigned long)&((WidgetStatValues *)0)->value == 0 ? 1 : -1];
typedef char check_WidgetStatValues_prefix[sizeof(WidgetStatValues) == 22 ? 1 : -1];
typedef char check_WidgetStatSource_value02[(unsigned long)&((WidgetStatSource *)0)->value02 == 2 ? 1 : -1];
typedef char check_WidgetStatSource_value0c[(unsigned long)&((WidgetStatSource *)0)->value0c == 12 ? 1 : -1];
typedef char check_WidgetStatSource_prefix[sizeof(WidgetStatSource) == 14 ? 1 : -1];
typedef char check_WidgetStatActor_stats[(unsigned long)&((WidgetStatActor *)0)->stats == 388 ? 1 : -1];
typedef char check_WidgetStatActor_field1aa[(unsigned long)&((WidgetStatActor *)0)->field1aa == 426 ? 1 : -1];
typedef char check_WidgetStatActor_field1ac[(unsigned long)&((WidgetStatActor *)0)->field1ac == 428 ? 1 : -1];
typedef char check_WidgetStatActor_field1ae[(unsigned long)&((WidgetStatActor *)0)->field1ae == 430 ? 1 : -1];
typedef char check_WidgetStatActor_field1b0[(unsigned long)&((WidgetStatActor *)0)->field1b0 == 432 ? 1 : -1];
typedef char check_WidgetStatActor_field1b2[(unsigned long)&((WidgetStatActor *)0)->field1b2 == 434 ? 1 : -1];
typedef char check_WidgetStatActor_field1ca[(unsigned long)&((WidgetStatActor *)0)->field1ca == 458 ? 1 : -1];
typedef char check_WidgetStatActor_field1cc[(unsigned long)&((WidgetStatActor *)0)->field1cc == 460 ? 1 : -1];
typedef char check_WidgetStatActor_field1ce[(unsigned long)&((WidgetStatActor *)0)->field1ce == 462 ? 1 : -1];
typedef char check_WidgetStatActor_field1d0[(unsigned long)&((WidgetStatActor *)0)->field1d0 == 464 ? 1 : -1];
typedef char check_WidgetStatActor_field1d2[(unsigned long)&((WidgetStatActor *)0)->field1d2 == 466 ? 1 : -1];
typedef char check_WidgetStatActor_prefix[sizeof(WidgetStatActor) == 468 ? 1 : -1];
typedef char check_WidgetStatRow_color[(unsigned long)&((WidgetStatRow *)0)->color == 28 ? 1 : -1];
typedef char check_WidgetStatRow_value[(unsigned long)&((WidgetStatRow *)0)->value == 32 ? 1 : -1];
typedef char check_WidgetStatRow_prefix[sizeof(WidgetStatRow) == 36 ? 1 : -1];
typedef char check_WidgetStatTable_rows[(unsigned long)&((WidgetStatTable *)0)->rows == 0 ? 1 : -1];
typedef char check_WidgetStatTable_prefix[sizeof(WidgetStatTable) == 144 ? 1 : -1];
typedef char check_WidgetStatOwner_table[(unsigned long)&((WidgetStatOwner *)0)->table == 48 ? 1 : -1];
typedef char check_WidgetStatOwner_prefix[sizeof(WidgetStatOwner) == 52 ? 1 : -1];
#endif
