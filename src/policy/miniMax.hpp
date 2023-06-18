#pragma once
#include "../state/state.hpp"


/**
 * @brief Policy class for random policy, 
 * your policy class should have get_move method
 */
class miniMax{
public:
  static Move get_move(State *state);
  static int minimax(State *state, int depth, int minMaxPlayer);//minMaxPlayer:0 for min, 1 for max
};