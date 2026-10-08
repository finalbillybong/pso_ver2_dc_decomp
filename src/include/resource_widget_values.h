#ifndef PSO_RESOURCE_WIDGET_VALUES_H
#define PSO_RESOURCE_WIDGET_VALUES_H
/* Provisional value views; virtual query is observed at slot76. */
struct WidgetActorStats {char unknown00[28];int current,maximum;};
class WidgetActorBase {public:char unknown00[24];
virtual void unknown0();
virtual void unknown1();
virtual void unknown2();
virtual void unknown3();
virtual void unknown4();
virtual void unknown5();
virtual void unknown6();
virtual void unknown7();
virtual void unknown8();
virtual void unknown9();
virtual void unknown10();
virtual void unknown11();
virtual void unknown12();
virtual void unknown13();
virtual void unknown14();
virtual void unknown15();
virtual void unknown16();
virtual int query();};
class WidgetActor:public WidgetActorBase {public:char unknown1c[360];WidgetActorStats *stats;};
struct WidgetValueRow {char unknown00[32];int value;};
struct WidgetValueTable {WidgetValueRow *rows[17];};
struct WidgetValueOwner {char unknown00[48];WidgetValueTable *table;};
typedef char check_WidgetActorStats_current[(unsigned long)&((WidgetActorStats *)0)->current == 28 ? 1 : -1];
typedef char check_WidgetActorStats_maximum[(unsigned long)&((WidgetActorStats *)0)->maximum == 32 ? 1 : -1];
typedef char check_WidgetActorStats_prefix[sizeof(WidgetActorStats) == 36 ? 1 : -1];
typedef char check_WidgetActorBase_unknown00[(unsigned long)&((WidgetActorBase *)0)->unknown00 == 0 ? 1 : -1];
typedef char check_WidgetActorBase_prefix[sizeof(WidgetActorBase) == 28 ? 1 : -1];
typedef char check_WidgetActor_stats[(unsigned long)&((WidgetActor *)0)->stats == 388 ? 1 : -1];
typedef char check_WidgetActor_prefix[sizeof(WidgetActor) == 392 ? 1 : -1];
typedef char check_WidgetValueRow_value[(unsigned long)&((WidgetValueRow *)0)->value == 32 ? 1 : -1];
typedef char check_WidgetValueRow_prefix[sizeof(WidgetValueRow) == 36 ? 1 : -1];
typedef char check_WidgetValueTable_rows[(unsigned long)&((WidgetValueTable *)0)->rows == 0 ? 1 : -1];
typedef char check_WidgetValueTable_prefix[sizeof(WidgetValueTable) == 68 ? 1 : -1];
typedef char check_WidgetValueOwner_table[(unsigned long)&((WidgetValueOwner *)0)->table == 48 ? 1 : -1];
typedef char check_WidgetValueOwner_prefix[sizeof(WidgetValueOwner) == 52 ? 1 : -1];
#endif
