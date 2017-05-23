#pragma once

#include <core/mw/CoreConfiguration.hpp>

namespace core {
namespace QEI_driver {
CORE_CONFIGURATION_BEGIN(QEI_AngularSpeed) //Angular Speed for QEI device
// --- FIELDS -----------------------------------------------------------------
CORE_CONFIGURATION_FIELD(ticks, FLOAT32, 1)   // Number of ticks per revolution [1]
CORE_CONFIGURATION_FIELD(period, UINT16, 1)   // Update period [ms] [50]
CORE_CONFIGURATION_FIELD(invert, UINT8, 1)   // Invert rotation direction [0]
// ----------------------------------------------------------------------------
CORE_CONFIGURATION_SIGNATURE(0x592952d1)
CORE_CONFIGURATION_LENGTH(3)
CORE_CONFIGURATION_END()
}
}
