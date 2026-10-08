#ifndef PSO_WIDGET_PANEL_RENDER_H
#define PSO_WIDGET_PANEL_RENDER_H
#include "src/include/widget_panel.h"
/* Provisional full instance prefix and two-coordinate rendering view. */
typedef struct WidgetPanelInstance {int field00;short flags;char unknown06[18];void *dispatch;short field1c,field1e;} WidgetPanelInstance;
typedef struct WidgetPanelScale {float x,y;} WidgetPanelScale;
typedef char check_WidgetPanelInstance_field00[(unsigned long)&((WidgetPanelInstance *)0)->field00 == 0 ? 1 : -1];
typedef char check_WidgetPanelInstance_flags[(unsigned long)&((WidgetPanelInstance *)0)->flags == 4 ? 1 : -1];
typedef char check_WidgetPanelInstance_dispatch[(unsigned long)&((WidgetPanelInstance *)0)->dispatch == 24 ? 1 : -1];
typedef char check_WidgetPanelInstance_field1c[(unsigned long)&((WidgetPanelInstance *)0)->field1c == 28 ? 1 : -1];
typedef char check_WidgetPanelInstance_field1e[(unsigned long)&((WidgetPanelInstance *)0)->field1e == 30 ? 1 : -1];
typedef char check_WidgetPanelInstance_size[sizeof(WidgetPanelInstance) == 32 ? 1 : -1];
typedef char check_WidgetPanelScale_x[(unsigned long)&((WidgetPanelScale *)0)->x == 0 ? 1 : -1];
typedef char check_WidgetPanelScale_y[(unsigned long)&((WidgetPanelScale *)0)->y == 4 ? 1 : -1];
typedef char check_WidgetPanelScale_size[sizeof(WidgetPanelScale) == 8 ? 1 : -1];
#endif
