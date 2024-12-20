
#pragma once
#include <ecs/ecs.hpp>

namespace jbx {

    /*
        Modifies entity position based on the current velocity.
    */
    class Basic_Velocity_System final : public Base_System {
    public:
        Basic_Velocity_System();
        ~Basic_Velocity_System() = default;

        void
        update(f64 delta_time) override;
    };

} // jbx
