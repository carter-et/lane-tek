#include "lane.h"

namespace lane_tex::lane {

    Board::Board(size_t length, size_t width) {

        for(uint64_t l = 0; l < length; ++l) {
            board.push_back(LanePoint{l, width, 0});
        }
    }


    Lane::Lane(uint64_t length, uint64_t width) {
        for (uint64_t w = 0; w < width; ++w) {
            lane_matrix.push_back(Board(length, w));
        }
    }
}