#ifndef PSO_WIDGET_DRAW_H
#define PSO_WIDGET_DRAW_H
/* Provisional rendering records; retain untouched gaps and exact field offsets. */
typedef struct WidgetDrawPosition {float x,y;} WidgetDrawPosition;
typedef struct WidgetDrawColor {float alpha,red,green,blue;} WidgetDrawColor;
typedef struct WidgetDrawRecord {WidgetDrawPosition position;float unknown08;WidgetDrawPosition scale;float unknown14;void *resource,*metrics;} WidgetDrawRecord;
typedef struct WidgetDrawList {void *positions;unsigned int *colors;void *unknown08;int count;} WidgetDrawList;
typedef char check_WidgetDrawPosition_x[(unsigned long)&((WidgetDrawPosition *)0)->x == 0 ? 1 : -1];
typedef char check_WidgetDrawPosition_y[(unsigned long)&((WidgetDrawPosition *)0)->y == 4 ? 1 : -1];
typedef char check_WidgetDrawPosition_size[sizeof(WidgetDrawPosition) == 8 ? 1 : -1];
typedef char check_WidgetDrawColor_alpha[(unsigned long)&((WidgetDrawColor *)0)->alpha == 0 ? 1 : -1];
typedef char check_WidgetDrawColor_red[(unsigned long)&((WidgetDrawColor *)0)->red == 4 ? 1 : -1];
typedef char check_WidgetDrawColor_green[(unsigned long)&((WidgetDrawColor *)0)->green == 8 ? 1 : -1];
typedef char check_WidgetDrawColor_blue[(unsigned long)&((WidgetDrawColor *)0)->blue == 12 ? 1 : -1];
typedef char check_WidgetDrawColor_size[sizeof(WidgetDrawColor) == 16 ? 1 : -1];
typedef char check_WidgetDrawRecord_position[(unsigned long)&((WidgetDrawRecord *)0)->position == 0 ? 1 : -1];
typedef char check_WidgetDrawRecord_unknown08[(unsigned long)&((WidgetDrawRecord *)0)->unknown08 == 8 ? 1 : -1];
typedef char check_WidgetDrawRecord_scale[(unsigned long)&((WidgetDrawRecord *)0)->scale == 12 ? 1 : -1];
typedef char check_WidgetDrawRecord_unknown14[(unsigned long)&((WidgetDrawRecord *)0)->unknown14 == 20 ? 1 : -1];
typedef char check_WidgetDrawRecord_resource[(unsigned long)&((WidgetDrawRecord *)0)->resource == 24 ? 1 : -1];
typedef char check_WidgetDrawRecord_metrics[(unsigned long)&((WidgetDrawRecord *)0)->metrics == 28 ? 1 : -1];
typedef char check_WidgetDrawRecord_size[sizeof(WidgetDrawRecord) == 32 ? 1 : -1];
typedef char check_WidgetDrawList_positions[(unsigned long)&((WidgetDrawList *)0)->positions == 0 ? 1 : -1];
typedef char check_WidgetDrawList_colors[(unsigned long)&((WidgetDrawList *)0)->colors == 4 ? 1 : -1];
typedef char check_WidgetDrawList_unknown08[(unsigned long)&((WidgetDrawList *)0)->unknown08 == 8 ? 1 : -1];
typedef char check_WidgetDrawList_count[(unsigned long)&((WidgetDrawList *)0)->count == 12 ? 1 : -1];
typedef char check_WidgetDrawList_size[sizeof(WidgetDrawList) == 16 ? 1 : -1];
#endif
