#pragma once

#include <memory>
#include "token.hpp"

namespace mstch {
    class render_context;
    namespace state {
        class render_state {
        public:
            virtual std::string render(
                    render_context& context, const token& token) = 0;
        };
    }
}
