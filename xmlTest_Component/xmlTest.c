
// Uart01Component.c
//
// Specifies the main source file of the component. Add initialization and event registrations to
// the files COMPONENT_INIT functions.


// Include the core framework C APIs.
#include "legato.h"

// Include your component's API interfaces.
#include "interfaces.h"


#include <libxml/parser.h>
#include <libxml/tree.h>





// This function is called only once on startup.  Place your initialization and event registration
// here.
COMPONENT_INIT
{
    xmlDocPtr doc;
    doc = NULL;
    if(doc == NULL)
    {
         LE_INFO("Is Empty");
    }
    doc = xmlParseFile("test.xml");
    xmlFreeDoc(doc);

}
