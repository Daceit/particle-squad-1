##pragma once
#include "particleSystem.h"
#include "particleGraphics.h"
#include <cstdlib> //rand()
#include <ctime> //time(nullptr) random number gen
#include <thread> //control fps
#include <chrono> //used with thread
#include <unistd.h> //usleep

void rain() {
    clearscreen();
    auto [rows, cols] = get_terminal_size();
    particleSystem ps(rows - 1, cols - 1);
    std::srand(std::time(0));
    PartGraphic pg;
    for (int frame = 0; frame < 500; frame++) {
        for (int i = 0; i < 10; i++) {
            int x = std::rand() % (cols - 1);
            int y = 0;
            int z = 0, v = 1, e = rows;
            std::string movement = "STREAMER_Y";
            ps.addParticle(x, y, z, v, e, movement);
            pg.draw_rectangle(0, 0, cols - 1, rows - 1, true);
        }
        ps.moveParticles();
        usleep(1'000'000/5);
    }
};
