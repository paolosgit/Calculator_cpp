//
// Created by Paolo Octoman on 2/14/23.
//

#include "Base.h"

void Base::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(base);
}

Base::Base() {
    base.setSize({700, 1050});
    base.setPosition(450, 100);
    base.setFillColor({192,192,192});
}

void Base::move(float x, float y) {
    base.move(x,y);
}
