#ifndef ABSOLEM_STATE_H
#define ABSOLEM_STATE_H

#include <utility>
#include "common/containers.h"
#include "common/keys.h"
#include "common/Time.h"

namespace absolem {

    // a type to represent the current state of the physical switches
    // when did the scan happen, and which keys were active at that time?
    using State = std::pair<Time, Set<Key>>;

} // namespace absolem

#endif