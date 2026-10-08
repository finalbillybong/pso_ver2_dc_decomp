#ifndef PSO_WIDGET_PANEL_H
#define PSO_WIDGET_PANEL_H
/* Provisional views for the nine-group panel; names describe observed fields. */
typedef struct WidgetPanelState {int mode;float opacity,position;} WidgetPanelState;
typedef struct WidgetPanelGroup {int count;int codes[4];} WidgetPanelGroup;
typedef struct WidgetPanelMetric {short height;char unknown02[18];} WidgetPanelMetric;
typedef struct WidgetPanelOwner {char unknown00[24];void *dispatch;} WidgetPanelOwner;
typedef char check_WidgetPanelState_mode[(unsigned long)&((WidgetPanelState *)0)->mode == 0 ? 1 : -1];
typedef char check_WidgetPanelState_opacity[(unsigned long)&((WidgetPanelState *)0)->opacity == 4 ? 1 : -1];
typedef char check_WidgetPanelState_position[(unsigned long)&((WidgetPanelState *)0)->position == 8 ? 1 : -1];
typedef char check_WidgetPanelState_size[sizeof(WidgetPanelState) == 12 ? 1 : -1];
typedef char check_WidgetPanelGroup_count[(unsigned long)&((WidgetPanelGroup *)0)->count == 0 ? 1 : -1];
typedef char check_WidgetPanelGroup_codes[(unsigned long)&((WidgetPanelGroup *)0)->codes == 4 ? 1 : -1];
typedef char check_WidgetPanelGroup_size[sizeof(WidgetPanelGroup) == 20 ? 1 : -1];
typedef char check_WidgetPanelMetric_height[(unsigned long)&((WidgetPanelMetric *)0)->height == 0 ? 1 : -1];
typedef char check_WidgetPanelMetric_size[sizeof(WidgetPanelMetric) == 20 ? 1 : -1];
typedef char check_WidgetPanelOwner_dispatch[(unsigned long)&((WidgetPanelOwner *)0)->dispatch == 24 ? 1 : -1];
typedef char check_WidgetPanelOwner_size[sizeof(WidgetPanelOwner) == 28 ? 1 : -1];
#endif
