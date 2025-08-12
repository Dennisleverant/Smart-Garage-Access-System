#ifndef _SGAS_HOME_ASSISTANT_H
#define _SGAS_HOME_ASSISTANT_H

#include "BootstrapManager.h"

extern String uniqueID;

void ha_autodiscovery_setup(BootstrapManager * bootstrapManager);
void ha_autodiscovery_door(BootstrapManager * bootstrapManager);
void ha_autodiscovery_light(BootstrapManager * bootstrapManager);
void ha_autodiscovery_obs(BootstrapManager * bootstrapManager);

#endif