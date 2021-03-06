/*
 * AUTO-GENERATED _componentMain.c for the xmlTest_Component component.

 * Don't bother hand-editing this file.
 */

#include "legato.h"

#ifdef __cplusplus
extern "C" {
#endif

// Component log session variables.
le_log_SessionRef_t xmlTest_Component_LogSession;
le_log_Level_t* xmlTest_Component_LogLevelFilterPtr;

// Declare component's COMPONENT_INIT_ONCE function,
// and provide default empty implementation.
__attribute__((weak))
COMPONENT_INIT_ONCE
{
}
// Component initialization function (COMPONENT_INIT).
COMPONENT_INIT;

// Library initialization function.
// Will be called by the dynamic linker loader when the library is loaded.
__attribute__((constructor)) void _xmlTest_Component_Init(void)
{
    LE_DEBUG("Initializing xmlTest_Component component library.");

    // Register the component with the Log Daemon.
    xmlTest_Component_LogSession = le_log_RegComponent("xmlTest_Component", &xmlTest_Component_LogLevelFilterPtr);

    // Queue the default component's COMPONENT_INIT_ONCE to Event Loop.
    le_event_QueueFunction(&COMPONENT_INIT_ONCE_NAME, NULL, NULL);

    // Queue the COMPONENT_INIT function to be called by the event loop
    le_event_QueueFunction(&COMPONENT_INIT_NAME, NULL, NULL);
}


#ifdef __cplusplus
}
#endif
