#ifndef LANE_H
#define LANE_H

#include <cstdint>
#include <vector>

namespace lane_tex::lane {
    struct LanePoint {
        uint64_t x;
        uint64_t y;

        float oil_level;
    };


    // using Board = std::vector<LanePoint>;

    class Board {
    public:
        Board(size_t length, size_t width);
        const std::size_t size() const noexcept { return board.size(); }

        LanePoint& operator[](std::size_t idx) { return board.at(idx); }
        const LanePoint& operator[](std::size_t idx) const { return board.at(idx); }
    
    private:
        std::vector<LanePoint> board;
    };

    using LaneMatrix = std::vector<Board>;

    class Lane {
    public:
        Lane(size_t length, size_t width);
        const Board& operator[](std::size_t idx) const { return lane_matrix.at(idx); }

    private:
        LaneMatrix lane_matrix;
    };
}
#endif // !LANE_H
