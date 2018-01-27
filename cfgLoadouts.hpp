#include "loadouts\list_macros.hpp"
#include "loadouts\medicDefines.hpp"

class Loadouts {
    baseDelay = 5;
    handleRadios = 1;
    resetLoadout = 0;

    class Faction {
        #include "loadouts\BAF.hpp"
        #include "loadouts\BwFleck.hpp"
        #include "loadouts\BwTrop.hpp"
        #include "loadouts\Taliban.hpp"
    };
};
